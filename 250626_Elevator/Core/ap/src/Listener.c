/*
 * Listener.c
 *
 *  Created on: Jun 24, 2025
 *      Author: rhoblack
 */


#include "Listener.h"
#include "usart.h"

static void Listener_CheckButton();
static void Listener_CheckUart();

static uint8_t rcvData = 0;
static Que_TypeDef uartRxQue;

void Listener_Init()
{
	Button_Init(&hBtnUP, GPIOB, GPIO_PIN_5);
	Button_Init(&hBtnDOWN, GPIOB, GPIO_PIN_3);
	Button_Init(&hBtnSTOP, GPIOA, GPIO_PIN_10);
	Button_Init(&hBtnSTART, GPIOC, GPIO_PIN_13);
	Que_Init(&uartRxQue);
	HAL_UART_Receive_IT(&huart2, &rcvData, 1); // uart recv interrupt enable
}

void Listener_Excute()
{
	Listener_CheckButton();
	Listener_CheckUart();
}

void Listener_CheckButton()
{
	static uint32_t prevChkBtnTime = 0;
	uint32_t curTick = HAL_GetTick();
	if (curTick - prevChkBtnTime < 100) {
		return;
	}
	prevChkBtnTime = curTick;

	inputData_TypeDef inputData;

	if (Button_GetState(&hBtnUP) == ACT_PUSHED) {
		inputData.id = UP_ACT;
		Controller_SetInputData(inputData);
	}
	else if (Button_GetState(&hBtnDOWN) == ACT_PUSHED) {
		inputData.id = DOWN_ACT;
		Controller_SetInputData(inputData);
	}
	else if (Button_GetState(&hBtnSTOP) == ACT_PUSHED) {
		inputData.id = STOP_ACT;
		Controller_SetInputData(inputData);
	}
	else if (Button_GetState(&hBtnSTART) == ACT_PUSHED) {
		inputData.id = START_ACT;
		Controller_SetInputData(inputData);
	}
}

void Listener_CheckUart()
{
	if (isQueEmpty(&uartRxQue)) {
		return;
	}
	int uartRxData = deQue(&uartRxQue);

	inputData_TypeDef inputData;

	if (uartRxData == 'U') {
		inputData.id = UP_ACT;
		Controller_SetInputData(inputData);
	}
	else if (uartRxData == 'D') {
		inputData.id = DOWN_ACT;
		Controller_SetInputData(inputData);
	}
	else if (uartRxData == 'W') {
		inputData.id = STOP_ACT;
		Controller_SetInputData(inputData);
	}
	else if (uartRxData == 'S') {
		inputData.id = START_ACT;
		Controller_SetInputData(inputData);
	}
}

void Listener_UartCallBack()
{
	enQue(&uartRxQue, rcvData);
	HAL_UART_Receive_IT(&huart2, &rcvData, 1); // interrupt enable
}



















