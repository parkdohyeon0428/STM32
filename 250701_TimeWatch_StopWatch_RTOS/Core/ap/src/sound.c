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
    for (int i = 0; i < 5; i++)
    {
        Buzzer_SetFreq(2000);
        Buzzer_Start();
        HAL_Delay(80);

        Buzzer_Stop();
        HAL_Delay(50);

        Buzzer_SetFreq(1200);
        Buzzer_Start();
        HAL_Delay(80);

        Buzzer_Stop();
        HAL_Delay(50);
    }
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
