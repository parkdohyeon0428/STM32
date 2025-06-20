/*
 * Systick.h
 *
 *  Created on: Jun 20, 2025
 *      Author: kccistc
 */

#ifndef DRIVER_SYSTICK_SYSTICK_H_
#define DRIVER_SYSTICK_SYSTICK_H_

#include "stm32f4xx.h"
#include <stdint.h>

uint32_t getTick();
void incTick();
//void SysTick_Start();
//void SysTick_Stop();



#endif /* DRIVER_SYSTICK_SYSTICK_H_ */
