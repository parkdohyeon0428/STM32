/*
 * fnd.c
 *
 *  Created on: Jun 19, 2025
 *      Author: kccistc
 */

#include "fnd.h"

#define SEG_COUNT 8;
#define COMM_COUNT 4;

typedef struct{
	GPIO_TypeDef *GPIOx;
	uint32_t pinNum;
} fnd_TypeDef;

fnd_TypeDef FND_FONT[8] = {
		{GPIOA, 11},  // A
		{GPIOB, 12},  // B
		{GPIOB, 2},   // C
		{GPIOB, 1},   // D
		{GPIOB, 15},  // E
		{GPIOB, 14},  // F
		{GPIOB, 13},  // G
		{GPIOC, 4}    // DP
};

fnd_TypeDef FND_COMM[4] = {
		{GPIOC, 8},   // D1
		{GPIOC, 6},   // D2
		{GPIOC, 5},   // D3
		{GPIOA, 12}   // D4
};

//void fnd_Write(uint8_t data)
//{
//	for (int i=0; i<8; i++){
//		if ((data&(1<<i))==0){
//			GPIO_WritePin(FND_FONT[i].GPIOx, FND_FONT[i].pinNum, PIN_RESET);
//		}
//		else {
//			GPIO_WritePin(FND_FONT[i].GPIOx, FND_FONT[i].pinNum, PIN_SET);
//		}
//	}
//}

void fnd_Init()
{
	   GPIO_Init(GPIOC, 8, OUTPUT);
	   GPIO_Init(GPIOC, 6, OUTPUT);
	   GPIO_Init(GPIOC, 5, OUTPUT);
	   GPIO_Init(GPIOA, 12, OUTPUT);
	   GPIO_Init(GPIOA, 11, OUTPUT);
	   GPIO_Init(GPIOB, 12, OUTPUT);
	   GPIO_Init(GPIOB, 2, OUTPUT);
	   GPIO_Init(GPIOB, 1, OUTPUT);
	   GPIO_Init(GPIOB, 15, OUTPUT);
	   GPIO_Init(GPIOB, 14, OUTPUT);
	   GPIO_Init(GPIOB, 13, OUTPUT);
	   GPIO_Init(GPIOC, 4, OUTPUT);
}



void fnd_Write(uint32_t fnd_data)
{
	switch(fnd_data)
	{
	case 0:
		GPIO_WritePin(FND_FONT[0].GPIOx, FND_FONT[0].pinNum, PIN_SET);   // a
		GPIO_WritePin(FND_FONT[1].GPIOx, FND_FONT[1].pinNum, PIN_SET);   // b
		GPIO_WritePin(FND_FONT[2].GPIOx, FND_FONT[2].pinNum, PIN_SET);   // c
		GPIO_WritePin(FND_FONT[3].GPIOx, FND_FONT[3].pinNum, PIN_SET);   // d
		GPIO_WritePin(FND_FONT[4].GPIOx, FND_FONT[4].pinNum, PIN_SET);   // e
		GPIO_WritePin(FND_FONT[5].GPIOx, FND_FONT[5].pinNum, PIN_SET);   // f
		GPIO_WritePin(FND_FONT[6].GPIOx, FND_FONT[6].pinNum, PIN_RESET); // g
		break;

	case 1:
		GPIO_WritePin(FND_FONT[0].GPIOx, FND_FONT[0].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[1].GPIOx, FND_FONT[1].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[2].GPIOx, FND_FONT[2].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[3].GPIOx, FND_FONT[3].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[4].GPIOx, FND_FONT[4].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[5].GPIOx, FND_FONT[5].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[6].GPIOx, FND_FONT[6].pinNum, PIN_RESET);
		break;

	case 2:
		GPIO_WritePin(FND_FONT[0].GPIOx, FND_FONT[0].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[1].GPIOx, FND_FONT[1].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[2].GPIOx, FND_FONT[2].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[3].GPIOx, FND_FONT[3].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[4].GPIOx, FND_FONT[4].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[5].GPIOx, FND_FONT[5].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[6].GPIOx, FND_FONT[6].pinNum, PIN_SET);
		break;

	case 3:
		GPIO_WritePin(FND_FONT[0].GPIOx, FND_FONT[0].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[1].GPIOx, FND_FONT[1].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[2].GPIOx, FND_FONT[2].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[3].GPIOx, FND_FONT[3].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[4].GPIOx, FND_FONT[4].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[5].GPIOx, FND_FONT[5].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[6].GPIOx, FND_FONT[6].pinNum, PIN_SET);
		break;

	case 4:
		GPIO_WritePin(FND_FONT[0].GPIOx, FND_FONT[0].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[1].GPIOx, FND_FONT[1].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[2].GPIOx, FND_FONT[2].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[3].GPIOx, FND_FONT[3].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[4].GPIOx, FND_FONT[4].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[5].GPIOx, FND_FONT[5].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[6].GPIOx, FND_FONT[6].pinNum, PIN_SET);
		break;

	case 5:
		GPIO_WritePin(FND_FONT[0].GPIOx, FND_FONT[0].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[1].GPIOx, FND_FONT[1].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[2].GPIOx, FND_FONT[2].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[3].GPIOx, FND_FONT[3].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[4].GPIOx, FND_FONT[4].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[5].GPIOx, FND_FONT[5].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[6].GPIOx, FND_FONT[6].pinNum, PIN_SET);
		break;

	case 6:
		GPIO_WritePin(FND_FONT[0].GPIOx, FND_FONT[0].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[1].GPIOx, FND_FONT[1].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[2].GPIOx, FND_FONT[2].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[3].GPIOx, FND_FONT[3].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[4].GPIOx, FND_FONT[4].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[5].GPIOx, FND_FONT[5].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[6].GPIOx, FND_FONT[6].pinNum, PIN_SET);
		break;

	case 7:
		GPIO_WritePin(FND_FONT[0].GPIOx, FND_FONT[0].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[1].GPIOx, FND_FONT[1].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[2].GPIOx, FND_FONT[2].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[3].GPIOx, FND_FONT[3].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[4].GPIOx, FND_FONT[4].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[5].GPIOx, FND_FONT[5].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[6].GPIOx, FND_FONT[6].pinNum, PIN_RESET);
		break;

	case 8:
		GPIO_WritePin(FND_FONT[0].GPIOx, FND_FONT[0].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[1].GPIOx, FND_FONT[1].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[2].GPIOx, FND_FONT[2].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[3].GPIOx, FND_FONT[3].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[4].GPIOx, FND_FONT[4].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[5].GPIOx, FND_FONT[5].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[6].GPIOx, FND_FONT[6].pinNum, PIN_SET);
		break;

	case 9:
		GPIO_WritePin(FND_FONT[0].GPIOx, FND_FONT[0].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[1].GPIOx, FND_FONT[1].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[2].GPIOx, FND_FONT[2].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[3].GPIOx, FND_FONT[3].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[4].GPIOx, FND_FONT[4].pinNum, PIN_RESET);
		GPIO_WritePin(FND_FONT[5].GPIOx, FND_FONT[5].pinNum, PIN_SET);
		GPIO_WritePin(FND_FONT[6].GPIOx, FND_FONT[6].pinNum, PIN_SET);
		break;
	}
}

void FND_DisplayNumber(uint16_t number)
{
   uint8_t digits[4];

   digits[0] = (number / 1000) % 10;
   digits[1] = (number / 100) % 10;
   digits[2] = (number / 10) % 10;
   digits[3] = number % 10;

   for (int i = 0; i < 4; i++)
   {
      for (int j = 0; j < 4; j++)
         GPIO_WritePin(FND_COMM[j].GPIOx, FND_COMM[j].pinNum, PIN_SET);

      fnd_Write(digits[i]);

      GPIO_WritePin(FND_COMM[i].GPIOx, FND_COMM[i].pinNum, PIN_RESET);

      delay(1);
   }
}
