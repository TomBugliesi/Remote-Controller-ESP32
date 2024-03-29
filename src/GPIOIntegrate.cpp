/*
  GPIOIntegrate.cpp - Library for Description
  Created by Tommaso Bugliesi, 10/03/2024.
  Brief description: Library to initialize and interprete ESP32 GPIO.
*/

#include "GPIOIntegrate.h"
#include "Global.h"

GPIOIntegrate::GPIOIntegrate() {
  // Init GPIO structure
  memset(&gpioStruct, 0, sizeof(gpioStruct));
  
  pinMode(INTGRT_GPIO14, INPUT_PULLDOWN);
  pinMode(INTGRT_GPIO15, INPUT_PULLDOWN);
  pinMode(INTGRT_GPIO16, INPUT_PULLDOWN);
  pinMode(INTGRT_GPIO17, INPUT_PULLDOWN);
  pinMode(INTGRT_GPIO19, INPUT_PULLDOWN);
  pinMode(INTGRT_GPIO21, INPUT_PULLDOWN);
  pinMode(INTGRT_GPIO22, INPUT_PULLDOWN);
  pinMode(INTGRT_GPIO25, INPUT_PULLDOWN);
  pinMode(INTGRT_GPIO26, INPUT_PULLDOWN);
  pinMode(INTGRT_GPIO27, INPUT_PULLDOWN);

  updateGPIO();
}

GPIOIntegrate::~GPIOIntegrate() {
  // Destructor implementation
}

// Add public method implementations here
void GPIOIntegrate::updateGPIO(){
  gpioStruct.By_In = (bool)digitalRead(INTGRT_GPIO14);
  gpioStruct.B1_In = (bool)digitalRead(INTGRT_GPIO15);
  gpioStruct.T3_In = (bool)digitalRead(INTGRT_GPIO16);
  gpioStruct.T4_In = (bool)digitalRead(INTGRT_GPIO17);
  gpioStruct.B2_In = (bool)digitalRead(INTGRT_GPIO19);
  gpioStruct.T1_In = (bool)digitalRead(INTGRT_GPIO21);
  gpioStruct.T2_In = (bool)digitalRead(INTGRT_GPIO22);
  gpioStruct.Bw_In = (bool)digitalRead(INTGRT_GPIO25);
  gpioStruct.Bz_In = (bool)digitalRead(INTGRT_GPIO26);
  gpioStruct.Bx_In = (bool)digitalRead(INTGRT_GPIO27);
  gpioStruct.P2_In  = (uint16_t) analogRead(INTGRT_GPIO32);
  gpioStruct.J2y_In = (uint16_t) analogRead(INTGRT_GPIO33);
  gpioStruct.J1y_In = (uint16_t) analogRead(INTGRT_GPIO34);
  gpioStruct.J2x_In = (uint16_t) analogRead(INTGRT_GPIO35);
  gpioStruct.P1_In  = (uint16_t) analogRead(INTGRT_GPIO36);
  gpioStruct.J1x_In = (uint16_t) analogRead(INTGRT_GPIO39);
}

void GPIOIntegrate::printGPIO(){
  printf("Y: %d, ",gpioStruct.By_In);
  printf("W: %d, ",gpioStruct.Bw_In);
  printf("Z: %d, ",gpioStruct.Bz_In);
  printf("X: %d, ",gpioStruct.Bx_In);
  printf("B1: %d, ",gpioStruct.B1_In);
  printf("B2: %d, ",gpioStruct.B2_In);
  printf("T1: %d, ",gpioStruct.T1_In);
  printf("T2: %d, ",gpioStruct.T2_In);
  printf("T3: %d, ",gpioStruct.T3_In);
  printf("T4: %d, ",gpioStruct.T4_In);
  printf("P1: %d, ",gpioStruct.P1_In);
  printf("P2: %d, ",gpioStruct.P2_In);
  printf("J2X: %d, ",gpioStruct.J2x_In);
  printf("J2Y: %d, ",gpioStruct.J2y_In);
  printf("J1X: %d, ",gpioStruct.J1x_In);
  printf("J1Y: %d\n",gpioStruct.J1y_In);
}


// Add private method implementations here
