
#include "FND.h"


static void FND_DispOff(int fndPos);
static void FND_DispOn(int fndPos);
static void FND_DispDigit(uint16_t digit);
static void FND_DispOffAll();

enum {
   DIGIT_1, DIGIT_10, DIGIT_100, DIGIT_1000
};

typedef struct {
   GPIO_TypeDef *GPIOx;
   uint32_t pinNum;
} FND_TypeDef;

FND_TypeDef fndDigitCom[4] = {
	{GPIOA, 12 }, { GPIOC, 5 }, { GPIOC, 6 }, { GPIOC, 8 }
};

FND_TypeDef fndPin[8] = {
      { GPIOA, 11 }, //A
      { GPIOB, 12 }, //B
      { GPIOB, 2 }, //C
      { GPIOB, 1 }, //D
      { GPIOB, 15 }, //E
      { GPIOB, 14 }, //F
      { GPIOB, 13 }, //G
      { GPIOC, 4 }, //Dp
};

static uint16_t fndDispNum = 0; //fnd에 출력되는 숫자
// fndDispData에서 인터럽트가 자주 발생해도 0으로 시작하지않고 
// 이전 값의 다음 자릿수로 넘어갈 수 있음

void FND_Init()
{
   for(int i=0; i<4; i++){
      GPIO_Init(fndDigitCom[i].GPIOx, fndDigitCom[i].pinNum, OUTPUT);
   }
   for(int i=0; i<8; i++){
      GPIO_Init(fndPin[i].GPIOx, fndPin[i].pinNum, OUTPUT);
   }
}

//write fndDispNum
void FND_WriteData(uint16_t data) {
   fndDispNum = data;
}

//read fndDispNum
uint16_t FND_ReadData() {
   return fndDispNum;
}

//display fndDispNum
void FND_DispData() {
   static int digitPos = 0;
   //인터럽트가 발생하면 한 자리씩 출력한다.
   digitPos = (digitPos + 1) % 4;

   switch (digitPos) {
   case DIGIT_1:
      FND_DispOffAll();
      FND_DispDigit(fndDispNum % 10);
      FND_DispOn(digitPos);
      break;
   case DIGIT_10:
      FND_DispOffAll();
      FND_DispDigit(fndDispNum / 10 % 10);
      FND_DispOn(digitPos);
      break;
   case DIGIT_100:
      FND_DispOffAll();
      FND_DispDigit(fndDispNum / 100 % 10);
      FND_DispOn(digitPos);
      break;
   case DIGIT_1000:
      FND_DispOffAll();
      FND_DispDigit(fndDispNum / 1000 % 10);
      FND_DispOn(digitPos);
      break;
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
      GPIO_WritePin(fndPin[i].GPIOx, fndPin[i].pinNum, PIN_RESET);
      }
    else {
      GPIO_WritePin(fndPin[i].GPIOx, fndPin[i].pinNum, PIN_SET);
      }
   }

}

void FND_DispOff(int fndPos) {

   GPIO_WritePin(fndDigitCom[fndPos].GPIOx, fndDigitCom[fndPos].pinNum, PIN_SET);

}

void FND_DispOn(int fndPos) {
   GPIO_WritePin(fndDigitCom[fndPos].GPIOx, fndDigitCom[fndPos].pinNum,PIN_RESET);
}

void FND_DispOffAll() {
   for (int i = 0; i < 4; i++) {
      GPIO_WritePin(fndDigitCom[i].GPIOx, fndDigitCom[i].pinNum, PIN_SET);
   }
}

void FND_DispDigit(uint16_t digit) {

      const uint8_t segFont[10] = {
            0x3F,
            0x06,
            0x5B,
            0x4F,
            0x66,
            0x6D,
            0x7D,
            0x07,
            0x7F,
            0x6F
      };
   for (int i = 0; i < 8; i++) {
      if (!(segFont[digit] & (1 << i))) {
         GPIO_WritePin(fndPin[i].GPIOx, fndPin[i].pinNum, PIN_RESET);
      } else {
         GPIO_WritePin(fndPin[i].GPIOx, fndPin[i].pinNum, PIN_SET);
      }
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




