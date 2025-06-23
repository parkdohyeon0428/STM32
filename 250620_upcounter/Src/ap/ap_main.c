#include "ap_main.h"

enum{LEFT, RIGHT, OFF}; //상태 만들고

Button_Handler_t hbtnLeft;
Button_Handler_t hbtnRight;
Button_Handler_t hbtnOnOff;

void TIM2_IRQHandler(void)
{
	FND_DispData();
	incTick();
	TIM_ClearUIFlag(TIM2);
} // 1ms 마다 인터럽트 실행

int ap_main()
{
   //FND_WriteData(1234);
   uint32_t counter = 0;
   uint32_t prevCounterTime = 0;

   while(1)
   {
	  if (getTick() - prevCounterTime >= 1000) {
		  prevCounterTime = getTick();
		  FND_WriteData(counter++);
	  }
	  //delay(300);

//      delay(1);
   }

   return 0;
}

void ap_init()
{
   SystemClock_Init();
   Button_Init(&hbtnLeft, GPIOB, 5);
   Button_Init(&hbtnRight, GPIOB, 3);
   Button_Init(&hbtnOnOff, GPIOA, 10);
   FND_Init();
   TIM_Init(TIM2, 16-1, 1000-1); // 1ms
   TIM_UIEnable(TIM2);
   NVIC_EnableIRQ(TIM2_IRQn); // interrupt 루틴 요청 enable
   TIM_CntStart(TIM2);

//   TIM_Init(TIM5, 16000-1, 0xffffffff);
//   SysTick_Init(TIM5);
//   SysTick_Start();
}
