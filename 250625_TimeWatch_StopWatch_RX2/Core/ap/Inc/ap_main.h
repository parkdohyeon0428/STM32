/*
 * ap_main.h
 *
 *  Created on: Jun 19, 2025
 *      Author: kccistc
 */

#ifndef DRIVER_AP_AP_MAIN_H_
#define DRIVER_AP_AP_MAIN_H_


#include <Inc/stopwatch.h>
#include <Inc/timewatch.h>

#include "stm32f4xx_hal.h"
#include "tim.h"
#include "Listener.h"
#include "Controller.h"
#include "Presenter.h"


void ap_init();
int ap_main();

#endif /* DRIVER_AP_AP_MAIN_H_ */
