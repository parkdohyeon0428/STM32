/*
 * motor.c
 *
 *  Created on: Jun 26, 2025
 *      Author: kccistc
 */

#include "motor.h"

static TIM_HandleTypeDef *hmotorTim;
static uint32_t motorTimChannel;


void Motor_Init(TIM_HandleTypeDef *htim, uint32_t channel)
{
	hmotorTim = htim;
	motorTimChannel = channel;
}

void Motor_SetFreq(uint32_t freq)
{
	__HAL_TIM_SET_AUTORELOAD(&htim1, 1000000/freq - 1);
	__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 1000000/freq/2 - 1);
}

void Motor_Start()
{
	HAL_TIM_PWM_Start(hmotorTim, motorTimChannel);
}

void Motor_Stop()
{
	HAL_TIM_PWM_Stop(hmotorTim, motorTimChannel);
}
