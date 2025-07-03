/*
 * queue.c
 *
 *  Created on: Jun 25, 2025
 *      Author: rhoblack
 */

#include <my_queue.h>

Que_TypeDef qBtnLed;

void My_Que_Init(Que_TypeDef *q, int type_size) // 메모리 공간을 잡음
{
	q->front = 0;
	q->rear = 0;
	q->typeSize = type_size;
	for(int i=0; i<QUE_SIZE; i++){
		q->queData[i]=malloc(q->typeSize);
	}
}

void My_Que_DeInit(Que_TypeDef *q) // 메모리 공간을 해제
{
	for(int i=0; i<QUE_SIZE; i++){
		free(q->queData[i]);
	}
}

int My_isQueFull(Que_TypeDef *q)
{
	return q->front == ((q->rear+1) % QUE_SIZE);
}

int My_isQueEmpty(Que_TypeDef *q)
{
	return q->front == q->rear;
}

bool My_enQue(Que_TypeDef *q, void *pData)
{
	if (My_isQueFull(q)) {
		return false;
	}
	memcpy(q->queData[q->rear], pData, q->typeSize);
	q->rear = (q->rear+1) % QUE_SIZE;
	return true;
}

bool My_deQue(Que_TypeDef *q, void *pData)
{
	if (My_isQueEmpty(q)) {
		return false;
	}
	memcpy(pData, q->queData[q->front], q->typeSize);

	q->front = (q->front+1) % QUE_SIZE;
	return true;
}

bool My_peekQue(Que_TypeDef *q, void *pData)
{
	if (My_isQueEmpty(q)) {
		return false;
	}
	memcpy(pData, q->queData[q->front], q->typeSize);
	return true;
}



