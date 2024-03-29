/*
  GPIOIntegrate.h - Library for Description
  Created by Tommaso Bugliesi, 10/03/2024.
  Brief description: Library to initialize and interprete ESP32 GPIO.
*/

#ifndef GPIOIntegrate_h
#define GPIOIntegrate_h

#include <Arduino.h>
#include "Global.h"

#define INTGRT_GPIO14 14    // Y digital input 
#define INTGRT_GPIO15 15    // B1 digital input
#define INTGRT_GPIO16 16    // T1 digital input
#define INTGRT_GPIO17 17    // T2 digital input
#define INTGRT_GPIO19 19    // B2 digital input
#define INTGRT_GPIO21 21    // T3 digital input
#define INTGRT_GPIO22 22    // T4 digital input
#define INTGRT_GPIO25 25    // W digital input
#define INTGRT_GPIO26 26    // Z digital input
#define INTGRT_GPIO27 27    // X digital input
#define INTGRT_GPIO32 32    // P2 analog input
#define INTGRT_GPIO33 33    // J2Y analog input
#define INTGRT_GPIO34 34    // J1Y analog input
#define INTGRT_GPIO35 35    // J2X analog input
#define INTGRT_GPIO36 36    // P1 analog input
#define INTGRT_GPIO39 39    // J1X analog input

class GPIOIntegrate {
  public:
    GPIOStruct gpioStruct;
    
    GPIOIntegrate(); // Constructor
    ~GPIOIntegrate(); // Destructor

    // Add public methods here
    void updateGPIO();
    void printGPIO();

  private:
    // Add private variables and methods here
};

#endif // GPIOIntegrate_h
