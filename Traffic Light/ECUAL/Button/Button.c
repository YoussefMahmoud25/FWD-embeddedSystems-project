/*
 * Button.c
 *
 * Created: 12/11/2022 3:37:20 PM
 *  Author: Dell_Lap
 */ 

//INCLUDE USED DRIVER'S .H
#include "Button.h"

//FUNCTIONS
void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin) // INITIALIZE BUTTON
{
	DIO_init(buttonPin,buttonPort,IN);  // DIRECTION IS 0
}
void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value) // READ BUTTON
{
	DIO_read(buttonPin,buttonPort,value);  //VALUE IS 1 
}