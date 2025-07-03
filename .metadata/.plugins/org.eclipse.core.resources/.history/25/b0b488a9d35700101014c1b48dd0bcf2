/*
 * queue.h
 *
 *  Created on: Jun 25, 2025
 *      Author: rhoblack
 */

#ifndef AP_INC_MY_QUEUE_H_
#define AP_INC_MY_QUEUE_H_
#include "stm32f4xx_hal.h"
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define QUE_SIZE   4

typedef struct {
   int front;
   int rear;
   int typeSize;
   void *queData[QUE_SIZE];
}Que_TypeDef;

extern Que_TypeDef qBtnLed;

void My_Que_Init(Que_TypeDef *q, int type_size);
void My_Que_DeInit(Que_TypeDef *q);
int My_isQueFull(Que_TypeDef *q);
int My_isQueEmpty(Que_TypeDef *q);
bool My_enQue(Que_TypeDef *q, void *pData);
bool My_deQue(Que_TypeDef *q, void *pData);
bool My_peekQue(Que_TypeDef *q, void *pData);

#endif /* AP_INC_MY_QUEUE_H_ */
