/*
 * dht.h
 *
 *  Created on: Jun 27, 2025
 *      Author: kccistc
 */

#ifndef DRIVER_DHT11_DHT_H_
#define DRIVER_DHT11_DHT_H_

#include "stm32f4xx_hal.h"
#include "gpio.h"
#include "tim.h"

typedef struct {
    GPIO_TypeDef *data_GPIOx;
    uint16_t data_pinNum;
} DHT11_TypeDef;

typedef enum {
    DHT11_IDLE,
    DHT11_START_SIGNAL,
    DHT11_WAIT_RESPONSE_LOW,
    DHT11_WAIT_RESPONSE_HIGH,
    DHT11_READING_BITS,
    DHT11_DONE,
    DHT11_ERROR
} DHT11_State_t;

typedef struct {
    GPIO_TypeDef *GPIOx;
    uint16_t GPIO_Pin;

    DHT11_State_t state;

    uint32_t timestamp; // 상태별 시간 체크
    uint8_t bitIndex;
    uint8_t data[5];
    uint8_t temp;
    uint8_t humi;

    uint8_t doneFlag; // 읽기 완료 플래그
} DHT11_Handle_t;

void     DHT11_Init(DHT11_TypeDef *dht, GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
//uint8_t  DHT11_Read(DHT11_TypeDef *dht, uint8_t *temp, uint8_t *humi);
void     delay_us_dht(uint16_t us);  // 타이머 기반 딜레이
void DHT11_Process(DHT11_Handle_t *dht);

#endif /* DRIVER_DHT11_DHT_H_ */
