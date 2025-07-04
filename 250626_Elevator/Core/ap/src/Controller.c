/*
 * Controller.c
 *
 *  Created on: Jun 24, 2025
 *      Author: rhoblack
 */
#include "Controller.h"
#include <string.h>
#include <stdio.h>
#include "usart.h"

typedef enum{
	S_STOP,
	S_START
}ModeState_t;

void Controller_Mode();


inputData_TypeDef controlData = {NO_ACT};

static ModeState_t modeState = S_STOP;

void Controller_Excute()
{
	Controller_Mode();
//	treadmill_run();
//	treadmill_emergency();
}

void Controller_SetInputData(inputData_TypeDef inputData)
{
	controlData.id = inputData.id;
}

void Controller_Mode()
{
	switch (modeState)
	{
	case S_STOP:
		if (controlData.id == START_ACT)
		{
			treadmill_Start();
			modeState = S_START;
		}
		break;
	case S_START:
		treadmill_emergency();

		if (controlData.id == STOP_ACT)
		{
			treadmill_Stop();
			modeState = S_STOP;
		}
		else if (controlData.id == UP_ACT)
		{
			treadmill_SpeedUp();
		}
		else if (controlData.id == DOWN_ACT)
		{
			treadmill_SpeedDown();
		}
		break;
	}
	controlData.id = NO_STATE_ACT;
}
