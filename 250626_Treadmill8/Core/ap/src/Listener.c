/*
 * Listener.c
 *
 *  Created on: Jun 24, 2025
 *      Author: rhoblack
 */


#include "Listener.h"
#include "usart.h"

//static void Treadmill_Listener();
//static void Listener_CheckUart();

static uint8_t rcvData = 0;
static Que_TypeDef uartRxQue;


TreadmillInputId_t inputdata = NO_INPUT;

void Listener_Init()
{
	Button_Init(&hBtnUP, GPIOB, GPIO_PIN_5);
	Button_Init(&hBtnDOWN, GPIOB, GPIO_PIN_3);
	Button_Init(&hBtnSTOP, GPIOA, GPIO_PIN_10);
	Button_Init(&hBtnSTART, GPIOC, GPIO_PIN_13);
	UltraSonic_Init(&sensor, GPIOC, GPIO_PIN_7, GPIOA, GPIO_PIN_9);
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
    static uint32_t prevChkTime = 0;
    uint32_t curTick = HAL_GetTick();
    if (curTick - prevChkTime < 50) return;
    prevChkTime = curTick;

    if (Button_GetState(&hBtnSTART) == ACT_PUSHED) {

    	inputdata = TREADMILL_START;
    }
    else if (Button_GetState(&hBtnSTOP) == ACT_PUSHED) {

    	inputdata = TREADMILL_STOP;
    }
    else if (Button_GetState(&hBtnUP) == ACT_PUSHED) {

    	inputdata = TREADMILL_UP;
    }
    else if (Button_GetState(&hBtnDOWN) == ACT_PUSHED) {

    	inputdata = TREADMILL_DOWN;
    }
}

void Listener_CheckUart()
{
	if (isQueEmpty(&uartRxQue)) {
		return;
	}
	int uartRxData = deQue(&uartRxQue);

	if (uartRxData == 'R') {

		inputdata = TREADMILL_START;
	}
	else if (uartRxData == 'S') {

		inputdata = TREADMILL_STOP;
	}
	else if (uartRxData == 'U') {

		inputdata = TREADMILL_UP;
	}
	else if (uartRxData == 'D') {

		inputdata = TREADMILL_DOWN;
	}
	else if (uartRxData == 'A') {

		inputdata = TEMP;
	}
}

void Listener_UartCallBack()
{
	enQue(&uartRxQue, rcvData);
	HAL_UART_Receive_IT(&huart2, &rcvData, 1); // interrupt enable
}
















