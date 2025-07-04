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

extern TreadmillInputId_t inputdata;

TreadmillState_t state = NO_RUNNING;
int speed = 3;



//void Treadmill_Controller_SetInput(char input)
//{
//    pendingInput = input;
//}


void treadmill_run()
{

	if (inputdata == TEMP)
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
			if (inputdata == TREADMILL_START) {
				state = RUNNING;
			}
			break;

		case RUNNING:
			DC_Motor_SetFreq(10, speed);
			DC_Motor_Start();
			if (inputdata == TREADMILL_STOP) {
				state = NO_RUNNING;
			}
			else if (inputdata == TREADMILL_UP) {
				speed += 2;
				//state = RUNNING;
				inputdata = NO_INPUT;
				if (speed > MAX_SPEED) speed = MAX_SPEED;
			}
			else if (inputdata == TREADMILL_DOWN) {
				speed -= 2;
				//state = RUNNING;
				inputdata = NO_INPUT;
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

//void Listener_UartCallBack()
//{
//	enQue(&uartRxQue, rcvData);
//	HAL_UART_Receive_IT(&huart2, &rcvData, 1); // interrupt enable
//}

