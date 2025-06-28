/*
 * DC_Motor.c
 *
 *  Created on: Jun 26, 2025
 *      Author: kccistc
 */

#include "DC_Motor.h"

static TIM_HandleTypeDef *hmotorTim;
static uint32_t motorTimChannel;

void DC_Motor_Init(TIM_HandleTypeDef *htim, uint32_t channel)
{
	hmotorTim = htim;
	motorTimChannel = channel;
}

void DC_Motor_SetFreq(uint32_t freq, int duty)
{
	if (duty < 0) duty = 0;
	else if (duty > 100) duty = 100;

    uint32_t arr = 1000000 / freq - 1;  // 주기 설정
    uint32_t ccr = (arr + 1) * duty / 100;  // 듀티비 비율 설정

	__HAL_TIM_SET_AUTORELOAD(&htim1, arr);
	__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, ccr);
}

void DC_Motor_Start()
{
	HAL_TIM_PWM_Start(hmotorTim, motorTimChannel);
}

void DC_Motor_Stop()
{
	HAL_TIM_PWM_Stop(hmotorTim, motorTimChannel);
}
