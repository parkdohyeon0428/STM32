/*
 * Presenter.c
 *
 *  Created on: Jun 24, 2025
 *      Author: rhoblack
 */
#include "Presenter.h"
#include <string.h>
#include <stdio.h>
#include "usart.h"

static void Presenter_DispTimeWatch(watch_t watchData);
static void Presenter_DispStopWatch(watch_t watchData);
static void Presenter_DispFndTimeWatch(watch_t watchData);
static void Presenter_DispFndStopWatch(watch_t watchData);
static void Presenter_DispMonitorTimeWatch(watch_t watchData);
static void Presenter_DispMonitorStopWatch(watch_t watchData);

//static void Presenter_DispLcdUltraSonic();

static watch_t dispData = {TIME_WATCH, 12, 0, 0, 0};
//extern TreadmillState_t state;

void Presenter_Init()
{
	LCD_Init(&hi2c1);
}

void Presenter_OutData(watch_t watchData)
{
	memcpy(&dispData, &watchData, sizeof(watch_t));
}

void Presenter_Excute()
{
	Presenter_DispLcdTreadmill(state);
	display_speed(speed, state);
}

void Presenter_DispTimeWatch(watch_t watchData)
{
	Presenter_DispFndTimeWatch(watchData);
	Presenter_DispMonitorTimeWatch(watchData);
}

void Presenter_DispStopWatch(watch_t watchData)
{
	Presenter_DispFndStopWatch(watchData);
	Presenter_DispMonitorStopWatch(watchData);
}

void Presenter_DispFndTimeWatch(watch_t watchData)
{
	FND_WriteData(watchData.hour*100 + watchData.min);

	FND_WriteDp(FND_DP_1000|FND_DP_10|FND_DP_1, FND_DP_OFF);

	if (watchData.msec < 500) {
		FND_WriteDp(FND_DP_100, FND_DP_ON);
	}
	else {
		FND_WriteDp(FND_DP_100, FND_DP_OFF);
	}
}

void Presenter_DispFndStopWatch(watch_t watchData)
{
	FND_WriteData((watchData.min % 10 * 1000) + (watchData.sec * 10) + (watchData.msec/100));

	FND_WriteDp(FND_DP_100|FND_DP_1, FND_DP_OFF);

	if (watchData.msec%100 < 50) {
		FND_WriteDp(FND_DP_10, FND_DP_ON);
	}
	else {
		FND_WriteDp(FND_DP_10, FND_DP_OFF);
	}

	if (watchData.msec < 500) {
		FND_WriteDp(FND_DP_1000, FND_DP_ON);
	}
	else {
		FND_WriteDp(FND_DP_1000, FND_DP_OFF);
	}
}

void Presenter_DispMonitorTimeWatch(watch_t watchData)
{
	char str[50];
	sprintf(str,"Time Watch : %02d:%02d:%02d.%03d\n", watchData.hour, watchData.min, watchData.sec, watchData.msec);
	HAL_UART_Transmit(&huart2, (uint8_t *)str, strlen(str), 1000);
}

void Presenter_DispMonitorStopWatch(watch_t watchData)
{
	char str[50];
	sprintf(str,"Stop Watch : %02d:%02d:%02d.%03d\n", watchData.hour, watchData.min, watchData.sec, watchData.msec);
	HAL_UART_Transmit(&huart2, (uint8_t *)str, strlen(str), 1000);
}

//void Presenter_DispLcdTreadmill(TreadmillState_t state)
//{
//	static TreadmillState_t prevState = -1;
//	if (prevState != state)
//	{
//		char str [50];
//		if (state == RUNNING) {
//			sprintf(str, "Running");
//		}
//		else if (state == IDLE) {
//			sprintf(str, "Press Button");
//		}
//		else if (state == NO_RUNNING) {
//			sprintf(str, "Stop");
//		}
//		LCD_clear();
//		LCD_writeStringXY(0, 0, str);
//
//		prevState = state;
//	}
//}

void Presenter_DispLcdTreadmill(TreadmillState_t state)
{
    static TreadmillState_t prevState = -1;
    static uint32_t stopDisplayStartTime = 0;
    static uint8_t isStopDisplayed = 0;

    if (state == NO_RUNNING && isStopDisplayed == 0)
    {
        char str[50];
        sprintf(str, "Stop");

        LCD_clear();
        LCD_writeStringXY(0, 0, str);

        stopDisplayStartTime = HAL_GetTick(); // 현재 시간 저장
        isStopDisplayed = 1; // 표시 시작
        prevState = state;
    }
    else if (isStopDisplayed == 1)
    {
        // 2초 지났는지 체크
        if (HAL_GetTick() - stopDisplayStartTime >= 2000) // 2000ms = 2초
        {
            isStopDisplayed = 0; // 표시 종료
            LCD_clear();
        }
    }
    else if (state != prevState && state != NO_RUNNING)
    {
        // 다른 상태로 변경 시
        char str[50];

        if (state == RUNNING) {
            sprintf(str, "Running");
        }
        else if (state == IDLE) {
            sprintf(str, "Press Button");
        }

        LCD_clear();
        LCD_writeStringXY(0, 0, str);
        prevState = state;
    }
}


void display_speed(int speed, TreadmillState_t state)
{
	int led = 0;

	if ((speed >= 1) && (speed <= 5)) {
		led = 0b00000001;
	}
	else if ((speed >= 6) && (speed <= 10)) {
		led = 0b00000011;
	}
	else if ((speed >= 11) && (speed <= 15)) {
		led = 0b00000111;
	}
	else if ((speed >= 15) && (speed <= 20)) {
		led = 0b00001111;
	}
	else if ((speed >= 21) && (speed <= 25)) {
		led = 0b00011111;
	}
	else if ((speed >= 26) && (speed <= 30)) {
		led = 0b00111111;
	}
	else if ((speed >= 31) && (speed <= 36)) {
		led = 0b01111111;
	}
	else if ((speed >= 37) && (speed <= 42)) {
		led = 0b11111111;
	}

	if (state == RUNNING) {
		LedBar_Write(led);
	} else {
		LedBar_Write(0x00);
	}

}
