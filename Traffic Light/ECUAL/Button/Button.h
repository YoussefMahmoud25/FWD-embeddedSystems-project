/*
 * Button.h
 *
 * Created: 12/11/2022 3:28:24 PM
 *  Author: Dell_Lap
 */ 

//HEADER FILE GUARD
#ifndef BUTTON_H_
#define BUTTON_H_

//INCLUDE USED DRIVER'S .H
#include "../../MCAL/Dio/Dio.h"

//FUNCTIONS
void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin); // INITIALIZE BUTTON
void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value); // READ BUTTON 

#endif /* BUTTON_H_ */