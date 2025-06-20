

#include <stdint.h>
#include "stm32f411xe.h"
#include "GPIO.h"
#include "LED_Bar.h"

#define PERIPH_BASE       (0x40000000UL) // 모든 주변 장치의 시작 주소 
#define APB1PERIPH_OFFSET (0x00000UL)    // APB1 버스 기준 주소
#define APB2PERIPH_OFFSET (0x10000UL)    // APB2 버스 기준 주소

#define AHB1PERIPH_OFFSET (0x20000UL)    // AHB1 버스 기준 주소

#define APB1PERIPH_BASE            (PERIPH_BASE + APB1PERIPH_OFFSET)
#define APB2PERIPH_BASE            (PERIPH_BASE + APB2PERIPH_OFFSET)
#define AHB1PERIPH_BASE            (PERIPH_BASE + AHB1PERIPH_OFFSET)

#define GPIOA_OFFSET (0x0000UL)
#define GPIOB_OFFSET (0x0400UL)
#define GPIOC_OFFSET (0x0800UL)
#define GPIOD_OFFSET (0x0C00UL)

#define RCC_OFFSET (0x3800UL)

#define GPIOA_BASE (AHB1PERIPH_BASE + GPIOA_OFFSET)
#define GPIOB_BASE (AHB1PERIPH_BASE + GPIOB_OFFSET)
#define GPIOC_BASE (AHB1PERIPH_BASE + GPIOC_OFFSET)
#define GPIOD_BASE (AHB1PERIPH_BASE + GPIOD_OFFSET)

#define RCC_BASE   (AHB1PERIPH_BASE + RCC_OFFSET)

#define RCC ((RCC_TypeDef *)(RCC_BASE))

//#define GPIOA_MODER    *(volatile uint32_t *)(GPIOA_BASE + 0x00)
//#define GPIOA_OTYPER   *(volatile uint32_t *)(GPIOA_BASE + 0x04)
//#define GPIOA_OSPEEDR  *(volatile uint32_t *)(GPIOA_BASE + 0x08)
//#define GPIOA_PUPDR    *(volatile uint32_t *)(GPIOA_BASE + 0x0C)
//#define GPIOA_IDR      *(volatile uint32_t *)(GPIOA_BASE + 0x10)
//#define GPIOA_ODR      *(volatile uint32_t *)(GPIOA_BASE + 0x14)
//#define GPIOA_BSRR     *(volatile uint32_t *)(GPIOA_BASE + 0x18)
//#define GPIOA_LCKR     *(volatile uint32_t *)(GPIOA_BASE + 0x1C)
//#define GPIOA_AFRL     *(volatile uint32_t *)(GPIOA_BASE + 0x20)
//#define GPIOA_AFRH     *(volatile uint32_t *)(GPIOA_BASE + 0x24)

//typedef struct {
//volatile uint32_t MODER;
//volatile uint32_t OTYPER;
//volatile uint32_t OSPEEDR;
//volatile uint32_t PUPDR;
//volatile uint32_t IDR;
//volatile uint32_t ODR;
//volatile uint32_t BSRR;
//volatile uint32_t LCKR;
//volatile uint32_t AFR[2];
//} GPIO_TypeDef;

//#define RCC_AHB1ENR *(volatile uint32_t *) 0x40023830

#define GPIOA ((GPIO_TypeDef *) (GPIOA_BASE))
#define GPIOB ((GPIO_TypeDef *) (GPIOB_BASE))
#define GPIOC ((GPIO_TypeDef *) (GPIOC_BASE))

void delay();

int main(void)
{
//   1. 페리페럴에 clock 넣기//
   RCC -> AHB1ENR |= (1U << 0);  // GPIOA 클럭 활성화
   RCC -> AHB1ENR |= (1U << 1);  // GPIOB 클럭 활성화
   RCC -> AHB1ENR |= (1U << 2);  // GPIOC 클럭 활성화
//   GPIOA -> MODER |=  (1U << 10);  //GPIOA_MODER
//   GPIOA -> MODER &= ~(1U << 11); // 11번 bit를 0
   GPIO_Init(GPIOA, 0, OUTPUT);
   GPIO_Init(GPIOA, 1, OUTPUT);
   GPIO_Init(GPIOA, 4, OUTPUT);
   GPIO_Init(GPIOB, 0, OUTPUT);
   GPIO_Init(GPIOC, 1, OUTPUT);
   GPIO_Init(GPIOC, 0, OUTPUT);
   GPIO_Init(GPIOC, 2, OUTPUT);
   GPIO_Init(GPIOC, 3, OUTPUT);
   //GPIO_Init(GPIOC, 13, output);
//   2. PA5를 output으로 설정//

//   3. set PA5 high//
   uint8_t data = 1;
   uint8_t btn = 0;
   uint8_t flag = 1;

//   4. set PA5 low//
   while(1)
   {


      LED_Bar_Write(data);
      delay();
      //data = (data << 1) | (data >> 7);

      btn = GPIO_ReadPin(GPIOC, 13);


      if (btn==0)
      {
    	flag ^= 1;
      }



      if (flag)
      {
    	  data = (data << 1) | (data >> 7);
      } else {
    	  data = (data >> 1) | (data << 7);
      }
//      LED_Bar_Write(data);
//      delay();
      //GPIO_WritePin(GPIOA, 5, PIN_RESET);
//      GPIOA -> ODR &= ~(1U << 5); // 11번 bit를 0

   }

}

void delay()
{
   for(int i = 0; i<100000; i++){}
}

