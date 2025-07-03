/*
 * Model.c
 *
 *  Created on: Jul 3, 2025
 *      Author: kccistc
 */


#include "Model_StopWatch.h"

//typedef enum { S_STOPWATCH_STOP, S_STOPWATCH_RUN, S_STOPWATCH_CLEAR } eStopWatchState_t;


static eStopWatchState_t StopWatchState = S_STOPWATCH_STOP;

osMessageQId stopWatchEventMsgBox;
osMessageQDef(stopWatchEventQueue, 4, uint16_t);

osMailQId stopWatchDataMailBox;
osMailQDef(stopWatchDataQueue, 4, stopWatch_t);

void Model_StopWatchInit()
{
	stopWatchEventMsgBox = osMessageCreate(osMessageQ(stopWatchEventQueue), NULL);
	stopWatchDataMailBox = osMailCreate(osMailQ(stopWatchDataQueue), NULL);
}

void Model_SetStopWatchState(eStopWatchState_t state)
{
	StopWatchState = state;
}

eStopWatchState_t Model_GetStopWatchState()
{
	return StopWatchState;
}

