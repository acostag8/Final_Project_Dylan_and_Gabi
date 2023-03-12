//=====[Libraries]=============================================================

#include "arm_book_lib.h"

#include "alarm_clock_system.h"
#include "alarm.h"
#include "user_interface.h"
#include "pc_serial_com.h"
#include "ir_sensor.h"
#include "ldr_sensor.h"
#include "servo_motor.h"
#include "RGB_led.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void alarmClockSystemInit()
{
    userInterfaceInit(); 
    alarmInit();
    pcSerialComInit();
    RGBLedInit();
    ldrSensorInit();
    servoMotorInit();

}

void alarmClockSystemUpdate()
{
    userInterfaceUpdate();
    pcSerialComUpdate();
    alarmUpdate();
    irSensorUpdate();
    ldrSensorUpdate();
    ldrSensorReading();    
    RGBLedStateRead(); 
    delay(SYSTEM_TIME_INCREMENT_MS);
}


//=====[Implementations of private functions]==================================
