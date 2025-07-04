/*
 * Listener.c
 *
 *  Created on: Jun 24, 2025
 *      Author: kccistc
 */

#include "Listener.h"
#include <string.h>
#include <stdio.h>
#include "usart.h"

static void Listener_CheckButton(); // 외부 호출 x

void Listener_Init()
{
	Button_Init(&hBtnMode, GPIOB, GPIO_PIN_5);
	Button_Init(&hBtnRunStop, GPIOB, GPIO_PIN_3);
	Button_Init(&hBtnClear, GPIOA, GPIO_PIN_10);
}

void Listener_Excute()
{
	Listener_CheckButton();
	Listener_CheckRx();
}

void Listener_CheckButton()
{
	inputData_TypeDef inputData;

	if (Button_GetState(&hBtnMode) == ACT_RELEASED) {
		inputData.id = MODE;
		inputData.data = MODE_ACT;
		Controller_SetInputData(inputData);
	}
	else if (Button_GetState(&hBtnRunStop) == ACT_PUSHED) {
		inputData.id = STOPWATCH_RUN_STOP;
		inputData.data = MODE_ACT;
		Controller_SetInputData(inputData);
	}
	else if (Button_GetState(&hBtnClear) == ACT_PUSHED) {
		inputData.id = STOPWATCH_CLEAR;
		inputData.data = MODE_ACT;
		Controller_SetInputData(inputData);
	}
}

void Listener_CheckRx()
{
	inputData_TypeDef inputData;
	uint8_t rxData = 0;

	if (HAL_UART_Receive(&huart2, &rxData, 1, 1) == HAL_OK) {
		if (rxData == 'm') {
			inputData.id = MODE;
			inputData.data = MODE_ACT;
			Controller_SetInputData(inputData);
		}
		else if (rxData == 'r'){
			inputData.id = STOPWATCH_RUN_STOP;
			inputData.data = MODE_ACT;
			Controller_SetInputData(inputData);
		}
		else if (rxData == 's') {
			inputData.id = STOPWATCH_RUN_STOP;
			inputData.data = MODE_ACT;
			Controller_SetInputData(inputData);
		}
		else if (rxData == 'c') {
			inputData.id = STOPWATCH_CLEAR;
			inputData.data = MODE_ACT;
			Controller_SetInputData(inputData);
		}
	}
}
