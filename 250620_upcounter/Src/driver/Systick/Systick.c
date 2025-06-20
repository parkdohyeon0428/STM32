/*
 * Systick.c
 *
 *  Created on: Jun 20, 2025
 *      Author: kccistc
 */

#include "Systick.h"

TIM_TypeDef *hTickTIM;

void SysTick_Init(TIM_TypeDef *TIMx)
{
	hTickTIM = TIMx;
}

uint32_t getTick()
{
	return hTickTIM->CNT;
}

void SysTick_Start()
{
	hTickTIM->CR1 |= 1<<0;
}

void SysTick_Stop()
{
	hTickTIM->CR1 &= ~(1<<0);
}
