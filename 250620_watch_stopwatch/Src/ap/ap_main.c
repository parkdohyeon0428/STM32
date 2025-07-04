#include "ap_main.h"

enum{MODE, STOP, RUN, CLEAR}; //상태 만들고
enum{Watch, Stopwatch};

Button_Handler_t hbtnmode;
Button_Handler_t hbtnrun;
Button_Handler_t hbtnclear;

int mod = 0;
int mod1 = 0;

int mode = Watch;
int state = STOP;

void TIM2_IRQHandler(void)
{
	static int cou = 0;
	cou ++;
	incTick();
	if (mode == Watch) {
		if(cou % 1000 <500)
		{
			FND_DispData_DOT(mod);
		} else {
			FND_DispData();
		}

	}
	else if (mode == Stopwatch) {
		if(cou % 1000 <100)
		{
			FND_DispData_DOT(mod1);
		}
		else
		{
			FND_DispData();
		}
	}
	TIM_ClearUIFlag(TIM2);

}



int ap_main()
{
   uint32_t count = 0;
   uint32_t hour = 0;

   uint32_t counter = 0;
   uint32_t min = 0;

   uint32_t wcounter = 0;
   uint32_t prevCounterTime = 0;

   while(1)
   {
	   if (getTick() - wcounter >= 6000) {
		   wcounter = getTick();
		   count++;
		   if (count % 60 == 0) {
			   hour = hour + 100;
			   count = 0;
			   if (hour == 1200) {
				   hour = 0;
			   }
		   }
	   }
	   switch (mode)
	   {
	   case  Watch:
		  FND_WriteData(1200+hour+count);
		  mod = 0b0100;
		  if (getTick() - prevCounterTime >= 100) {
			  prevCounterTime = getTick();
			  if (state == RUN) counter++;
		  }

		  if (Button_GetState(&hbtnmode) == ACT_RELEASED)
		  {
			  mode = Stopwatch;
		  }
		  break;
	    case Stopwatch:
		   mod1 = 0b1010;
		   switch (state)
			  {
			  case STOP:
				  //count ++;
				  FND_WriteData(min+counter);
				  if (Button_GetState(&hbtnrun) == ACT_RELEASED)
					  state = RUN;
				  else if (Button_GetState(&hbtnclear) == ACT_RELEASED)  {
						state = CLEAR;
				  	  	min = 0;
				  	  	counter = 0;
				  }
				  else if (Button_GetState(&hbtnmode) == ACT_RELEASED)
					  mode = Watch;
				  break;
			  case RUN:
				  //count ++;
				  if (getTick() - prevCounterTime >= 10) {
					  prevCounterTime = getTick();
					  counter ++;
					  if (counter % 600 == 0) {
						  min = min + 1000;
						  counter = 0;
					  }
					  FND_WriteData(min + counter);
				  }
				  else if (Button_GetState(&hbtnrun) == ACT_RELEASED)
					  state = STOP;
				  else if (Button_GetState(&hbtnmode) == ACT_RELEASED)
					  mode = Watch;
				  break;
			  case CLEAR:
				  //count ++;
				  FND_WriteData(min + counter);
				  if (Button_GetState(&hbtnrun) == ACT_RELEASED)
					  state = RUN;
				  else if (Button_GetState(&hbtnmode) == ACT_RELEASED)
					  mode = Watch;
				  break;
			  }

          }
   }
   return 0;
}

void ap_init()
{
   SystemClock_Init();

   Button_Init(&hbtnclear, GPIOB, 5);
   Button_Init(&hbtnrun, GPIOB, 3);
   Button_Init(&hbtnmode, GPIOA, 10);
   FND_Init();
   TIM_Init(TIM2, 16-1, 1000-1);
   TIM_CntStart(TIM2);
   TIM_UIEnable(TIM2);
   NVIC_EnableIRQ(TIM2_IRQn); // interrupt 루틴 요청 enable
//
//   TIM_Init(TIM5, 16000-1, 0xffffffff);
//   SysTick_Init(TIM5);
//   SysTick_Start();
}
