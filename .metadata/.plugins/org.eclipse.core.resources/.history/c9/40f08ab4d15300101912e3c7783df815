/*
 * elevator.c
 *
 *  Created on: Jun 27, 2025
 *      Author: kccistc
 */
#include <treadmill.h>


#define MAX_SPEED 100
#define MIN_SPEED 0

#define START   1
#define STOP	2
#define UP		3
#define DOWN    4

TreadmillState_t state = IDLE;
int speed = 3;

int treadmill_GetState()
{
	if (Button_GetState(&hBtnSTOP) == ACT_PUSHED) {
		return STOP;
	}
	else if (Button_GetState(&hBtnSTART) == ACT_PUSHED) {
		return START;
	}
	else if (Button_GetState(&hBtnUP) == ACT_PUSHED) {
		return UP;
	}
	else if (Button_GetState(&hBtnDOWN) == ACT_PUSHED) {
		return DOWN;
	}
	return 0;
}

void treadmill_run()
{
    switch (state)
    {
        case IDLE:
            if (Button_GetState(&hBtnSTART) == ACT_PUSHED) {
                state = RUNNING;
            }
            break;

        case RUNNING:
            DC_Motor_SetFreq(10, speed);
        	DC_Motor_Start();

            if (Button_GetState(&hBtnSTOP) == ACT_PUSHED) {
                state = NO_RUNNING;

            }
            else if (Button_GetState(&hBtnUP) == ACT_PUSHED) {
                speed += 2;
                if (speed > MAX_SPEED) speed = MAX_SPEED;
            }
            else if (Button_GetState(&hBtnDOWN) == ACT_PUSHED) {
                speed -= 2;
                if (speed < MIN_SPEED) speed = MIN_SPEED;
            }
            break;

        case NO_RUNNING:
            DC_Motor_Stop();
        	state = IDLE;
    }
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
