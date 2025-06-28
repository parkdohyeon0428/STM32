/*
 * Controller.c
 *
 *  Created on: Jun 24, 2025
 *      Author: rhoblack
 */
#include "Controller.h"

//static TreadmillState_t treadmillState = T_IDLE;
//static int speed = 30;
static treadmillInput_TypeDef inputData = {0};

void Treadmill_Controller_SetInput(treadmillInput_TypeDef input)
{
    inputData = input;
}
//
//void Treadmill_Controller_Excute()
//{
//    switch (treadmillState)
//    {
//        case T_IDLE:
//            if (inputData.id == TREADMILL_START) {
//                treadmillState = T_RUNNING;
//                DC_Motor_SetFreq(1000, speed);
//                DC_Motor_Start();
//            }
//            break;
//
//        case T_RUNNING:
//            if (inputData.id == TREADMILL_STOP) {
//                treadmillState = T_IDLE;
//                DC_Motor_Stop();
//            }
//            else if (inputData.id == TREADMILL_UP) {
//                speed += 5;
//                if (speed > 100) speed = 100;
//                DC_Motor_SetFreq(1000, speed);
//            }
//            else if (inputData.id == TREADMILL_DOWN) {
//                speed -= 5;
//                if (speed < 0) speed = 0;
//                DC_Motor_SetFreq(1000, speed);
//            }
//            else if (inputData.id == TREADMILL_EMERGENCY) {
//                treadmillState = T_EMERGENCY;
//                Sound_PowerOn();
//            }
//            break;
//
//        case T_EMERGENCY:
//        	if (inputData.id == TREADMILL_STOP) {
//        		treadmillState = T_IDLE;
//        		Sound_PowerOff();
//        	}
//            break;
//    }
//
//    inputData.id = NO_INPUT;
//
//    Presenter_DispLcdTreadmill(speed, treadmillState);
//}
