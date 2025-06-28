/*
 * Controller.c
 *
 *  Created on: Jun 24, 2025
 *      Author: rhoblack
 */
#include "Controller.h"

static TreadmillState_t treadmillState = IDLE;
static int speed = 3;

static treadmillInput_TypeDef inputData = {0};



void Treadmill_Controller_SetInput(treadmillInput_TypeDef input)
{
    inputData = input;
}
//
void Treadmill_Controller_Excute()
{
    switch (treadmillState)
    {
        case IDLE:
        	DC_Motor_Stop();
            if (inputData.id == TREADMILL_START) {
                treadmillState = RUNNING;
                DC_Motor_SetFreq(1000, speed);
                DC_Motor_Start();
            }
            break;

        case RUNNING:
            if (inputData.id == TREADMILL_STOP) {
                treadmillState = IDLE;
                DC_Motor_Stop();
            }
            else if (inputData.id == TREADMILL_UP) {
                speed += 2;
                if (speed > 100) speed = 100;
                DC_Motor_SetFreq(1000, speed);
            }
            else if (inputData.id == TREADMILL_DOWN) {
                speed -= 2;
                if (speed < 0) speed = 0;
                DC_Motor_SetFreq(1000, speed);
            }
            else if (inputData.id == TREADMILL_EMERGENCY) {
                treadmillState = EMERGENCY;
                Sound_PowerOn();
            }
            break;
    }
    inputData.id = NO_INPUT;
    Presenter_DispLcdTreadmill(speed, treadmillState);
    treadmill_emergency();
}

void treadmill_emergency()
{
    int dist = UltraSonic_GetDistance(&sensor);

    if ((dist <= 5) && (dist >= 1) && (state == RUNNING)) {
    	Sound_PowerOn();
    } else {
    	Sound_PowerOff();
    }
}
