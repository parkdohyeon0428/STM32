/*
 * ap_main.c
 *
 *  Created on: Jun 19, 2025
 *      Author: rhoblack
 */

#include "ap_main.h"


//static uint8_t rcvData = 0;

DHT11_TypeDef hdht11;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == TIM2) {
		FND_DispDataCallBack();
	}
}

int ap_main()
{
   HAL_TIM_Base_Start_IT(&htim2);
   HAL_TIM_Base_Start(&htim4);
   HAL_TIM_Base_Start(&htim5);
   HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
   HAL_TIM_Base_Start(&htim3);
    while (1)
    {
//    	Listener_Excute();
//    	controller_excute();
//        Presenter_Excute();
    }

    return 0;
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if (huart->Instance == USART2) {
		Listener_UartCallBack();
	}
}


void ap_init()
{
	Listener_Init();
	Presenter_Init();
	Sound_Init();
	DC_Motor_Init(&htim1, TIM_CHANNEL_1);
	DHT11_Init(&hdht11, GPIOB, GPIO_PIN_6);

}



