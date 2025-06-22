
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
