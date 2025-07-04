/*
 * Listener.c
 *
 *  Created on: Jul 3, 2025
 *      Author: kccistc
 */
#include "Listener.h"

void Listener_CheckButton();

Button_TypeDef hbtnMode;

void Listener_Init()
{
	Button_Init(&hbtnMode, GPIOB, GPIO_PIN_5);
	Listener_TimeWatchInit();
	Listener_StopWatchInit();
}

void Listener_Execute()
{
	eModeState_t state = Model_GetModeState();

	switch(state)
	{
	case S_TIMEWATCH_MODE:
		Listener_TimeWatchExecute();
		break;
	case S_STOPWATCH_MODE:
		Listener_StopWatchExecute();
		break;
	}
	Listener_CheckButton();
}

void Listener_CheckButton()
{
	if (Button_GetState(&hbtnMode) == ACT_RELEASED) {
		osMessagePut(modeEventMsgBox, EVENT_MODE, 0);
	}
}
