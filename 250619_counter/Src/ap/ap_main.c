
#include "ap_main.h"

enum {Start, Stop, Clear};

Button_Handler_t hBtnStart;
Button_Handler_t hBtnStop;
Button_Handler_t hBtnClear;


int ap_main()
{


    //uint8_t data = 1;
    int led_state = Stop;
    uint32_t data = 0;
//	FND_SegSel(0);
//	FND_SegSel(1);
//	FND_SegSel(2);
//	FND_SegSel(3);
//	fnd_Write(0x01);


    //int btn_state = 0;

    while (1)
    {
//    	FND_SegSel(0);
//		FND_SegSel(1);
//		FND_SegSel(2);
//		FND_SegSel(3);
//		fnd_Write(0x01);
    	FND_DisplayNumber(data);

        switch (led_state)
        {
        case Stop:
        	if (Button_GetState(&hBtnStart) == ACT_RELEASED)
        		led_state = Start;
        	else if (Button_GetState(&hBtnClear) == ACT_RELEASED)
        		led_state = Clear;
        	break;

        case Start:
        	data += 1;
        	if (Button_GetState(&hBtnStop) == ACT_RELEASED)
        		led_state = Stop;
			break;

        case Clear:
        	data = 0;
        	if (Button_GetState(&hBtnStart) == ACT_RELEASED)
				led_state = Start;
			break;

        }

    }

    return 0;
}


void ap_init()
{
	SystemClock_Init();
	LEDBar_Init();
    Button_Init(&hBtnClear, GPIOB, 5);
    Button_Init(&hBtnStart, GPIOB, 3);
    Button_Init(&hBtnStop, GPIOA, 10);
}
