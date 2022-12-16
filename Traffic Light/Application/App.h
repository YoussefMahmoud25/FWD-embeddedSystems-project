/*
 * App.h
 *
 * Created: 12/11/2022 3:28:59 PM
 *  Author: Dell_Lap
 */ 

//HEADER FILE GUARD
#ifndef APP_H_
#define APP_H_

#include "../Utilities/Interupts.h"
#include "../MCAL/Timer/Timer.h"
#include "../ECUAL/Led/Led.h"

 //PINS NUMBERS AND TRAFFIC COLOR
#define GREEN 1
#define YELLOW 2
#define RED 3

void app_init(); // INITIALIZE APPLICATION
void app_start(); //START APPLICATION
void trafficLight(uint8_t traffic,uint8_t color); //SET TRAFFIC LIGHT
void yellowBlink(uint8_t mode); //BLINK YELLOW LIGHT
void normalMode(); //CAR TRAFFIC
void pedestrianMode(); //PEDESTRIAN TRAFFIC

#endif /* APP_H_ */