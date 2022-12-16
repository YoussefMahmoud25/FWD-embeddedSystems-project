/*
 * Interupts.h
 *
 * Created: 12/11/2022 3:26:27 PM
 *  Author: Dell_Lap
 */ 

//HEADER FILE GUARD
#ifndef INTERUPTS_H_
#define INTERUPTS_H_

//INCLUDE USED DRIVER'S .H
#include "../Utilities/Registers.h"

#define EXT_INT_0 __vector_0 //EXTERNAL INTERUPT 0
#define EXT_INT_1 __vector_1 //EXTERNAL INTERUPT 1
#define EXT_INT_2 __vector_2 //EXTERNAL INTERUPT 2

#define sei() __asm__ __volatile__("sei":::"memory") //ENABLE GLOBAL INTERUPT
#define cli() __asm__ __volatile__("cli":::"memory") //DISABLE GLOBAL INTERUPT
#define ISR(INT_VECT)void INT_VECT(void)__attribute__((signal,used)); //DEFINE ISR
void INT_VECT(void);


#endif /* INTERUPTS_H_ */