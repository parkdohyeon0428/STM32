///*
// * Button.c
// *
// *  Created on: Jun 19, 2025
// *      Author: kccistc
// */
//
//#include "Button.h"
//
//typedef struct {
//	GPIO_TypeDef *GPIOx;
//	uint32_t pinNum;
//	uint32_t prevState;
//}Button_Handler_t;  // 각각의 버튼 제어하기 위한 핸들러
//
//enum {PUSHED = 0, RELEASED};
//
//
////Button_TypeDef BTN[4] = {
////		{GPIOA, 13},
////		{GPIOB, 5},
////		{GPIOB, 3},
////		{GPIOA, 10}
////}
//
//void Button_Init(Button_Handler_t *hbtn, GPIO_TypeDef *GPIOx, uint32_t pinNum)
//{
//    hbtn->GPIOx = GPIOx;
//    hbtn->GPIOx = pinNum;
//    hbtn->prevState = RELEASED;
//
//    GPIO_Init(hbtn->GPIOx, hbtn->pinNum, INPUT);
//}
//
//button_state_t Button_GetState()
//{
//	static uint32_t prevState = RELEASED;
//	uint32_t curState;
//	curState = GPIO_ReadPin(hbtn->GPIOx, hbtn->pinNum);
//
//	if ((prevState == RELEASED) && (curState == PUSHED)) { // button released -> pushed
//		delay(2); // debounce
//		hbtn->prevState = PUSHED;
//		return ACT_PUSHED;
//	}
//	else if ((prevState == PUSHED) && (curState == RELEASED)) { // button pushed -> released
//		delay(2); // debounce
//		hbtn->prevState = RELEASED;
//		return ACT_RELEASED;
//	}
//	return NO_ACT;
//}

/*
 * button.c
 *
 *  Created on: Jun 19, 2025
 *      Author: kccistc
 */

#include "Button.h"



enum {PUSHED = 0, RELEASED};

void Button_Init(Button_Handler_t *hbtn, GPIO_TypeDef * GPIOx, uint32_t pinNum)
{
   hbtn->GPIOx = GPIOx;
   hbtn->pinNum = pinNum;
   hbtn->prevState = RELEASED;

   GPIO_Init(hbtn->GPIOx, hbtn->pinNum, INPUT);
}



button_state_t Button_GetState(Button_Handler_t *hbtn)
{
   //static uint32_t prevState[4] = RELEASED;
   uint32_t curState;
   curState = GPIO_ReadPin(hbtn->GPIOx, hbtn->pinNum);

   if ((hbtn->prevState == RELEASED) && (curState == PUSHED)) { // button released -> pushed
      delay(2); // debounce
      hbtn->prevState = PUSHED;
      return ACT_PUSHED;
   }
   else if ((hbtn->prevState == PUSHED) && (curState == RELEASED)) { // button pushed -> released
      delay(2); // debounce
      hbtn->prevState = RELEASED;
      return ACT_RELEASED;
   }
   return NO_ACT;
}
