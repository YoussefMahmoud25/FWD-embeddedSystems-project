/*
 * Led.h
 *
 * Created: 12/11/2022 3:28:02 PM
 *  Author: Dell_Lap
 */ 

//HEADER FILE GUARD
#ifndef LED_H_
#define LED_H_

//INCLUDE USED DRIVER'S .H
#include "../../MCAL/Dio/Dio.h"

//FUNCTIONS
 void LED_init(uint8_t ledPort,uint8_t ledPin); // INITIALIZE LED DIRECTION
 void LED_on(uint8_t ledPort,uint8_t ledPin); // SET LED TO NE ON (HIGH)
 void LED_off(uint8_t ledPort,uint8_t ledPin); // SET LED TO BE OFF (LOW)
 void LED_toggle(uint8_t ledPort,uint8_t ledPin); // TOGGLE LED 

#endif /* LED_H_ */