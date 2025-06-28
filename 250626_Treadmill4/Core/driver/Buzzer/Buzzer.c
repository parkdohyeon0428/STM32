/*
 * Buzzer.c
 *
 *  Created on: Jun 26, 2025
 *      Author: kccistc
 */
#include "Buzzer.h"

static TIM_HandleTypeDef *hbuzzerTim;
static uint32_t buzzerTimChannel;

void Buzzer_Init(TIM_HandleTypeDef *htim, uint32_t channel)
{
	hbuzzerTim = htim;
	buzzerTimChannel = channel;
}

void Buzzer_SetFreq(uint32_t freq)
{
	if (freq < 100) freq = 100;
	else if (freq > 10000) freq = 10000;
	__HAL_TIM_SET_AUTORELOAD(&htim3, 1000000/freq - 1);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 1000000/freq/2 - 1); // duty cycle 50%
}

void Buzzer_Start()
{
	HAL_TIM_PWM_Start(hbuzzerTim, buzzerTimChannel);
}

void Buzzer_Stop()
{
	HAL_TIM_PWM_Stop(hbuzzerTim, buzzerTimChannel);
}
