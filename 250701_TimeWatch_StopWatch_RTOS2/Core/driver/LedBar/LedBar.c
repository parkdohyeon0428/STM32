/*
 * LedBar.c
 *
 *  Created on: Jun 18, 2025
 *      Author: kccistc
 */
#include "LedBar.h"

typedef struct {
	GPIO_TypeDef *GPIOx;
	uint32_t pinNum;
} LedBar_TypeDef;

LedBar_TypeDef ledBar[8] = {
		{GPIOA, GPIO_PIN_0},
		{GPIOA, GPIO_PIN_1},
		{GPIOA, GPIO_PIN_4},
		{GPIOB, GPIO_PIN_0},
		{GPIOC, GPIO_PIN_1},
		{GPIOC, GPIO_PIN_0},
		{GPIOC, GPIO_PIN_2},
		{GPIOC, GPIO_PIN_3}
};

void LedBar_write(uint8_t data)
{
//	GPIO_WritePin(GPIOA, 0, !((data&(1U<<0))==0));
//	GPIO_WritePin(GPIOA, 1, !((data&(1U<<1))==0));
//	GPIO_WritePin(GPIOA, 4, !((data&(1U<<2))==0));
//	GPIO_WritePin(GPIOB, 0, !((data&(1U<<3))==0));
//	GPIO_WritePin(GPIOC, 1, !((data&(1U<<4))==0));
//	GPIO_WritePin(GPIOC, 0, !((data&(1U<<5))==0));
//	GPIO_WritePin(GPIOC, 2, !((data&(1U<<6))==0));
//	GPIO_WritePin(GPIOC, 3, !((data&(1U<<7))==0));

	for (int i=0; i<8; i++) {
		if((data & (1<<i)) == 0) {
			HAL_GPIO_WritePin(ledBar[i].GPIOx, ledBar[i].pinNum, RESET);
		}
		else {
			HAL_GPIO_WritePin(ledBar[i].GPIOx, ledBar[i].pinNum, SET);
		}
	}
}
