//<File !Start!>
// FILE: [Struct.h]
// Created by Tommaso Bugliesi TomTechHub 04/01/2024
//
//<File !End!>

#ifndef _Struct_H
#define _Struct_H

// ------------------------------------------------
// Headers to include
// ------------------------------------------------
//<Includes !Start!>
#include <Arduino.h>
//<Includes !End!>

//<Structs !Start!>
struct GPIOState {
  int GPIO14_state;
  int GPIO15_state;
  int GPIO16_state;
  int GPIO17_state;
  int GPIO19_state;
  int GPIO21_state;
  int GPIO22_state;
  int GPIO25_state;
  int GPIO26_state;
  int GPIO27_state;
  int GPIO32_state;
  int GPIO33_state;
  int GPIO34_state;
  int GPIO35_state;
  int GPIO36_state;
  int GPIO39_state;
};

struct GPIOStr {
  char GPIO14_str[10];
  char GPIO15_str[10];
  char GPIO16_str[10];
  char GPIO17_str[10];
  char GPIO19_str[10];
  char GPIO21_str[10];
  char GPIO22_str[10];
  char GPIO25_str[10];
  char GPIO26_str[10];
  char GPIO27_str[10];
  char GPIO32_str[10];
  char GPIO33_str[10];
  char GPIO34_str[10];
  char GPIO35_str[10];
  char GPIO36_str[10];
  char GPIO39_str[10];
};

struct GPIOStruct {
  GPIOStr vGPIO_str;
  GPIOState vGPIO_state;
};

struct RemoteStruct {
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
  int J1x_In;
  int J1y_In;
  int J2x_In;
  int J2y_In;
  int P1_In;
  int P2_In;
};
//<Structs !End!>

//<Variables !Start!>
extern RemoteStruct vRemote_struct;
extern GPIOStruct vGPIO_struct;
//<Variables !End!>

#endif