/*
 * FND.c
 *
 *  Created HIGH: Jun 19, 2025
 *      Author: kccistc
 */
#include "FND.h"

enum {DIGIT_1, DIGIT_10, DIGIT_100, DIGIT_1000};

typedef struct {
	GPIO_TypeDef *GPIOx;
	uint32_t pinNum;
} FND_TypeDef;

FND_TypeDef fndDigitCom[4] = {
		{GPIOA, GPIO_PIN_12},
		{GPIOC,  GPIO_PIN_5},
		{GPIOC,  GPIO_PIN_6},
		{GPIOC,  GPIO_PIN_8}
};

FND_TypeDef fndPin[8] = {
		{GPIOA, GPIO_PIN_11}, // A
		{GPIOB, GPIO_PIN_12}, // B
		{GPIOB,  GPIO_PIN_2}, // C
		{GPIOB,  GPIO_PIN_1}, // D
		{GPIOB, GPIO_PIN_15}, // E
		{GPIOB, GPIO_PIN_14}, // F
		{GPIOB, GPIO_PIN_13}, // G
		{GPIOC,  GPIO_PIN_4}  // DP
};

static void FND_DispOff(int fndPos);
static void FND_DispOn(int fndPos);
static void FND_DispDigit(uint16_t digit);
static void FND_DispOffAll();

static uint16_t fndDispNum = 0; // fnd main data

// write fndDispNum
void FND_WriteData(uint16_t data)
{
	fndDispNum = data;
}
// read fndDispNum
uint16_t FND_ReadData()
{
	return fndDispNum;
}
// display fndDispNum
void FND_DispData()
{
	static int digitPos = 0;
	// 인터럽트가 발생하면 한자리씩 출력한다.
	digitPos = (digitPos+1) % 4;

	switch(digitPos)
	{
	case DIGIT_1:
		FND_DispOffAll();
		FND_DispDigit(fndDispNum%10);
		FND_DispOn(digitPos);
		break;
	case DIGIT_10:
		FND_DispOffAll();
		FND_DispDigit(fndDispNum/10%10);
		FND_DispOn(digitPos);
		break;
	case DIGIT_100:
		FND_DispOffAll();
		FND_DispDigit(fndDispNum/100%10);
		FND_DispOn(digitPos);
		break;
	case DIGIT_1000:
		FND_DispOffAll();
		FND_DispDigit(fndDispNum/1000%10);
		FND_DispOn(digitPos);
		break;
	}
}

void FND_DispData_DOT(uint32_t digit)
{
   static int digitPos = 0;

   digitPos = (digitPos + 1) % 4;
   switch(digitPos)
   {
   case DIGIT_1:
      FND_DispOffAll();
      if(digit & (1<<0)){
         FND_DispDigit_Dot(fndDispNum%10);
      }
      else {
      FND_DispDigit(fndDispNum%10);
      }
      FND_DispOn(digitPos);
   break;
   case DIGIT_10:
      FND_DispOffAll();
      if(digit & (1<<1)){
         FND_DispDigit_Dot(fndDispNum/10 % 10);
      }
      else {
      FND_DispDigit(fndDispNum/10 % 10);
      }
      FND_DispOn(digitPos);
   break;
   case DIGIT_100:
      FND_DispOffAll();
      if(digit & (1<<2)){
         FND_DispDigit_Dot(fndDispNum/100%10);
      }
      else {
      FND_DispDigit(fndDispNum/100%10);
      }
      FND_DispOn(digitPos);
   break;
   case DIGIT_1000:
      FND_DispOffAll();
      if(digit & (1<<3)){
         FND_DispDigit_Dot(fndDispNum/1000%10);
      }
      else {
      FND_DispDigit(fndDispNum/1000%10);
      }
      FND_DispOn(digitPos);
   break;
   }
   //인터럽트가 발생하면 한 자리씩 출력한다.

}


void FND_DispOff(int fndPos)
{
	// GPIO_Write(GPIOx, PinNum, SET);
	HAL_GPIO_WritePin(fndDigitCom[fndPos].GPIOx, fndDigitCom[fndPos].pinNum, SET);
}

void FND_DispOn(int fndPos)
{
	// GPIO_Write(GPIOx, PinNum, RESET);
	HAL_GPIO_WritePin(fndDigitCom[fndPos].GPIOx, fndDigitCom[fndPos].pinNum, RESET);
}

void FND_DispOffAll()
{
	for(int i=0; i<4; i++){
		HAL_GPIO_WritePin(fndDigitCom[i].GPIOx, fndDigitCom[i].pinNum, SET);
	}
}

void FND_DispDigit(uint16_t digit)
{
	const uint8_t segFont[10] = {
	    0x3F, // 0 => 0011 1111
	    0x06, // 1 => 0000 0110
	    0x5B, // 2 => 0101 1011
	    0x4F, // 3 => 0100 1111
	    0x66, // 4 => 0110 0110
	    0x6D, // 5 => 0110 1101
	    0x7D, // 6 => 0111 1101
	    0x07, // 7 => 0000 0111
	    0x7F, // 8 => 0111 1111
	    0x6F  // 9 => 0110 1111
	};
	for(int i=0; i<8; i++) {
		if(!(segFont[digit] & (1<<i))){
			HAL_GPIO_WritePin(fndPin[i].GPIOx, fndPin[i].pinNum, RESET);
		}
		else {
			HAL_GPIO_WritePin(fndPin[i].GPIOx, fndPin[i].pinNum, SET);
		}
	}
}

void FND_DispDigit_Dot(uint16_t digit)
{


    const uint8_t segFont[10] = {
             0xBF, // 0  (0x3F | 0x80)
             0x86, // 1  (0x06 | 0x80)
             0xDB, // 2  (0x5B | 0x80)
             0xCF, // 3  (0x4F | 0x80)
             0xE6, // 4  (0x66 | 0x80)
             0xED, // 5  (0x6D | 0x80)
             0xFD, // 6  (0x7D | 0x80)
             0x87, // 7  (0x07 | 0x80)
             0xFF, // 8  (0x7F | 0x80)
             0xEF  // 9  (0x6F | 0x80)
      };


   for(int i =0; i<8; i++)
   {
      if(!(segFont[digit] &(1<<i))){
    	  HAL_GPIO_WritePin(fndPin[i].GPIOx, fndPin[i].pinNum, RESET);
      }
    else {
    	  HAL_GPIO_WritePin(fndPin[i].GPIOx, fndPin[i].pinNum, SET);
      }
   }

}
