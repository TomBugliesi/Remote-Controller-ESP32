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
#include "projects_GSLC.h"
#include "GUIslice.h"
//<Includes !End!>
//<Variables !Start!>
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

String GPIO14_str = "GPIO14";
String GPIO15_str = "GPIO15";
String GPIO16_str = "GPIO16";
String GPIO17_str = "GPIO17";
String GPIO19_str = "GPIO19";
String GPIO21_str = "GPIO21";
String GPIO22_str = "GPIO22";
String GPIO25_str = "GPIO25";
String GPIO26_str = "GPIO26";
String GPIO27_str = "GPIO27";
String GPIO32_str = "GPIO32";
String GPIO33_str = "GPIO33";
String GPIO34_str = "GPIO34";
String GPIO35_str = "GPIO35";
String GPIO36_str = "GPIO36";
String GPIO39_str = "GPIO39";
//<Variables !End!>
//<Functions !Start!>

void PrintState(String name, int state){
  Serial.print(name);
  Serial.print(": ");
  Serial.println(state);
}

void DebugPrint(){
  PrintState(GPIO14_str, GPIO14_state);
  PrintState(GPIO15_str, GPIO15_state);
  PrintState(GPIO16_str, GPIO16_state);
  PrintState(GPIO17_str, GPIO17_state);
  PrintState(GPIO19_str, GPIO19_state);
  PrintState(GPIO21_str, GPIO21_state);
  PrintState(GPIO22_str, GPIO22_state);
  PrintState(GPIO25_str, GPIO25_state);
  PrintState(GPIO26_str, GPIO26_state);
  PrintState(GPIO27_str, GPIO27_state);
  PrintState(GPIO32_str, GPIO32_state);
  PrintState(GPIO33_str, GPIO33_state);
  PrintState(GPIO34_str, GPIO34_state);
  PrintState(GPIO35_str, GPIO35_state);
  PrintState(GPIO36_str, GPIO36_state);
  PrintState(GPIO39_str, GPIO39_state);
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

  GPIO14_state = digitalRead(GPIO14);
  GPIO15_state = digitalRead(GPIO15);
  GPIO16_state = digitalRead(GPIO16);
  GPIO17_state = digitalRead(GPIO17);
  GPIO19_state = digitalRead(GPIO19);
  GPIO21_state = digitalRead(GPIO21);
  GPIO22_state = digitalRead(GPIO22);
  GPIO25_state = digitalRead(GPIO25);
  GPIO26_state = digitalRead(GPIO26);
  GPIO27_state = digitalRead(GPIO27);

  GPIO32_state = analogRead(GPIO32);
  GPIO33_state = analogRead(GPIO33);
  GPIO34_state = analogRead(GPIO34);
  GPIO35_state = analogRead(GPIO35);
  GPIO36_state = analogRead(GPIO36);
  GPIO39_state = analogRead(GPIO39);
}

void StartUp(){    
  gslc_SetPageCur(&m_gui,E_PG_0);
  gslc_Update(&m_gui);
  delay(4000);
  gslc_SetPageCur(&m_gui,E_PG_1);
  gslc_Update(&m_gui);
}

void UpdateTFT(){
  // Read input from remote controller 
  GPIO14_state = digitalRead(GPIO14);
  GPIO15_state = digitalRead(GPIO15);
  GPIO16_state = digitalRead(GPIO16);
  GPIO17_state = digitalRead(GPIO17);
  GPIO19_state = digitalRead(GPIO19);
  GPIO21_state = digitalRead(GPIO21);
  GPIO22_state = digitalRead(GPIO22);
  GPIO25_state = digitalRead(GPIO25);
  GPIO26_state = digitalRead(GPIO26);
  GPIO27_state = digitalRead(GPIO27);

  GPIO32_state = analogRead(GPIO32);
  GPIO33_state = analogRead(GPIO33);
  GPIO34_state = analogRead(GPIO34);
  GPIO35_state = analogRead(GPIO35);
  GPIO36_state = analogRead(GPIO36);
  GPIO39_state = analogRead(GPIO39);

  // TODO: Define structure to save data from GPIO readings
  // TODO: Move the following code to another header file
  // Update GUI elements from signals
  char strBuffer[5];
  sprintf(strBuffer, "%d", GPIO32_state);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_3_5,strBuffer);
  gslc_Update(&m_gui);	
  sprintf(strBuffer, "%d", GPIO33_state);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_3,strBuffer);
  gslc_Update(&m_gui);
  sprintf(strBuffer, "%d", GPIO34_state);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_2,strBuffer);
  gslc_Update(&m_gui);
  sprintf(strBuffer, "%d", GPIO35_state);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_4,strBuffer);
  gslc_Update(&m_gui);
  
  DebugPrint();
}
//<Functions !End!>
#endif // _GPIO_INTEGRATE_H