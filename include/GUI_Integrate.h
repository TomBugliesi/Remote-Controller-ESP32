//<File !Start!>
// FILE: [GUI_integrate.h]
// Created by Tommaso Bugliesi TomTechHub 04/01/2024
//
//<File !End!>

#ifndef _GUI_INTEGRATE_H
#define _GUI_INTEGRATE_H

// ------------------------------------------------
// Headers to include
// ------------------------------------------------
//<Includes !Start!>
#include <Arduino.h>
#include "projects_GSLC.h"
#include "GUIslice.h"
#include "Struct.h" 
#include "GPIO_integrate.h"
//<Includes !End!>

//<Functions !Start!>
void StartUp(){    
  gslc_SetPageCur(&m_gui,E_PG_0);
  gslc_Update(&m_gui);
  delay(2500);
  gslc_SetPageCur(&m_gui,E_PG_1);
  gslc_Update(&m_gui);
}

void UpdateGUI(){
  char strBuffer[5];
  /*
  // PWM signal from drone
  sprintf(strBuffer, "%d", vGPIO_struct.vGPIO_state.GPIO14_state);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_3_5,strBuffer);
  gslc_Update(&m_gui);	
  sprintf(strBuffer, "%d", vGPIO_struct.vGPIO_state.GPIO14_state);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_3,strBuffer);
  gslc_Update(&m_gui);
  sprintf(strBuffer, "%d", vGPIO_struct.vGPIO_state.GPIO14_state);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_2,strBuffer);
  gslc_Update(&m_gui);
  sprintf(strBuffer, "%d", vGPIO_struct.vGPIO_state.GPIO14_state);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_4,strBuffer);
  gslc_Update(&m_gui);
  */
  //Remote controller inputs
  sprintf(strBuffer, "%d", vRemote_struct.J1x_In);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_2_8_11,strBuffer); //J1x
  sprintf(strBuffer, "%d", vRemote_struct.J1y_In);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_2_8_9_12,strBuffer); //J1y
  sprintf(strBuffer, "%d", vRemote_struct.J2x_In);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_2_8_11_15,strBuffer); //J2x 
  sprintf(strBuffer, "%d", vRemote_struct.J2y_In);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_2_8_9_12_16,strBuffer); //J2y
  gslc_Update(&m_gui);

  sprintf(strBuffer, "%d", vRemote_struct.P1_In);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_2_8_11_17_21,strBuffer); //P1
  sprintf(strBuffer, "%d", vRemote_struct.P2_In);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_2_8_9_12_18_22,strBuffer); //P2
  gslc_Update(&m_gui);

  sprintf(strBuffer, "%d", vRemote_struct.T1_In);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_2_8_11_17,strBuffer); //T1
  sprintf(strBuffer, "%d", vRemote_struct.T2_In);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_2_8_9_12_18,strBuffer); //T2
  sprintf(strBuffer, "%d", vRemote_struct.T3_In);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_2_8_11_15_19,strBuffer); //T3
  sprintf(strBuffer, "%d", vRemote_struct.T4_In);
  gslc_ElemSetTxtStr(&m_gui,m_pElemVal1_2_8_9_12_16_20,strBuffer); //T4
  gslc_Update(&m_gui);
}
//<Functions !End!>
#endif
