/*
  Global.h - Library for Description
  Created by Tommaso Bugliesi, 03/03/2024.
  Brief description: Global variables header file.
*/

#ifndef Global_h
#define Global_h

#include <Arduino.h>

struct GPIOStruct {
  bool T1_In;
  bool T2_In;
  bool T3_In;
  bool T4_In;
  bool B1_In;
  bool B2_In;
  bool Bx_In;
  bool By_In;
  bool Bz_In;
  bool Bw_In;
  uint16_t J1x_In;
  uint16_t J1y_In;
  uint16_t J2x_In;
  uint16_t J2y_In;
  uint16_t P1_In;
  uint16_t P2_In;
};

struct MotorStruct {
  float KpRoll;
  float KiRoll;
  float KdRoll;
  float KpPitch;
  float KiPitch;
  float KdPitch;
};

struct GlobalStruct {
    GPIOStruct gpioData;
    MotorStruct  motorData;
};

// Declare the global pointer to GlobalData
extern GlobalStruct* globalStructPtr;

/* Function declaration to initialize globalDataPtr */
void initGlobal();


#endif // Global_h
