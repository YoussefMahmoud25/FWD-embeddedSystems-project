/*
 * Registers.h
 *
 * Created: 12/11/2022 3:21:19 PM
 *  Author: Dell_Lap
 */ 

//HEADER FILE GUARD
#ifndef REGISTERS_H_
#define REGISTERS_H_

//INCLUDE USED DRIVER'S .H
#include "../Utilities/Types.h"

//DEFINE PINS
#define pin0 0
#define pin1 1
#define pin2 2
#define pin3 3
#define pin4 4
#define pin5 5
#define pin6 6
#define pin7 7

//DEFINE PORTA REGISTERS
#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)

//DEFINE PORTB REGISTERS
#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)

//DEFINE PORTC REGISTERS
#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)

//DEFINE PORTD REGISTERS
#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)

//DEFINE INTERRUPT REGISTERS
#define GICR *((volatile uint8_t*)0x5B)
#define MCUCR *((volatile uint8_t*)0x55)

//DEFINE TIMER0 REGISTERS
#define TCCR0 *((volatile uint8_t*)0x53)
#define TCNT0 *((volatile uint8_t*)0x52)
#define TIFR *((volatile uint8_t*)0x58)

//DEFINE TIMER1 REGISTERS
#define TCCR1A *((volatile uint8_t*)0x4F)
#define TCCR1B *((volatile uint8_t*)0x4E)
#define TCNT1H *((volatile uint8_t*)0x4D)
#define TCNT1L *((volatile uint8_t*)0x4C)

#endif /* REGISTERS_H_ */