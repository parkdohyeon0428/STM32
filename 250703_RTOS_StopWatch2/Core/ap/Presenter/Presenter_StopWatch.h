/*
 * Presenter_StopWatch.h
 *
 *  Created on: Jul 3, 2025
 *      Author: kccistc
 */

#ifndef AP_PRESENTER_PRESENTER_STOPWATCH_H_
#define AP_PRESENTER_PRESENTER_STOPWATCH_H_

#include "cmsis_os.h"
#include "FND.h"
#include "Model_StopWatch.h"
#include "lcd.h"
#include "i2c.h"


void Presenter_StopWatchInit();
void Presenter_StopWatchExecute();
void Presenter_StopWatch_FND(stopWatch_t stopWatchData);
void Presenter_StopWatch_LCD(stopWatch_t stopWatchData);

#endif /* AP_PRESENTER_PRESENTER_STOPWATCH_H_ */
