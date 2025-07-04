/*
 * fnd.h
 *
 *  Created on: Jun 19, 2025
 *      Author: kccistc
 */

#ifndef DRIVER_FND_FND_H_
#define DRIVER_FND_FND_H_

#include <stdint.h>
#include "stm32f411xe.h"
#include "GPIO.h"

void fnd_Init();
void fnd_Write(uint32_t fnd_data);
//void FND_SegSel(uint8_t num);
void FND_DisplayNumber(uint16_t number);

#endif /* DRIVER_FND_FND_H_ */
