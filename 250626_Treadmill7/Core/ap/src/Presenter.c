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


extern DHT11_TypeDef hdht11;

void Presenter_Init()
{
	LCD_Init(&hi2c1);
}

void Presenter_Excute()
{
	Presenter_DispLcdTreadmill(state);
	display_speed(speed, state);
	Presenter_DispFndRunTime(state);
}


void Presenter_DispLcdTreadmill(TreadmillState_t state)
{
    static TreadmillState_t prevState = -1;
    static uint32_t stopDisplayStartTime = 0;
    static uint8_t isStopDisplayed = 0;

	char str[50] = {0};

    if (state == NO_RUNNING && isStopDisplayed == 0)
    {
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


void Presenter_DispFndRunTime(TreadmillState_t state)
{
   static uint32_t startTime = 0;
   static uint32_t accumulatedTime = 0;
   static uint8_t runningFlag = 0;

   if (state == RUNNING)
   {
      if (runningFlag == 0)
      {
         startTime = HAL_GetTick();
         runningFlag = 1;
      }

      uint32_t elapsedTime = accumulatedTime + (HAL_GetTick() - startTime);
      uint32_t elapsedSeconds = elapsedTime / 1000;

      uint32_t minutes = elapsedSeconds / 60;
      uint32_t seconds = elapsedSeconds % 60;

      uint32_t displayData = minutes * 100 + seconds;

	char lcdStr[20];
	sprintf(lcdStr, "%02lu:%02lu", minutes, seconds);
	LCD_writeStringXY(1, 0, lcdStr);
   }
   else
   {
      runningFlag = 0;
   }
}

