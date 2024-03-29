//<File !Start!>
// FILE: [GPIO_integrate.h]
// Created by Tommaso Bugliesi TomTechHub 04/01/2024
//
//<File !End!>

#ifndef _GPIO_INTEGRATE_H
#define _GPIO_INTEGRATE_H

// ------------------------------------------------
// Headers to include
// ------------------------------------------------
//<Includes !Start!>
#include <Arduino.h>
#include "Struct.h"
//<Includes !End!>

#define GPIO14 14 // digital input 
#define GPIO15 15 // digital input
#define GPIO16 16 // digital input
#define GPIO17 17 // digital input
#define GPIO19 19 // digital input
#define GPIO21 21 // digital input
#define GPIO22 22 // digital input
#define GPIO25 25 // digital input
#define GPIO26 26 // digital input
#define GPIO27 27 // digital input
#define GPIO32 32 // analog input
#define GPIO33 33 // analog input
#define GPIO34 34 // analog input
#define GPIO35 35 // analog input
#define GPIO36 36 // analog input
#define GPIO39 39 // analog input

//<Functions !Start!>
void PrintState(String name, int state){
  Serial.print(name);
  Serial.print(": ");
  Serial.println(state);
}

void DebugPrint(){
  PrintState(vGPIO_struct.vGPIO_str.GPIO14_str, vGPIO_struct.vGPIO_state.GPIO14_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO15_str, vGPIO_struct.vGPIO_state.GPIO15_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO16_str, vGPIO_struct.vGPIO_state.GPIO16_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO17_str, vGPIO_struct.vGPIO_state.GPIO17_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO19_str, vGPIO_struct.vGPIO_state.GPIO19_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO21_str, vGPIO_struct.vGPIO_state.GPIO21_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO22_str, vGPIO_struct.vGPIO_state.GPIO22_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO25_str, vGPIO_struct.vGPIO_state.GPIO25_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO26_str, vGPIO_struct.vGPIO_state.GPIO26_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO27_str, vGPIO_struct.vGPIO_state.GPIO27_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO32_str, vGPIO_struct.vGPIO_state.GPIO32_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO33_str, vGPIO_struct.vGPIO_state.GPIO33_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO34_str, vGPIO_struct.vGPIO_state.GPIO34_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO35_str, vGPIO_struct.vGPIO_state.GPIO35_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO36_str, vGPIO_struct.vGPIO_state.GPIO36_state);
  PrintState(vGPIO_struct.vGPIO_str.GPIO39_str, vGPIO_struct.vGPIO_state.GPIO39_state);
}

void InitGPIO(){
  pinMode(GPIO14, INPUT_PULLDOWN);
  pinMode(GPIO15, INPUT_PULLDOWN);
  pinMode(GPIO16, INPUT_PULLDOWN);
  pinMode(GPIO17, INPUT_PULLDOWN);
  pinMode(GPIO19, INPUT_PULLDOWN);
  pinMode(GPIO21, INPUT_PULLDOWN);
  pinMode(GPIO22, INPUT_PULLDOWN);
  pinMode(GPIO25, INPUT_PULLDOWN);
  pinMode(GPIO26, INPUT_PULLDOWN);
  pinMode(GPIO27, INPUT_PULLDOWN);

  vGPIO_struct.vGPIO_state.GPIO14_state = digitalRead(GPIO14);
  vGPIO_struct.vGPIO_state.GPIO15_state = digitalRead(GPIO15);
  vGPIO_struct.vGPIO_state.GPIO16_state = digitalRead(GPIO16);
  vGPIO_struct.vGPIO_state.GPIO17_state = digitalRead(GPIO17);
  vGPIO_struct.vGPIO_state.GPIO19_state = digitalRead(GPIO19);
  vGPIO_struct.vGPIO_state.GPIO21_state = digitalRead(GPIO21);
  vGPIO_struct.vGPIO_state.GPIO22_state = digitalRead(GPIO22);
  vGPIO_struct.vGPIO_state.GPIO25_state = digitalRead(GPIO25);
  vGPIO_struct.vGPIO_state.GPIO26_state = digitalRead(GPIO26);
  vGPIO_struct.vGPIO_state.GPIO27_state = digitalRead(GPIO27);
  vGPIO_struct.vGPIO_state.GPIO32_state = analogRead(GPIO32);
  vGPIO_struct.vGPIO_state.GPIO33_state = analogRead(GPIO33);
  vGPIO_struct.vGPIO_state.GPIO34_state = analogRead(GPIO34);
  vGPIO_struct.vGPIO_state.GPIO35_state = analogRead(GPIO35);
  vGPIO_struct.vGPIO_state.GPIO36_state = analogRead(GPIO36);
  vGPIO_struct.vGPIO_state.GPIO39_state = analogRead(GPIO39);
}

void UpdateGPIO(){
  // Read input from remote controller 
  vGPIO_struct.vGPIO_state.GPIO14_state = digitalRead(GPIO14);
  vGPIO_struct.vGPIO_state.GPIO15_state = digitalRead(GPIO15);
  vGPIO_struct.vGPIO_state.GPIO16_state = digitalRead(GPIO16);
  vGPIO_struct.vGPIO_state.GPIO17_state = digitalRead(GPIO17);
  vGPIO_struct.vGPIO_state.GPIO19_state = digitalRead(GPIO19);
  vGPIO_struct.vGPIO_state.GPIO21_state = digitalRead(GPIO21);
  vGPIO_struct.vGPIO_state.GPIO22_state = digitalRead(GPIO22);
  vGPIO_struct.vGPIO_state.GPIO25_state = digitalRead(GPIO25);
  vGPIO_struct.vGPIO_state.GPIO26_state = digitalRead(GPIO26);
  vGPIO_struct.vGPIO_state.GPIO27_state = digitalRead(GPIO27);
  vGPIO_struct.vGPIO_state.GPIO32_state = analogRead(GPIO32);
  vGPIO_struct.vGPIO_state.GPIO33_state = analogRead(GPIO33);
  vGPIO_struct.vGPIO_state.GPIO34_state = analogRead(GPIO34);
  vGPIO_struct.vGPIO_state.GPIO35_state = analogRead(GPIO35);
  vGPIO_struct.vGPIO_state.GPIO36_state = analogRead(GPIO36);
  vGPIO_struct.vGPIO_state.GPIO39_state = analogRead(GPIO39);

  vRemote_struct.B1_In = (bool)vGPIO_struct.vGPIO_state.GPIO15_state;
  vRemote_struct.B2_In = (bool)vGPIO_struct.vGPIO_state.GPIO19_state;
  vRemote_struct.Bx_In = (bool)vGPIO_struct.vGPIO_state.GPIO27_state;
  vRemote_struct.By_In = (bool)vGPIO_struct.vGPIO_state.GPIO14_state;
  vRemote_struct.Bz_In = (bool)vGPIO_struct.vGPIO_state.GPIO26_state;
  vRemote_struct.Bw_In = (bool)vGPIO_struct.vGPIO_state.GPIO25_state;
  vRemote_struct.T1_In = (bool)vGPIO_struct.vGPIO_state.GPIO21_state;
  vRemote_struct.T2_In = (bool)vGPIO_struct.vGPIO_state.GPIO22_state;
  vRemote_struct.T3_In = (bool)vGPIO_struct.vGPIO_state.GPIO16_state;
  vRemote_struct.T4_In = (bool)vGPIO_struct.vGPIO_state.GPIO17_state;
  vRemote_struct.J1x_In = vGPIO_struct.vGPIO_state.GPIO34_state;
  vRemote_struct.J1y_In = vGPIO_struct.vGPIO_state.GPIO39_state;
  vRemote_struct.J2x_In = vGPIO_struct.vGPIO_state.GPIO35_state;
  vRemote_struct.J2y_In = vGPIO_struct.vGPIO_state.GPIO33_state;
  vRemote_struct.P1_In = vGPIO_struct.vGPIO_state.GPIO36_state;
  vRemote_struct.P2_In = vGPIO_struct.vGPIO_state.GPIO32_state;

  //DebugPrint();
}
//<Functions !End!>
#endif // _GPIO_INTEGRATE_H