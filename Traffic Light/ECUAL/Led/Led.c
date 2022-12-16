/*
 * Led.c
 *
 * Created: 12/11/2022 3:37:04 PM
 *  Author: Dell_Lap
 */ 

//INCLUDE USED DRIVER'S .H
#include "Led.h"

//FUNCTIONS
 void LED_init(uint8_t ledPort,uint8_t ledPin) // INITIALIZE LED DIRECTION
 {
	 DIO_init(ledPin,ledPort,OUT);
 }
 void LED_on(uint8_t ledPort,uint8_t ledPin) // SET LED TO NE ON (HIGH)
 {
	 DIO_write(ledPin,ledPort,HIGH);
 } 
 void LED_off(uint8_t ledPort,uint8_t ledPin) // SET LED TO BE OFF (LOW)
 {
	 DIO_write(ledPin,ledPort,IN);
 } 
 void LED_toggle(uint8_t ledPort,uint8_t ledPin) // TOGGLE LED
 {
	 DIO_toggle(ledPin,ledPort);
 }