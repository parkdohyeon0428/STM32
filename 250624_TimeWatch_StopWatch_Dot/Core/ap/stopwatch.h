/*
 * stopwatch.h
 *
 *  Created on: Jun 23, 2025
 *      Author: kccistc
 */

#ifndef AP_STOPWATCH_H_
#define AP_STOPWATCH_H_

#include "stm32f4xx_hal.h"
#include "Button.h"
#include "FND.h"



void StopWatch_IncTimeCallBack();
void StopWatch_IncTime();
void StopWatch_Excute();
void StopWatch_Stop();
void StopWatch_Run();
void StopWatch_Clear();


extern Button_Handler_t hBtnMode;
extern Button_Handler_t hBtnRunStop;
extern Button_Handler_t hBtnClear;

#endif /* AP_STOPWATCH_H_ */
