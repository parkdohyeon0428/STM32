/*
 * Controller.c
 *
 *  Created on: Jun 24, 2025
 *      Author: kccistc
 */

#include "Controller.h"

typedef enum{S_TIME_WATCH, S_STOP_WATCH} watchModeState_t;

inputData_TypeDef controlData = {0};
static watchModeState_t modeState = S_TIME_WATCH;
void Controller_Mode();


void Controller_Excute()
{
	Controller_Mode();
}

void Controller_SetInputData(inputData_TypeDef inputData)
{
	if (inputData.id == MODE) {
		controlData.id = MODE;
		controlData.data = MODE_ACT;
	}
	else if (inputData.id == STOPWATCH_RUN_STOP) {
		controlData.id = STOPWATCH_RUN_STOP;
		controlData.data = MODE_ACT;
	}
	else if (inputData.id == STOPWATCH_CLEAR) {
		controlData.id = STOPWATCH_CLEAR;
		controlData.data = MODE_ACT;
	}
}

void Controller_Mode()
{
	switch(modeState)
	{
	case S_TIME_WATCH:
		if (controlData.id == MODE) {
			controlData.id = NO_CONTROL;
			modeState = S_STOP_WATCH;
			//FND_WriteDp(FND_DP_1000|FND_DP_100|FND_DP_10|FND_DP_1, FND_DP_OFF);
		}
		TimeWatch_Excute();
		break;
	case S_STOP_WATCH:
		if (controlData.id == MODE) {
			controlData.id = NO_CONTROL;
			modeState = S_TIME_WATCH;
			//FND_WriteDp(FND_DP_1000|FND_DP_100|FND_DP_10|FND_DP_1, FND_DP_OFF);
		}
		StopWatch_Excute();
		break;
	}
}
