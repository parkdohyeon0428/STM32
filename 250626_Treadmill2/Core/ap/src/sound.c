/*
 * sound.c
 *
 *  Created on: Jun 26, 2025
 *      Author: kccistc
 */
#include "sound.h"

void Sound_Init()
{
	Buzzer_Init(&htim3, TIM_CHANNEL_1);
}

void Sound_PowerOn()
{
	Buzzer_SetFreq(1047); // 523hz -> 도
	Buzzer_Start();
	HAL_Delay(100);
}

void Sound_PowerOff()
{
	Buzzer_Stop();
}

void Sound_ChangeMode()
{

}

void Sound_Alarm()
{

}
