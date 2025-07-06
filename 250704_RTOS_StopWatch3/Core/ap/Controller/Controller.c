/*
 * Controller.c
 *
 *  Created on: Jul 3, 2025
 *      Author: kccistc
 */

#include "Controller.h"
#include <string.h>

void Controller_CheckEventMode();

void Controller_Init()
{
	TimeWatch_Init();
	StopWatch_Init();
}

void Controller_Execute()
{
	eModeState_t state = Model_GetModeState();

	switch (state)
	{
	case S_TIMEWATCH_MODE:
		TimeWatch_Execute();
		break;
	case S_STOPWATCH_MODE:
		StopWatch_Execute();
		break;
	}

	Controller_CheckEventMode();
}

void Controller_CheckEventMode()
{
	osEvent evt = osMessageGet(modeEventMsgBox, 0);
	uint16_t evtState;

	if (evt.status == osEventMessage) {
		evtState = evt.value.v; // 메세지가 들어있다면 값을 받아오겠다.
		if (evtState != EVENT_MODE) {
			return;
		}

		eModeEvent_t state = Model_GetModeState();

		if (state == S_TIMEWATCH_MODE) {
			Model_SetModeState(S_STOPWATCH_MODE);
			stopWatch_t *pStopWatchData = osMailAlloc(stopWatchDataMailBox, 0);
			memcpy(pStopWatchData, &stopWatchData, sizeof(stopWatch_t));
			osMailPut(stopWatchDataMailBox, pStopWatchData);
		}
		else if (state == S_STOPWATCH_MODE) {
			Model_SetModeState(S_TIMEWATCH_MODE);
		    timeWatch_t *pTimeWatchData = osMailAlloc(timeWatchDataMailBox, 0);
		    memcpy(pTimeWatchData, &timeWatchData, sizeof(timeWatch_t));
		    osMailPut(timeWatchDataMailBox, pTimeWatchData);
		}
	}


}
