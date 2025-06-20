/*
 * FND.h
 *
 *  Created on: Jun 20, 2025
 *      Author: kccistc
 */

#ifndef DRIVER_FND_FND_H_
#define DRIVER_FND_FND_H_

#include <stdint.h>
#include "stm32f4xx.h"
#include "GPIO.h"

void FND_WriteData(uint16_t data);
uint16_t FND_ReadData();
void FND_DispData();
void FND_Init();
void FND_DispData_DOT(uint32_t digit);
void FND_DispDigit_Dot(uint16_t digit);
//void FND_DispOff(int fndPos);
//void FND_DispOn(int fndPos);
//void FND_DispDigit(uint16_t digit);

#endif /* DRIVER_FND_FND_H_ */
