/*
 * tread.c
 *
 *  Created on: Jun 29, 2025
 *      Author: kccistc
 */


#include "treadmill.h"

#define MAX_SPEED 100
#define MIN_SPEED 0

int speed = 3;

void treadmill_start()
{
	DC_Motor_SetFreq(10, speed);
	DC_Motor_Start();
}

void treadmill_stop()
{
	DC_Motor_Stop();
}

void treadmill_up()
{
	speed += 2;
	if (speed > MAX_SPEED) speed = MAX_SPEED;
}

void treadmill_down()
{
	speed -= 2;
	if (speed < MIN_SPEED) speed = MIN_SPEED;
}
