/*
 * FND.h
 *
 *  Created on: Jun 19, 2025
 *      Author: kccistc
 */

#ifndef DRIVER_FND_FND_H_
#define DRIVER_FND_FND_H_
#include "stm32f4xx_hal.h"

void FND_WriteData(uint16_t data);
uint16_t FND_ReadData();
void FND_DispData();
void FND_DispData_DOT();

#endif /* DRIVER_FND_FND_H_ */
