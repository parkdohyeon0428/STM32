/*
 * GPIO.c
 *
 *  Created on: Jun 18, 2025
 *      Author: kccistc
 */
#include "GPIO.h"
#include <stdint.h>





void GPIO_Init(GPIO_TypeDef *GPIOx, uint32_t pinNum, pinMode pin_Mode)
{
   if(pin_Mode == OUTPUT)
   {
      GPIOx -> MODER  |=  (0x01U << (pinNum*2)); // 2비트 중 LSB 1로 : 출력모드
      GPIOx -> MODER  &= ~(0x02U << (pinNum*2)); // 2비트 중 MSB 0으로
   }
   else {
      GPIOx -> MODER  &= ~(0x03U << (pinNum*2)); // 둘 다 0으로 : 입력모드
   }
}



void GPIO_WritePin(GPIO_TypeDef *GPIOx, uint32_t pinNum, pinState pin_State)
{
   if(pin_State == PIN_SET) {
      GPIOx -> ODR |= (1U<<pinNum); // 해당 핀을 1로 설정(on)
   }
   else {
      GPIOx-> ODR &= ~(1U<<pinNum); // 해당 핀을 0으로 설정 (off)
   }
}


//void Led_Write(GPIO_TypeDef *GPIOx, uint8_t LEDNum, uint32_t pinNum ,pinState pin_State)
//{
//	if(LEDNum[0] == PIN_SET) {
//		GPIOx-> ODR |= (1U<<pinNum);
//	} else {
//	      GPIOx-> ODR &= ~(1U<<pinNum);
//	   }
//	if (LEDNum[1] == PIN_SET) {
//		GPIOx-> ODR |= (1U<<pinNum);
//	} else {
//	      GPIOx-> ODR &= ~(1U<<pinNum);
//	   }
//	if (LEDNum[2] == PIN_SET) {
//		GPIOx-> ODR |= (1U<<pinNum);
//	} else {
//	      GPIOx-> ODR &= ~(1U<<pinNum);
//	   }
//	if (LEDNum[3] == PIN_SET) {
//		GPIOx-> ODR |= (1U<<pinNum);
//	} else {
//	      GPIOx-> ODR &= ~(1U<<pinNum);
//	   }
//	if (LEDNum[4] == PIN_SET) {
//		GPIOx-> ODR |= (1U<<pinNum);
//	} else {
//	      GPIOx-> ODR &= ~(1U<<pinNum);
//	   }
//	if (LEDNum[5] == PIN_SET) {
//		GPIOx-> ODR |= (1U<<pinNum);
//	} else {
//	      GPIOx-> ODR &= ~(1U<<pinNum);
//	   }
//	if (LEDNum[6] == PIN_SET) {
//		GPIOx-> ODR |= (1U<<pinNum);
//	} else {
//	      GPIOx-> ODR &= ~(1U<<pinNum);
//	   }
//	if (LEDNum[7] == PIN_SET) {
//		GPIOx-> ODR |= (1U<<pinNum);
//	} else {
//	      GPIOx-> ODR &= ~(1U<<pinNum);
//	   }
//}


uint32_t GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint32_t pinNum)
{
   return !((GPIOx->IDR & (1<<pinNum)) == 0); 

}



void GPIO_TogglePin(GPIO_TypeDef *GPIOx, uint32_t pinNum)
{
   (GPIOx->ODR ^= 1<<pinNum) ; // 1bit만 내보내기 위한
}
