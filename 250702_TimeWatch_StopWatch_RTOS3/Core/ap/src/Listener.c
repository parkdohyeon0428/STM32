
#include "Listener.h"


static void Listener_CheckButton(); // 외부 호출 x

static button_t btnWatch = {0};


void Listener_Init()
{
	Button_Init(&hBtnMode, GPIOB, GPIO_PIN_5);
	Button_Init(&hBtnRunStop, GPIOB, GPIO_PIN_3);
	Button_Init(&hBtnClear, GPIOA, GPIO_PIN_10);
}

void Listener_Excute()
{
	Listener_CheckButton();
}

void Listener_CheckButton()
{
	static uint32_t prevChkTime = 0;
	uint32_t curTick = HAL_GetTick();
	if (curTick - prevChkTime < 100) return;
	prevChkTime = curTick;


	if (Button_GetState(&hBtnMode) == ACT_RELEASED) {
		btnWatch.id = BTN_MODE;
		enQue(&btnQue, &btnWatch);
	}
	else if (Button_GetState(&hBtnRunStop) == ACT_PUSHED) {
		btnWatch.id = BTN_RUN_STOP;
		enQue(&btnQue, &btnWatch);
	}
	else if (Button_GetState(&hBtnClear) == ACT_PUSHED) {
		btnWatch.id = BTN_CLEAR;
		enQue(&btnQue, &btnWatch);
	}
}
