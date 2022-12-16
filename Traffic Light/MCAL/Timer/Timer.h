/*
 * Timer.h
 *
 * Created: 12/11/2022 3:27:12 PM
 *  Author: Dell_Lap
 */ 

//HEADER FILE GUARD
#ifndef TIMER_H_
#define TIMER_H_

//INCLUDE USED DRIVER'S .H
#include "../../Utilities/Types.h"
#include "../../Utilities/Registers.h"

#define flowsNumber 61 //DEFINE FLOWSNUMBER

//FUNCTIONS
void timer0_1Second(); //TIMER0 1SECOND CALCULATION 
void delay_Seconds(uint8_t second);// SECONDS
void timer1_1Second(); // TIMER1 1SECOND CALCULATION
void timer1_5Second(); // TIMER1 5SECOND CALCULATION





#endif /* TIMER_H_ */