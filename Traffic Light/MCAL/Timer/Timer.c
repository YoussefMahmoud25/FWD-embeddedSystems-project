/*
 * Timer.c
 *
 * Created: 12/11/2022 3:37:59 PM
 *  Author: Dell_Lap
 */ 

//INCLUDE USED DRIVER'S .H
#include "Timer.h"

//FUNCTIONS
void timer0_1Second()   //TIMER0 1SECOND CALCULATION 
{
	uint8_t overFlowCounter=0;  //INITIALIZE COUNTER
	TCNT0 = 0x00;
	TCCR0 |=(1<<0)|(1<<1); // SET PRESCALAR = 64
	while(overFlowCounter < flowsNumber)
	{
		while((TIFR&(1<<0))==0); //WAIT FOR FLAG
		TIFR |=(1<<0); //CLEAR FLAG
		overFlowCounter++; //INCREASE COUNTER BY 1
	}
	TCCR0=0x00; //STOP TIMER
}
	
void delay_Seconds(uint8_t second) // SECONDS
{
	for(int m=0;m < second;m++)
	{
		timer0_1Second();
	}
}

void timer1_1Second()  // TIMER1 1SECOND CALCULATION
{
	TCCR1B=0x00;
	TCNT1H=0xC2;
	TCNT1L=0xF7;
	TIFR|=(1<<2); //CLEAR FLAG
	TCCR1B|=((1<<0)|(1<<1)); //SET PRESCALAR = 64
	while((TIFR&(1<<2))==0); //WAIT FOR FLAG
	TCCR1B=0x00; //STOP TIMER
}

void timer1_5Second()  // TIMER1 5SECOND CALCULATION
{
	TCNT1H=0xB3;
	TCNT1L=0xB5;
	TIFR|=(1<<2); //CLEAR FLAG
	TCCR1B|=(1<<2); //SET PRESCALAR = 256
	while((TIFR&(1<<2))==0); //WAIT FOR FLAG
	TCCR1B=0x00; //STOP TIMER
}