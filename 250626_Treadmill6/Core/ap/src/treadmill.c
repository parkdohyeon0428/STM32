/*
 * elevator.c
 *
 *  Created on: Jun 27, 2025
 *      Author: kccistc
 */
#include <treadmill.h>
#include "usart.h"

#define MAX_SPEED 100
#define MIN_SPEED 0

static uint8_t rcvData = 0;
static Que_TypeDef uartRxQue;

extern DHT11_TypeDef hdht11;

TreadmillState_t state = NO_RUNNING;
int speed = 3;


void treadmill_run()
{
	int uartRxData = 0;

	if (!isQueEmpty(&uartRxQue)) {
		uartRxData = deQue(&uartRxQue);
	}

	if (uartRxData == 'A')
	{
		uint8_t temp = 0, humi = 0;
		if (DHT11_Read(&hdht11, &temp, &humi) == 0)
		{
			uint16_t fndData = (temp * 100) + humi;
			FND_WriteData(fndData);
		}
	}
    switch (state)
    {
    	case IDLE:
			if (Button_GetState(&hBtnSTART) == ACT_PUSHED || uartRxData == 'R') {
				state = RUNNING;
			}
			break;

		case RUNNING:
			DC_Motor_SetFreq(10, speed);
			DC_Motor_Start();

			if (Button_GetState(&hBtnSTOP) == ACT_PUSHED || uartRxData == 'S') {
				state = NO_RUNNING;

			}
			else if (Button_GetState(&hBtnUP) == ACT_PUSHED || uartRxData == 'U') {
				speed += 2;
				if (speed > MAX_SPEED) speed = MAX_SPEED;
			}
			else if (Button_GetState(&hBtnDOWN) == ACT_PUSHED || uartRxData == 'D') {
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

void Listener_UartCallBack()
{
	enQue(&uartRxQue, rcvData);
	HAL_UART_Receive_IT(&huart2, &rcvData, 1); // interrupt enable
}

