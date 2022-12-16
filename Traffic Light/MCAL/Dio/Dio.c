/*
 * Dio.c
 *
 * Created: 12/11/2022 3:37:48 PM
 *  Author: Dell_Lap
 */ 

//INCLUDE USED DRIVER'S .H
#include "Dio.h"

//FUNCTIONS
void DIO_init(uint8_t pinNumber,uint8_t portNumber,uint8_t direction) //INITIALIZE DIO DIRECTION
{
	switch(portNumber)
	{
		case 'A':
		if(direction==IN)
		{
			DDRA&=~(1<<pinNumber); //WRITE 0
		}
		else if(direction==OUT)
		{
			DDRA|=(1<<pinNumber); //WRITE 1
		}
		else
		{
			//ERROR HANDLING
		}
		break;
		case 'B':
		if(direction==IN)
		{
			DDRB&=~(1<<pinNumber); //WRITE 0
		}
		else if(direction==OUT)
		{
			DDRB|=(1<<pinNumber); //WRITE 1
		}
		else
		{
			//ERROR HANDLING
		}
		break;
		case 'C':
		if(direction==IN)
		{
			DDRC&=~(1<<pinNumber); //WRITE 0
		}
		else if(direction==OUT)
		{
			DDRC|=(1<<pinNumber); //WRITE 1
		}
		else
		{
			//ERROR HANDLING
		}
		break;
		case 'D':
		if(direction==IN)
		{
			DDRD&=~(1<<pinNumber); //WRITE 0
		}
		else if(direction==OUT)
		{
			DDRD|=(1<<pinNumber); //WRITE 1
		}
		else
		{
			//ERROR HANDLING
		}
		break;
	}
}
void DIO_write(uint8_t pinNumber,uint8_t portNumber,uint8_t value) //WRITE DATA TO DIO
{
	switch(portNumber)
	{
		case 'A':
		if(value==LOW)
		{
			DDRA&=~(1<<pinNumber); //WRITE 0
		}
		else if(value==HIGH)
		{
			DDRA|=(1<<pinNumber); //WRITE 1
		}
		else
		{
			//ERROR HANDLING
		}
		break;
		case 'B':
		if(value==LOW)
		{
			DDRB&=~(1<<pinNumber); //WRITE 0
		}
		else if(value==HIGH)
		{
			DDRB|=(1<<pinNumber); //WRITE 1
		}
		else
		{
			//ERROR HANDLING
		}
		break;
		case 'C':
		if(value==LOW)
		{
			DDRC&=~(1<<pinNumber); //WRITE 0
		}
		else if(value==HIGH)
		{
			DDRC|=(1<<pinNumber); //WRITE 1
		}
		else
		{
			//ERROR HANDLING
		}
		break;
		case 'D':
		if(value==LOW)
		{
			DDRD&=~(1<<pinNumber); //WRITE 0
		}
		else if(value==HIGH)
		{
			DDRD|=(1<<pinNumber); //WRITE 1
		}
		else
		{
			//ERROR HANDLING
		}
		break;
	}
}
void DIO_toggle(uint8_t pinNumber,uint8_t portNumber) // TOGGLE DIO
{
	switch(portNumber)
	{
		case 'A':
		PORTA ^= (1<<pinNumber);
		break;
		case 'B':
		PORTB ^= (1<<pinNumber);
		break;
		case 'C':
		PORTC ^= (1<<pinNumber);
		break;
		case 'D':
		PORTD ^= (1<<pinNumber);
		break;
	}
}
void DIO_read(uint8_t pinNumber,uint8_t portNumber,uint8_t *value) //READ DIO
{
	switch(portNumber)
	{
		case 'A':
		*value=((PINA&(1<<pinNumber))>>pinNumber); //GET STATE >> READ BIT
		break;
		case 'B':
		*value=((PINB&(1<<pinNumber))>>pinNumber); //GET STATE >> READ BIT
		break;
		case 'C':
		*value=((PINC&(1<<pinNumber))>>pinNumber); //GET STATE >> READ BIT
		break;
		case 'D':
		*value=((PIND&(1<<pinNumber))>>pinNumber); //GET STATE >> READ BIT
		break;
	}
}