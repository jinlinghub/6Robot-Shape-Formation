#ifndef __VMOTORCONTROLTASK_H
#define __VMOTORCONTROLTASK_H

#include "halDriver.h"
#include "FreeRTOS.h"
#include "task.h"

#include "sysConfig.h"
#include "readSpeed.h"
#include "controlMotor.h"
#include "led.h"

extern void vMotorControlTask( void *pvParameters );

#endif