//<File !Start!>
// FILE: [projects_GSLC.h]
// Created by GUIslice Builder version: [0.17.b24]
//
// GUIslice Builder Generated GUI Framework File
//
// For the latest guides, updates and support view:
// https://github.com/ImpulseAdventure/GUIslice
//
//<File !End!>

#ifndef _GUISLICE_GEN_H
#define _GUISLICE_GEN_H

// ------------------------------------------------
// Headers to include
// ------------------------------------------------
#include "GUIslice.h"
#include "GUIslice_drv.h"

// Include any extended elements
//<Includes !Start!>
// Include extended elements
#include "elem/XKeyPad_Num.h"

// Ensure optional features are enabled in the configuration
//<Includes !End!>

// ------------------------------------------------
// Headers and Defines for fonts
// Note that font files are located within the Adafruit-GFX library folder:
// ------------------------------------------------
//<Fonts !Start!>
#if !defined(DRV_DISP_TFT_ESPI)
  #error E_PROJECT_OPTIONS tab->Graphics Library should be Adafruit_GFX
#endif
#include <TFT_eSPI.h>
//<Fonts !End!>

// ------------------------------------------------
// Defines for resources
// ------------------------------------------------
//<Resources !Start!>
extern "C" const unsigned short Drone[] PROGMEM;
extern "C" const unsigned short Logo[] PROGMEM;
//<Resources !End!>

// ------------------------------------------------
// Enumerations for pages, elements, fonts, images
// ------------------------------------------------
//<Enum !Start!>
enum {E_PG_0,E_PG_1,E_POP_KEYPAD_NUM};
enum {E_DRAW_LINE1,E_DRAW_LINE2,E_DRAW_LINE3,E_DRAW_LINE4,E_DRAW_LINE6
      ,E_ELEM_IMAGE19,E_ELEM_IMAGE20,E_ELEM_NUMINPUT_11
      ,E_ELEM_NUMINPUT_12,E_ELEM_NUMINPUT_21,E_ELEM_NUMINPUT_22
      ,E_ELEM_NUMINPUT_J1X,E_ELEM_NUMINPUT_J1Y,E_ELEM_NUMINPUT_J2X
      ,E_ELEM_NUMINPUT_J2Y,E_ELEM_NUMINPUT_P1,E_ELEM_NUMINPUT_P2
      ,E_ELEM_NUMINPUT_PITCH,E_ELEM_NUMINPUT_ROLL,E_ELEM_NUMINPUT_T1
      ,E_ELEM_NUMINPUT_T2,E_ELEM_NUMINPUT_T3,E_ELEM_NUMINPUT_T4
      ,E_ELEM_NUMINPUT_YAW,E_ELEM_TEXT29,E_ELEM_TEXT30,E_ELEM_TEXT31
      ,E_ELEM_TEXT_11,E_ELEM_TEXT_12,E_ELEM_TEXT_21,E_ELEM_TEXT_22
      ,E_ELEM_TEXT_J1X,E_ELEM_TEXT_J1Y,E_ELEM_TEXT_J2X,E_ELEM_TEXT_J2Y
      ,E_ELEM_TEXT_P1,E_ELEM_TEXT_P2,E_ELEM_TEXT_PITCH,E_ELEM_TEXT_ROLL
      ,E_ELEM_TEXT_T1,E_ELEM_TEXT_T2,E_ELEM_TEXT_T3,E_ELEM_TEXT_T4
      ,E_ELEM_TEXT_TTH,E_ELEM_TEXT_VERSION,E_ELEM_TEXT_YAW
      ,E_ELEM_KEYPAD_NUM};
// Must use separate enum for fonts with MAX_FONT at end to use gslc_FontSet.
enum {E_BUILTIN5X8,MAX_FONT};
//<Enum !End!>

// ------------------------------------------------
// Instantiate the GUI
// ------------------------------------------------

// ------------------------------------------------
// Define the maximum number of elements and pages
// ------------------------------------------------
//<ElementDefines !Start!>
#define MAX_PAGE                3

#define MAX_ELEM_PG_0 4 // # Elems total on page
#define MAX_ELEM_PG_0_RAM MAX_ELEM_PG_0 // # Elems in RAM

#define MAX_ELEM_PG_1 42 // # Elems total on page
#define MAX_ELEM_PG_1_RAM MAX_ELEM_PG_1 // # Elems in RAM
//<ElementDefines !End!>

// ------------------------------------------------
// Create element storage
// ------------------------------------------------
gslc_tsGui                      m_gui;
gslc_tsDriver                   m_drv;
gslc_tsFont                     m_asFont[MAX_FONT];
gslc_tsPage                     m_asPage[MAX_PAGE];

//<GUI_Extra_Elements !Start!>
gslc_tsElem                     m_asPage1Elem[MAX_ELEM_PG_0_RAM];
gslc_tsElemRef                  m_asPage1ElemRef[MAX_ELEM_PG_0];
gslc_tsElem                     m_asPage3Elem[MAX_ELEM_PG_1_RAM];
gslc_tsElemRef                  m_asPage3ElemRef[MAX_ELEM_PG_1];
gslc_tsElem                     m_asKeypadNumElem[1];
gslc_tsElemRef                  m_asKeypadNumElemRef[1];
gslc_tsXKeyPad                  m_sKeyPadNum;

#define MAX_STR                 100

//<GUI_Extra_Elements !End!>

// ------------------------------------------------
// Program Globals
// ------------------------------------------------

// Element References for direct access
//<Extern_References !Start!>
extern gslc_tsElemRef* m_pElemVal1_2;
extern gslc_tsElemRef* m_pElemVal1_2_8;
extern gslc_tsElemRef* m_pElemVal1_2_8_11;
extern gslc_tsElemRef* m_pElemVal1_2_8_11_15;
extern gslc_tsElemRef* m_pElemVal1_2_8_11_15_19;
extern gslc_tsElemRef* m_pElemVal1_2_8_11_17;
extern gslc_tsElemRef* m_pElemVal1_2_8_11_17_21;
extern gslc_tsElemRef* m_pElemVal1_2_8_9;
extern gslc_tsElemRef* m_pElemVal1_2_8_9_10;
extern gslc_tsElemRef* m_pElemVal1_2_8_9_12;
extern gslc_tsElemRef* m_pElemVal1_2_8_9_12_16;
extern gslc_tsElemRef* m_pElemVal1_2_8_9_12_16_20;
extern gslc_tsElemRef* m_pElemVal1_2_8_9_12_18;
extern gslc_tsElemRef* m_pElemVal1_2_8_9_12_18_22;
extern gslc_tsElemRef* m_pElemVal1_3;
extern gslc_tsElemRef* m_pElemVal1_3_5;
extern gslc_tsElemRef* m_pElemVal1_4;
extern gslc_tsElemRef* m_pElemKeyPadNum;
//<Extern_References !End!>

// Define debug message function
static int16_t DebugOut(char ch);

// ------------------------------------------------
// Callback Methods
// ------------------------------------------------
bool CbBtnCommon(void* pvGui,void *pvElemRef,gslc_teTouch eTouch,int16_t nX,int16_t nY);
bool CbCheckbox(void* pvGui, void* pvElemRef, int16_t nSelId, bool bState);
bool CbDrawScanner(void* pvGui,void* pvElemRef,gslc_teRedrawType eRedraw);
bool CbKeypad(void* pvGui, void *pvElemRef, int16_t nState, void* pvData);
bool CbListbox(void* pvGui, void* pvElemRef, int16_t nSelId);
bool CbSlidePos(void* pvGui,void* pvElemRef,int16_t nPos);
bool CbSpinner(void* pvGui, void *pvElemRef, int16_t nState, void* pvData);
bool CbTickScanner(void* pvGui,void* pvScope);

// ------------------------------------------------
// Create page elements
// ------------------------------------------------
void InitGUIslice_gen()
{
  gslc_tsElemRef* pElemRef = NULL;

  if (!gslc_Init(&m_gui,&m_drv,m_asPage,MAX_PAGE,m_asFont,MAX_FONT)) { return; }

  // ------------------------------------------------
  // Load Fonts
  // ------------------------------------------------
//<Load_Fonts !Start!>
    if (!gslc_FontSet(&m_gui,E_BUILTIN5X8,GSLC_FONTREF_PTR,NULL,1)) { return; }
//<Load_Fonts !End!>

//<InitGUI !Start!>
  gslc_PageAdd(&m_gui,E_PG_0,m_asPage1Elem,MAX_ELEM_PG_0_RAM,m_asPage1ElemRef,MAX_ELEM_PG_0);
  gslc_PageAdd(&m_gui,E_PG_1,m_asPage3Elem,MAX_ELEM_PG_1_RAM,m_asPage3ElemRef,MAX_ELEM_PG_1);
  gslc_PageAdd(&m_gui,E_POP_KEYPAD_NUM,m_asKeypadNumElem,1,m_asKeypadNumElemRef,1);  // KeyPad

  // NOTE: The current page defaults to the first page added. Here we explicitly
  //       ensure that the main page is the correct page no matter the add order.
  gslc_SetPageCur(&m_gui,E_PG_0);
  
  // Set Background to a flat color
  gslc_SetBkgndColor(&m_gui,GSLC_COL_BLACK);

  // -----------------------------------
  // PAGE: E_PG_0
  
 
  // Create E_ELEM_IMAGE19 using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,E_ELEM_IMAGE19,E_PG_0,(gslc_tsRect){80,40,160,160},
    gslc_GetImageFromProg((const unsigned char*)Logo,GSLC_IMGREF_FMT_BMP24));
    gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT29 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT29,E_PG_0,(gslc_tsRect){4,4,66,8},
    (char*)"Version 1.0",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT30 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT30,E_PG_0,(gslc_tsRect){4,14,60,8},
    (char*)"TomTechHub",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT31 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT31,E_PG_0,(gslc_tsRect){220,230,70,8},
    (char*)"Tommaso Bugliesi",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);

  // -----------------------------------
  // PAGE: E_PG_1
  
  
  // Create E_ELEM_NUMINPUT_21 numeric input field
  static char m_sInputNumber2[5] = "1000";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_21,E_PG_1,(gslc_tsRect){60,160,34,10},
    (char*)m_sInputNumber2,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_12 numeric input field
  static char m_sInputNumber3[5] = "1000";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_12,E_PG_1,(gslc_tsRect){220,60,34,10},
    (char*)m_sInputNumber3,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_3 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_22 numeric input field
  static char m_sInputNumber4[5] = "1000";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_22,E_PG_1,(gslc_tsRect){220,160,34,10},
    (char*)m_sInputNumber4,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_4 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_11 numeric input field
  static char m_sInputNumber5[5] = "1000";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_11,E_PG_1,(gslc_tsRect){60,60,34,10},
    (char*)m_sInputNumber5,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_3_5 = pElemRef;
  
  // Create E_ELEM_TEXT_11 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_11,E_PG_1,(gslc_tsRect){60,50,36,8},
    (char*)"PWM 11",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT_21 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_21,E_PG_1,(gslc_tsRect){60,150,36,8},
    (char*)"PWM 21",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT_12 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_12,E_PG_1,(gslc_tsRect){220,50,36,8},
    (char*)"PWM 12",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT_22 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_22,E_PG_1,(gslc_tsRect){220,150,36,8},
    (char*)"PWM 22",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);

  // Create E_DRAW_LINE1 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE1,E_PG_1,60,40,260,40);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE2 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE2,E_PG_1,60,180,260,180);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);
  
  // Create E_ELEM_TEXT_ROLL text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_ROLL,E_PG_1,(gslc_tsRect){7,188,30,8},
    (char*)"Roll:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT_PITCH text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_PITCH,E_PG_1,(gslc_tsRect){7,201,36,8},
    (char*)"Pitch:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT_YAW text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_YAW,E_PG_1,(gslc_tsRect){7,214,24,8},
    (char*)"Yaw:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_NUMINPUT_ROLL numeric input field
  static char m_sInputNumber8[5] = "0.00";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_ROLL,E_PG_1,(gslc_tsRect){47,185,34,10},
    (char*)m_sInputNumber8,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_PITCH numeric input field
  static char m_sInputNumber9[5] = "0.00";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_PITCH,E_PG_1,(gslc_tsRect){47,198,34,10},
    (char*)m_sInputNumber9,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8_9 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_YAW numeric input field
  static char m_sInputNumber10[5] = "0.00";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_YAW,E_PG_1,(gslc_tsRect){47,211,34,10},
    (char*)m_sInputNumber10,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8_9_10 = pElemRef;

  // Create E_DRAW_LINE3 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE3,E_PG_1,94,185,94,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);
  
  // Create E_ELEM_TEXT_J1X text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_J1X,E_PG_1,(gslc_tsRect){108,186,24,8},
    (char*)"J1X:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT_J1Y text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_J1Y,E_PG_1,(gslc_tsRect){108,199,24,8},
    (char*)"J1Y:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_NUMINPUT_J1X numeric input field
  static char m_sInputNumber11[5] = "2040";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_J1X,E_PG_1,(gslc_tsRect){136,185,34,10},
    (char*)m_sInputNumber11,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8_11 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_J1Y numeric input field
  static char m_sInputNumber12[5] = "2040";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_J1Y,E_PG_1,(gslc_tsRect){136,198,34,10},
    (char*)m_sInputNumber12,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8_9_12 = pElemRef;

  // Create E_DRAW_LINE4 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE4,E_PG_1,185,185,185,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);
  
  // Create E_ELEM_TEXT_J2X text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_J2X,E_PG_1,(gslc_tsRect){108,212,24,8},
    (char*)"J2X:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT_J2Y text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_J2Y,E_PG_1,(gslc_tsRect){108,225,24,8},
    (char*)"J2Y:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_NUMINPUT_J2X numeric input field
  static char m_sInputNumber15[5] = "2040";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_J2X,E_PG_1,(gslc_tsRect){136,211,34,10},
    (char*)m_sInputNumber15,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8_11_15 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_J2Y numeric input field
  static char m_sInputNumber16[5] = "2040";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_J2Y,E_PG_1,(gslc_tsRect){136,224,34,10},
    (char*)m_sInputNumber16,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8_9_12_16 = pElemRef;
  
  // Create E_ELEM_TEXT_T1 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_T1,E_PG_1,(gslc_tsRect){196,186,18,8},
    (char*)"T1:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT_T2 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_T2,E_PG_1,(gslc_tsRect){196,199,18,8},
    (char*)"T2:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_NUMINPUT_T1 numeric input field
  static char m_sInputNumber17[5] = "0";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_T1,E_PG_1,(gslc_tsRect){218,185,16,10},
    (char*)m_sInputNumber17,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8_11_17 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_T2 numeric input field
  static char m_sInputNumber18[5] = "0";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_T2,E_PG_1,(gslc_tsRect){218,198,16,10},
    (char*)m_sInputNumber18,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8_9_12_18 = pElemRef;
  
  // Create E_ELEM_TEXT_T3 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_T3,E_PG_1,(gslc_tsRect){196,212,18,8},
    (char*)"T3:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT_T4 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_T4,E_PG_1,(gslc_tsRect){196,225,18,8},
    (char*)"T4:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_NUMINPUT_T3 numeric input field
  static char m_sInputNumber19[5] = "0";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_T3,E_PG_1,(gslc_tsRect){218,211,16,10},
    (char*)m_sInputNumber19,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8_11_15_19 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_T4 numeric input field
  static char m_sInputNumber20[5] = "0";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_T4,E_PG_1,(gslc_tsRect){218,224,16,10},
    (char*)m_sInputNumber20,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8_9_12_16_20 = pElemRef;
  
  // Create E_ELEM_TEXT_P1 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_P1,E_PG_1,(gslc_tsRect){256,185,18,8},
    (char*)"P1:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_TEXT_P2 text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_P2,E_PG_1,(gslc_tsRect){256,198,18,8},
    (char*)"P2:",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  
  // Create E_ELEM_NUMINPUT_P1 numeric input field
  static char m_sInputNumber21[5] = "2040";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_P1,E_PG_1,(gslc_tsRect){277,184,34,10},
    (char*)m_sInputNumber21,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8_11_17_21 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_P2 numeric input field
  static char m_sInputNumber22[5] = "2040";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_P2,E_PG_1,(gslc_tsRect){277,197,34,10},
    (char*)m_sInputNumber22,5,E_BUILTIN5X8);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal1_2_8_9_12_18_22 = pElemRef;

  // Create E_DRAW_LINE6 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE6,E_PG_1,247,185,247,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);
  
  // Create E_ELEM_TEXT_VERSION text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_VERSION,E_PG_1,(gslc_tsRect){4,4,66,8},
    (char*)"Version 1.0",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT_TTH text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_TTH,E_PG_1,(gslc_tsRect){4,14,60,8},
    (char*)"TomTechHub",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
 
  // Create E_ELEM_IMAGE20 using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,E_ELEM_IMAGE20,E_PG_1,(gslc_tsRect){100,50,120,116},
    gslc_GetImageFromProg((const unsigned char*)Drone,GSLC_IMGREF_FMT_BMP24));
    gslc_ElemSetFillEn(&m_gui,pElemRef,false);

  // -----------------------------------
  // PAGE: E_POP_KEYPAD_NUM
  
  static gslc_tsXKeyPadCfg_Num sCfg;
  sCfg = gslc_ElemXKeyPadCfgInit_Num();
  gslc_ElemXKeyPadCfgSetFloatEn_Num(&sCfg, true);
  gslc_ElemXKeyPadCfgSetSignEn_Num(&sCfg, true);
  m_pElemKeyPadNum = gslc_ElemXKeyPadCreate_Num(&m_gui, E_ELEM_KEYPAD_NUM, E_POP_KEYPAD_NUM,
    &m_sKeyPadNum, 65, 80, E_BUILTIN5X8, &sCfg);
  gslc_ElemXKeyPadValSetCb(&m_gui, m_pElemKeyPadNum, &CbKeypad);
//<InitGUI !End!>

//<Startup !Start!>
  gslc_GuiRotate(&m_gui, 3);
//<Startup !End!>

}

#endif // end _GUISLICE_GEN_H
