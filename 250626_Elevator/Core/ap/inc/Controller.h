/*
 * Controller.h
 *
 *  Created on: Jun 24, 2025
 *      Author: rhoblack
 */

#ifndef AP_CONTROLLER_H_
#define AP_CONTROLLER_H_

//#include <Model_Treadmill.h>
#include "treadmill.h"


enum {NO_STATE_ACT =0 , START_ACT, STOP_ACT, DOWN_ACT, UP_ACT};

typedef struct {
	int id;
}inputData_TypeDef;

void Controller_SetInputData(inputData_TypeDef inputData);
void Controller_Excute();

#endif /* AP_CONTROLLER_H_ */
