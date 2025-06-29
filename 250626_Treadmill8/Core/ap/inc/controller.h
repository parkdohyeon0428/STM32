/*
 * elevator.h
 *
 *  Created on: Jun 27, 2025
 *      Author: kccistc
 */

#ifndef AP_INC_TREADMILL_H_
#define AP_INC_TREADMILL_H_

#include "stm32f4xx_hal.h"
#include "Button.h"
#include "UltraSonic.h"
#include "DC_Motor.h"
#include "Buzzer.h"
#include "sound.h"
#include "LedBar.h"
#include "queue.h"
#include "FND.h"
#include "DHT11.h"
#include "Model.h"
#include "treadmill.h"


typedef enum {
    IDLE,
    RUNNING,
	UP,
	DOWN,
	NO_RUNNING
} TreadmillState_t;

extern TreadmillState_t state;
extern UltraSonic_TypeDef sensor;
extern int speed;

void controller_excute();

//void treadmill_run();
//void treadmill_emergency();
//void Listener_UartCallBack();
//void Treadmill_Controller_SetInput(char input);

#endif /* AP_INC_TREADMILL_H_ */
