
#include "ap_main.h"

enum {LEFT, RIGHT, OFF};

Button_Handler_t hBtnLeft;
Button_Handler_t hBtnRight;
Button_Handler_t hBtnOnoff;


int ap_main()
{

    uint8_t data = 1;
    int led_state = OFF;
    //int btn_state = 0;

    while (1)
    {

        switch (led_state)
        {
        case LEFT:
        	if (Button_GetState(&hBtnRight) == ACT_RELEASED)
        		led_state = RIGHT;
        	else if (Button_GetState(&hBtnOnoff) == ACT_RELEASED)
        		led_state = OFF;
        	data = (data >> 1) | (data << 7);
        	LEDBar_Write(data);
        	break;
        case RIGHT:
        	if (Button_GetState(&hBtnLeft) == ACT_RELEASED)
        		led_state = LEFT;
        	else if (Button_GetState(&hBtnOnoff) == ACT_RELEASED)
        		led_state = OFF;
        	data = (data << 1) | (data >> 7);
			LEDBar_Write(data);
			break;
        case OFF:
        	if (Button_GetState(&hBtnLeft) == ACT_RELEASED)
				led_state = LEFT;
			else if (Button_GetState(&hBtnRight) == ACT_RELEASED)
				led_state = RIGHT;
        	LEDBar_Write(0x00);
			break;

        }

        //LEDBar_Write(data);
        delay(100);

    }

    return 0;
}

void ap_init()
{
	SystemClock_Init();
	LEDBar_Init();
    Button_Init(&hBtnLeft, GPIOB, 5);
    Button_Init(&hBtnRight, GPIOB, 3);
    Button_Init(&hBtnOnoff, GPIOA, 10);
}
