#ifndef AP_AP_MAIN_H_
#define AP_AP_MAIN_H_

#include <stdint.h>
#include "GPIO.h"
#include "LED_Bar.h"
#include "SystemClock.h"
#include "Button.h"
#include "FND.h"
#include "TIM.h"
#include "Systick.h"

int ap_main();
void ap_init();

#endif
