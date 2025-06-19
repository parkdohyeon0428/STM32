/*
 * LED_Bar.h
 *
 *  Created on: Jun 18, 2025
 *      Author: kccistc
 */

#ifndef DRIVER_LED_BAR_LED_BAR_H_
#define DRIVER_LED_BAR_LED_BAR_H_

#include "stm32f411xe.h"
#include <stdint.h>
#include "GPIO.h"


void LEDBar_Write(uint8_t data);
void LEDBar_Init();

#endif /* DRIVER_LED_BAR_LED_BAR_H_ */
