/*
 * Dio.h
 *
 * Created: 12/11/2022 3:26:39 PM
 *  Author: Dell_Lap
 */ 

//HEADER FILE GUARD
#ifndef DIO_H_
#define DIO_H_

//INCLUDE USED DRIVER'S .H
#include "../../Utilities/Registers.h"

//DEFINE PORTS (A,B,C,D)
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

//DEFINE DIRECTIONS
#define IN 0
#define OUT 1

//DEFINE VALUES
#define HIGH 1
#define LOW 0

//FUNCTIONS
void DIO_init(uint8_t pinNumber,uint8_t portNumber,uint8_t direction); //INITIALIZE DIO DIRECTION
void DIO_write(uint8_t pinNumber,uint8_t portNumber,uint8_t value); //WRITE DATA TO DIO
void DIO_toggle(uint8_t pinNumber,uint8_t portNumber); // TOGGLE DIO
void DIO_read(uint8_t pinNumber,uint8_t portNumber,uint8_t *value); //READ DIO

#endif /* DIO_H_ */