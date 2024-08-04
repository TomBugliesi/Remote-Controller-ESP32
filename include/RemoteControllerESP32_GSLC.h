//<File !Start!>
// FILE: [RemoteControllerESP32_GSLC.h]
// Created by GUIslice Builder version: [0.17.b34]
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
#include "elem/XProgress.h"
#include "elem/XRingGauge.h"

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
#define IMG_UP_ARROW24DP          "/up_arrow24dp.bmp"
extern "C" const unsigned short Drone[] PROGMEM;
extern "C" const unsigned short Logo[] PROGMEM;
//<Resources !End!>

// ------------------------------------------------
// Enumerations for pages, elements, fonts, images
// ------------------------------------------------
//<Enum !Start!>
enum {E_PG_MAIN,E_PG2,E_PG3,E_PG5,E_POP_KEYPAD_NUM};
enum {E_DRAW_LINE1,E_DRAW_LINE10,E_DRAW_LINE11,E_DRAW_LINE12
      ,E_DRAW_LINE13,E_DRAW_LINE14,E_DRAW_LINE15,E_DRAW_LINE16
      ,E_DRAW_LINE17,E_DRAW_LINE18,E_DRAW_LINE2,E_DRAW_LINE3
      ,E_DRAW_LINE4,E_DRAW_LINE5,E_DRAW_LINE6,E_DRAW_LINE7,E_DRAW_LINE8
      ,E_DRAW_LINE9,E_ELEM_IMAGE_ARROW,E_ELEM_IMAGE_DRONE
      ,E_ELEM_IMAGE_LOGO,E_ELEM_NUMINPUT11,E_ELEM_NUMINPUT12
      ,E_ELEM_NUMINPUT21,E_ELEM_NUMINPUT22,E_ELEM_NUMINPUT_KdP
      ,E_ELEM_NUMINPUT_KdR,E_ELEM_NUMINPUT_KiP,E_ELEM_NUMINPUT_KiR
      ,E_ELEM_NUMINPUT_KpP,E_ELEM_NUMINPUT_KpR,E_ELEM_PROGRESS1
      ,E_ELEM_PROGRESS2,E_ELEM_PROGRESS3,E_ELEM_RINGGAUGE11
      ,E_ELEM_RINGGAUGE12,E_ELEM_RINGGAUGE21,E_ELEM_RINGGAUGE22
      ,E_ELEM_TEXT_AUTHOR,E_ELEM_TEXT_DATA,E_ELEM_TEXT_GUI
      ,E_ELEM_TEXT_KdP,E_ELEM_TEXT_KdR,E_ELEM_TEXT_KiP,E_ELEM_TEXT_KiR
      ,E_ELEM_TEXT_KpP,E_ELEM_TEXT_KpR,E_ELEM_TEXT_PID
      ,E_ELEM_TEXT_PITCH,E_ELEM_TEXT_REMOTE,E_ELEM_TEXT_ROLL
      ,E_ELEM_KEYPAD_NUM};
// Must use separate enum for fonts with MAX_FONT at end to use gslc_FontSet.
enum {E_BUILTIN10X16,E_BUILTIN15X24,E_BUILTIN5X8,MAX_FONT};
//<Enum !End!>

// ------------------------------------------------
// Instantiate the GUI
// ------------------------------------------------

// ------------------------------------------------
// Define the maximum number of elements and pages
// ------------------------------------------------
//<ElementDefines !Start!>
#define MAX_PAGE                5

#define MAX_ELEM_PG_MAIN 7 // # Elems total on page
#define MAX_ELEM_PG_MAIN_RAM MAX_ELEM_PG_MAIN // # Elems in RAM

#define MAX_ELEM_PG2 17 // # Elems total on page
#define MAX_ELEM_PG2_RAM MAX_ELEM_PG2 // # Elems in RAM

#define MAX_ELEM_PG3 21 // # Elems total on page
#define MAX_ELEM_PG3_RAM MAX_ELEM_PG3 // # Elems in RAM

#define MAX_ELEM_PG5 6 // # Elems total on page
#define MAX_ELEM_PG5_RAM MAX_ELEM_PG5 // # Elems in RAM
//<ElementDefines !End!>

// ------------------------------------------------
// Create element storage
// ------------------------------------------------
gslc_tsGui                      m_gui;
gslc_tsDriver                   m_drv;
gslc_tsFont                     m_asFont[MAX_FONT];
gslc_tsPage                     m_asPage[MAX_PAGE];

//<GUI_Extra_Elements !Start!>
gslc_tsElem                     m_asPage1Elem[MAX_ELEM_PG_MAIN_RAM];
gslc_tsElemRef                  m_asPage1ElemRef[MAX_ELEM_PG_MAIN];
gslc_tsElem                     m_asPage2Elem[MAX_ELEM_PG2_RAM];
gslc_tsElemRef                  m_asPage2ElemRef[MAX_ELEM_PG2];
gslc_tsElem                     m_asPage3Elem[MAX_ELEM_PG3_RAM];
gslc_tsElemRef                  m_asPage3ElemRef[MAX_ELEM_PG3];
gslc_tsElem                     m_asPage5Elem[MAX_ELEM_PG5_RAM];
gslc_tsElemRef                  m_asPage5ElemRef[MAX_ELEM_PG5];
gslc_tsElem                     m_asKeypadNumElem[1];
gslc_tsElemRef                  m_asKeypadNumElemRef[1];
gslc_tsXKeyPad                  m_sKeyPadNum;
gslc_tsXRingGauge               m_sXRingGauge1;
gslc_tsXRingGauge               m_sXRingGauge2;
gslc_tsXRingGauge               m_sXRingGauge3;
gslc_tsXRingGauge               m_sXRingGauge4;
gslc_tsXProgress                m_sXBarGauge1;
gslc_tsXProgress                m_sXBarGauge2;
gslc_tsXProgress                m_sXBarGauge3;

#define MAX_STR                 100

//<GUI_Extra_Elements !End!>

// ------------------------------------------------
// Program Globals
// ------------------------------------------------

// Element References for direct access
//<Extern_References !Start!>
extern gslc_tsElemRef* m_pElemProgress1;
extern gslc_tsElemRef* m_pElemProgress1_2;
extern gslc_tsElemRef* m_pElemProgress1_2_3;
extern gslc_tsElemRef* m_pElemVal12;
extern gslc_tsElemRef* m_pElemVal12_13;
extern gslc_tsElemRef* m_pElemVal12_13_16;
extern gslc_tsElemRef* m_pElemVal12_14;
extern gslc_tsElemRef* m_pElemVal12_14_17;
extern gslc_tsElemRef* m_pElemVal12_15;
extern gslc_tsElemRef* m_pElemVal7_8;
extern gslc_tsElemRef* m_pElemVal7_8_10;
extern gslc_tsElemRef* m_pElemVal7_9;
extern gslc_tsElemRef* m_pElemVal7_9_11;
extern gslc_tsElemRef* m_pElemXRingGauge1;
extern gslc_tsElemRef* m_pElemXRingGauge1_2;
extern gslc_tsElemRef* m_pElemXRingGauge1_2_4;
extern gslc_tsElemRef* m_pElemXRingGauge1_3;
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
    if (!gslc_FontSet(&m_gui,E_BUILTIN10X16,GSLC_FONTREF_PTR,NULL,2)) { return; }
    if (!gslc_FontSet(&m_gui,E_BUILTIN15X24,GSLC_FONTREF_PTR,NULL,3)) { return; }
    if (!gslc_FontSet(&m_gui,E_BUILTIN5X8,GSLC_FONTREF_PTR,NULL,1)) { return; }
//<Load_Fonts !End!>

//<InitGUI !Start!>
  gslc_PageAdd(&m_gui,E_PG_MAIN,m_asPage1Elem,MAX_ELEM_PG_MAIN_RAM,m_asPage1ElemRef,MAX_ELEM_PG_MAIN);
  gslc_PageAdd(&m_gui,E_PG2,m_asPage2Elem,MAX_ELEM_PG2_RAM,m_asPage2ElemRef,MAX_ELEM_PG2);
  gslc_PageAdd(&m_gui,E_PG3,m_asPage3Elem,MAX_ELEM_PG3_RAM,m_asPage3ElemRef,MAX_ELEM_PG3);
  gslc_PageAdd(&m_gui,E_PG5,m_asPage5Elem,MAX_ELEM_PG5_RAM,m_asPage5ElemRef,MAX_ELEM_PG5);
  gslc_PageAdd(&m_gui,E_POP_KEYPAD_NUM,m_asKeypadNumElem,1,m_asKeypadNumElemRef,1);  // KeyPad

  // NOTE: The current page defaults to the first page added. Here we explicitly
  //       ensure that the main page is the correct page no matter the add order.
  gslc_SetPageCur(&m_gui,E_PG_MAIN);
  
  // Set Background to a flat color
  gslc_SetBkgndColor(&m_gui,GSLC_COL_BLACK);

  // -----------------------------------
  // PAGE: E_PG_MAIN
  
 
  // Create E_ELEM_IMAGE_LOGO using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,E_ELEM_IMAGE_LOGO,E_PG_MAIN,(gslc_tsRect){80,34,160,160},
    gslc_GetImageFromProg((const unsigned char*)Logo,GSLC_IMGREF_FMT_BMP24));
  
  // Create E_ELEM_TEXT_AUTHOR text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_AUTHOR,E_PG_MAIN,(gslc_tsRect){10,10,96,8},
    (char*)"Tommaso Bugliesi",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT_GUI text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_GUI,E_PG_MAIN,(gslc_tsRect){260,220,48,8},
    (char*)"GUIslice",0,E_BUILTIN5X8);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);

  // Create E_DRAW_LINE1 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE1,E_PG_MAIN,5,5,315,5);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE2 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE2,E_PG_MAIN,5,235,315,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE3 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE3,E_PG_MAIN,315,5,315,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE4 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE4,E_PG_MAIN,5,5,5,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // -----------------------------------
  // PAGE: E_PG2
  
  
  // Create E_ELEM_TEXT_DATA text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_DATA,E_PG2,(gslc_tsRect){122,25,72,24},
    (char*)"DATA",0,E_BUILTIN15X24);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);
 
  // Create E_ELEM_IMAGE_DRONE using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,E_ELEM_IMAGE_DRONE,E_PG2,(gslc_tsRect){100,61,120,116},
    gslc_GetImageFromProg((const unsigned char*)Drone,GSLC_IMGREF_FMT_BMP24));
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);

  // Create E_DRAW_LINE5 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE5,E_PG2,5,5,315,5);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE6 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE6,E_PG2,5,235,315,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE7 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE7,E_PG2,315,5,315,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE8 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE8,E_PG2,5,5,5,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);
 
  // Create E_ELEM_IMAGE_ARROW using Image 
  pElemRef = gslc_ElemCreateImg(&m_gui,E_ELEM_IMAGE_ARROW,E_PG2,(gslc_tsRect){147,51,24,24},
    gslc_GetImageFromProg((const unsigned char*)IMG_UP_ARROW24DP,GSLC_IMGREF_FMT_BMP24));

  // Create E_DRAW_LINE13 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE13,E_PG2,159,66,159,116);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_BLUE,GSLC_COL_BLUE);

  // Create ring gauge E_ELEM_RINGGAUGE11 
  static char m_sRingText1[11] = "";
  pElemRef = gslc_ElemXRingGaugeCreate(&m_gui,E_ELEM_RINGGAUGE11,E_PG2,&m_sXRingGauge1,
          (gslc_tsRect){105,65,28,28},
          (char*)m_sRingText1,11,E_BUILTIN5X8);
  gslc_ElemXRingGaugeSetValRange(&m_gui, pElemRef, 0, 100);
  gslc_ElemXRingGaugeSetVal(&m_gui, pElemRef, 1); // Set initial value
  gslc_ElemXRingGaugeSetColorActiveGradient(&m_gui, pElemRef, GSLC_COL_GREEN, GSLC_COL_RED);
  gslc_ElemXRingGaugeSetColorInactive(&m_gui,pElemRef, GSLC_COL_WHITE);
  m_pElemXRingGauge1 = pElemRef;

  // Create ring gauge E_ELEM_RINGGAUGE12 
  static char m_sRingText2[11] = "";
  pElemRef = gslc_ElemXRingGaugeCreate(&m_gui,E_ELEM_RINGGAUGE12,E_PG2,&m_sXRingGauge2,
          (gslc_tsRect){185,65,28,28},
          (char*)m_sRingText2,11,E_BUILTIN5X8);
  gslc_ElemXRingGaugeSetValRange(&m_gui, pElemRef, 0, 100);
  gslc_ElemXRingGaugeSetVal(&m_gui, pElemRef, 1); // Set initial value
  gslc_ElemXRingGaugeSetColorActiveGradient(&m_gui, pElemRef, GSLC_COL_GREEN, GSLC_COL_RED);
  gslc_ElemXRingGaugeSetColorInactive(&m_gui,pElemRef, GSLC_COL_WHITE);
  m_pElemXRingGauge1_2 = pElemRef;

  // Create ring gauge E_ELEM_RINGGAUGE21 
  static char m_sRingText3[11] = "";
  pElemRef = gslc_ElemXRingGaugeCreate(&m_gui,E_ELEM_RINGGAUGE21,E_PG2,&m_sXRingGauge3,
          (gslc_tsRect){105,145,28,28},
          (char*)m_sRingText3,11,E_BUILTIN5X8);
  gslc_ElemXRingGaugeSetValRange(&m_gui, pElemRef, 0, 100);
  gslc_ElemXRingGaugeSetVal(&m_gui, pElemRef, 1); // Set initial value
  gslc_ElemXRingGaugeSetColorActiveGradient(&m_gui, pElemRef, GSLC_COL_GREEN, GSLC_COL_RED);
  gslc_ElemXRingGaugeSetColorInactive(&m_gui,pElemRef, GSLC_COL_WHITE);
  m_pElemXRingGauge1_3 = pElemRef;

  // Create ring gauge E_ELEM_RINGGAUGE22 
  static char m_sRingText4[11] = "";
  pElemRef = gslc_ElemXRingGaugeCreate(&m_gui,E_ELEM_RINGGAUGE22,E_PG2,&m_sXRingGauge4,
          (gslc_tsRect){185,145,28,28},
          (char*)m_sRingText4,11,E_BUILTIN5X8);
  gslc_ElemXRingGaugeSetValRange(&m_gui, pElemRef, 0, 100);
  gslc_ElemXRingGaugeSetVal(&m_gui, pElemRef, 1); // Set initial value
  gslc_ElemXRingGaugeSetColorActiveGradient(&m_gui, pElemRef, GSLC_COL_GREEN, GSLC_COL_RED);
  gslc_ElemXRingGaugeSetColorInactive(&m_gui,pElemRef, GSLC_COL_WHITE);
  m_pElemXRingGauge1_2_4 = pElemRef;
  
  // Create E_ELEM_NUMINPUT11 numeric input field
  static char m_sInputNumber11[6] = "0048";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT11,E_PG2,(gslc_tsRect){46,70,58,18},
    (char*)m_sInputNumber11,6,E_BUILTIN10X16);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal7_9_11 = pElemRef;
  
  // Create E_ELEM_NUMINPUT12 numeric input field
  static char m_sInputNumber8[6] = "0048";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT12,E_PG2,(gslc_tsRect){216,70,58,18},
    (char*)m_sInputNumber8,6,E_BUILTIN10X16);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal7_8 = pElemRef;
  
  // Create E_ELEM_NUMINPUT21 numeric input field
  static char m_sInputNumber9[6] = "0048";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT21,E_PG2,(gslc_tsRect){46,155,58,18},
    (char*)m_sInputNumber9,6,E_BUILTIN10X16);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal7_9 = pElemRef;
  
  // Create E_ELEM_NUMINPUT22 numeric input field
  static char m_sInputNumber10[6] = "0048";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT22,E_PG2,(gslc_tsRect){216,155,58,18},
    (char*)m_sInputNumber10,6,E_BUILTIN10X16);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,5);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal7_8_10 = pElemRef;

  // Create progress bar E_ELEM_PROGRESS1 
  pElemRef = gslc_ElemXProgressCreate(&m_gui,E_ELEM_PROGRESS1,E_PG2,&m_sXBarGauge1,
    (gslc_tsRect){260,10,50,12},0,100,50,GSLC_COL_GREEN,false);
  m_pElemProgress1 = pElemRef;

  // -----------------------------------
  // PAGE: E_PG3
  
  
  // Create E_ELEM_TEXT_PID text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_PID,E_PG3,(gslc_tsRect){30,30,270,24},
    (char*)"PID Calibration",0,E_BUILTIN15X24);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);

  // Create E_DRAW_LINE9 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE9,E_PG3,5,5,315,5);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE10 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE10,E_PG3,5,235,315,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE11 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE11,E_PG3,315,5,315,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE12 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE12,E_PG3,5,5,5,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);
  
  // Create E_ELEM_TEXT_ROLL text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_ROLL,E_PG3,(gslc_tsRect){15,65,48,16},
    (char*)"ROLL",0,E_BUILTIN10X16);
  
  // Create E_ELEM_TEXT_PITCH text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_PITCH,E_PG3,(gslc_tsRect){15,145,60,16},
    (char*)"PITCH",0,E_BUILTIN10X16);
  
  // Create E_ELEM_TEXT_KpR text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_KpR,E_PG3,(gslc_tsRect){30,85,24,16},
    (char*)"Kp",0,E_BUILTIN10X16);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT_KiR text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_KiR,E_PG3,(gslc_tsRect){30,105,24,16},
    (char*)"Ki",0,E_BUILTIN10X16);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT_KdR text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_KdR,E_PG3,(gslc_tsRect){30,125,24,16},
    (char*)"Kd",0,E_BUILTIN10X16);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT_KpP text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_KpP,E_PG3,(gslc_tsRect){30,165,24,16},
    (char*)"Kp",0,E_BUILTIN10X16);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT_KiP text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_KiP,E_PG3,(gslc_tsRect){30,185,24,16},
    (char*)"Ki",0,E_BUILTIN10X16);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  
  // Create E_ELEM_TEXT_KdP text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_KdP,E_PG3,(gslc_tsRect){30,205,24,16},
    (char*)"Kd",0,E_BUILTIN10X16);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);

  // Create E_DRAW_LINE14 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE14,E_PG3,159,60,159,220);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);
  
  // Create E_ELEM_NUMINPUT_KpR numeric input field
  static char m_sInputNumber12[6] = "0.000";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_KpR,E_PG3,(gslc_tsRect){75,83,80,18},
    (char*)m_sInputNumber12,6,E_BUILTIN10X16);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,10);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal12 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_KiR numeric input field
  static char m_sInputNumber13[6] = "0.000";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_KiR,E_PG3,(gslc_tsRect){75,103,80,18},
    (char*)m_sInputNumber13,6,E_BUILTIN10X16);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,10);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal12_13 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_KdR numeric input field
  static char m_sInputNumber14[6] = "0.000";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_KdR,E_PG3,(gslc_tsRect){75,123,80,18},
    (char*)m_sInputNumber14,6,E_BUILTIN10X16);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,10);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal12_14 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_KpP numeric input field
  static char m_sInputNumber15[6] = "0.000";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_KpP,E_PG3,(gslc_tsRect){75,163,80,18},
    (char*)m_sInputNumber15,6,E_BUILTIN10X16);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,10);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal12_15 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_KiP numeric input field
  static char m_sInputNumber16[6] = "0.000";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_KiP,E_PG3,(gslc_tsRect){75,183,80,18},
    (char*)m_sInputNumber16,6,E_BUILTIN10X16);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,10);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal12_13_16 = pElemRef;
  
  // Create E_ELEM_NUMINPUT_KdP numeric input field
  static char m_sInputNumber17[6] = "0.000";
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_NUMINPUT_KdP,E_PG3,(gslc_tsRect){75,203,80,18},
    (char*)m_sInputNumber17,6,E_BUILTIN10X16);
  gslc_ElemSetTxtAlign(&m_gui,pElemRef,GSLC_ALIGN_MID_MID);
  gslc_ElemSetTxtMargin(&m_gui,pElemRef,10);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,GSLC_COL_WHITE);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  gslc_ElemSetClickEn(&m_gui, pElemRef, true);
  gslc_ElemSetTouchFunc(&m_gui, pElemRef, &CbBtnCommon);
  m_pElemVal12_14_17 = pElemRef;

  // Create progress bar E_ELEM_PROGRESS2 
  pElemRef = gslc_ElemXProgressCreate(&m_gui,E_ELEM_PROGRESS2,E_PG3,&m_sXBarGauge2,
    (gslc_tsRect){260,10,50,12},0,100,50,GSLC_COL_GREEN,false);
  m_pElemProgress1_2 = pElemRef;

  // -----------------------------------
  // PAGE: E_PG5
  
  
  // Create E_ELEM_TEXT_REMOTE text label
  pElemRef = gslc_ElemCreateTxt(&m_gui,E_ELEM_TEXT_REMOTE,E_PG5,(gslc_tsRect){101,25,108,24},
    (char*)"Remote",0,E_BUILTIN15X24);
  gslc_ElemSetFillEn(&m_gui,pElemRef,false);

  // Create E_DRAW_LINE15 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE15,E_PG5,5,5,315,5);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE16 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE16,E_PG5,5,235,315,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE17 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE17,E_PG5,315,5,315,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create E_DRAW_LINE18 line 
  pElemRef = gslc_ElemCreateLine(&m_gui,E_DRAW_LINE18,E_PG5,5,5,5,235);
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLACK,GSLC_COL_GRAY_LT2,GSLC_COL_GRAY_LT2);

  // Create progress bar E_ELEM_PROGRESS3 
  pElemRef = gslc_ElemXProgressCreate(&m_gui,E_ELEM_PROGRESS3,E_PG5,&m_sXBarGauge3,
    (gslc_tsRect){260,10,50,12},0,100,50,GSLC_COL_GREEN,false);
  m_pElemProgress1_2_3 = pElemRef;

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
//<Startup !End!>

}

// ------------------------------------------------
// Program Globals
// ------------------------------------------------

// Save some element references for direct access
//<Save_References !Start!>
gslc_tsElemRef* m_pElemProgress1  = NULL;
gslc_tsElemRef* m_pElemProgress1_2= NULL;
gslc_tsElemRef* m_pElemProgress1_2_3= NULL;
gslc_tsElemRef* m_pElemVal12      = NULL;
gslc_tsElemRef* m_pElemVal12_13   = NULL;
gslc_tsElemRef* m_pElemVal12_13_16= NULL;
gslc_tsElemRef* m_pElemVal12_14   = NULL;
gslc_tsElemRef* m_pElemVal12_14_17= NULL;
gslc_tsElemRef* m_pElemVal12_15   = NULL;
gslc_tsElemRef* m_pElemVal7_8     = NULL;
gslc_tsElemRef* m_pElemVal7_8_10  = NULL;
gslc_tsElemRef* m_pElemVal7_9     = NULL;
gslc_tsElemRef* m_pElemVal7_9_11  = NULL;
gslc_tsElemRef* m_pElemXRingGauge1= NULL;
gslc_tsElemRef* m_pElemXRingGauge1_2= NULL;
gslc_tsElemRef* m_pElemXRingGauge1_2_4= NULL;
gslc_tsElemRef* m_pElemXRingGauge1_3= NULL;
gslc_tsElemRef* m_pElemKeyPadNum  = NULL;
//<Save_References !End!>

// Define debug message function
static int16_t DebugOut(char ch) { if (ch == (char)'\n') Serial.println(""); else Serial.write(ch); return 0; }

// ------------------------------------------------
// Callback Methods
// ------------------------------------------------
// Common Button callback
bool CbBtnCommon(void* pvGui,void *pvElemRef,gslc_teTouch eTouch,int16_t nX,int16_t nY)
{
  // Typecast the parameters to match the GUI and element types
  gslc_tsGui*     pGui     = (gslc_tsGui*)(pvGui);
  gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
  gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui,pElemRef);

  if ( eTouch == GSLC_TOUCH_UP_IN ) {
    // From the element's ID we can determine which button was pressed.
    switch (pElem->nId) {
//<Button Enums !Start!>
      case E_ELEM_NUMINPUT11:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal7_9_11);
        break;
      case E_ELEM_NUMINPUT12:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal7_8);
        break;
      case E_ELEM_NUMINPUT21:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal7_9);
        break;
      case E_ELEM_NUMINPUT22:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal7_8_10);
        break;
      case E_ELEM_NUMINPUT_KpR:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal12);
        break;
      case E_ELEM_NUMINPUT_KiR:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal12_13);
        break;
      case E_ELEM_NUMINPUT_KdR:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal12_14);
        break;
      case E_ELEM_NUMINPUT_KpP:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal12_15);
        break;
      case E_ELEM_NUMINPUT_KiP:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal12_13_16);
        break;
      case E_ELEM_NUMINPUT_KdP:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal12_14_17);
        break;
//<Button Enums !End!>
      default:
        break;
    }
  }
  return true;
}
//<Checkbox Callback !Start!>
//<Checkbox Callback !End!>
// KeyPad Input Ready callback
bool CbKeypad(void* pvGui, void *pvElemRef, int16_t nState, void* pvData)
{
  gslc_tsGui*     pGui     = (gslc_tsGui*)pvGui;
  gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
  gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui,pElemRef);

  // From the pvData we can get the ID element that is ready.
  int16_t nTargetElemId = gslc_ElemXKeyPadDataTargetIdGet(pGui, pvData);
  if (nState == XKEYPAD_CB_STATE_DONE) {
    // User clicked on Enter to leave popup
    // - If we have a popup active, pass the return value directly to
    //   the corresponding value field
    switch (nTargetElemId) {
//<Keypad Enums !Start!>
      case E_ELEM_NUMINPUT11:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal7_9_11, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT12:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal7_8, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT21:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal7_9, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT22:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal7_8_10, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_KpR:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal12, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_KiR:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal12_13, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_KdR:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal12_14, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_KpP:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal12_15, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_KiP:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal12_13_16, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_KdP:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal12_14_17, pvData);
        gslc_PopupHide(&m_gui);
        break;

//<Keypad Enums !End!>
      default:
        break;
    }
  } else if (nState == XKEYPAD_CB_STATE_CANCEL) {
    // User escaped from popup, so don't update values
    gslc_PopupHide(&m_gui);
  }
  return true;
}
//<Spinner Callback !Start!>
//<Spinner Callback !End!>
//<Listbox Callback !Start!>
//<Listbox Callback !End!>
//<Draw Callback !Start!>
//<Draw Callback !End!>
//<Slider Callback !Start!>
//<Slider Callback !End!>
//<Tick Callback !Start!>
//<Tick Callback !End!>

#endif // end _GUISLICE_GEN_H
