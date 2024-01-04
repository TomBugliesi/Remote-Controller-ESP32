//<App !Start!>
// FILE: [main.cpp]
// Created by GUIslice Builder version: [0.17.b24]
//
// GUIslice Builder Generated File
//
// For the latest guides, updates and support view:
// https://github.com/ImpulseAdventure/GUIslice
//
//<App !End!>

// ------------------------------------------------
// Headers to include
// ------------------------------------------------
#include "projects_GSLC.h"
#include "GPIO_integrate.h"
#include "ESPNOW_Integrate.h"

// ------------------------------------------------
// Program Globals
// ------------------------------------------------

// Save some element references for direct access
//<Save_References !Start!>
gslc_tsElemRef* m_pElemVal1_2     = NULL;
gslc_tsElemRef* m_pElemVal1_2_8   = NULL;
gslc_tsElemRef* m_pElemVal1_2_8_11= NULL;
gslc_tsElemRef* m_pElemVal1_2_8_11_15= NULL;
gslc_tsElemRef* m_pElemVal1_2_8_11_15_19= NULL;
gslc_tsElemRef* m_pElemVal1_2_8_11_17= NULL;
gslc_tsElemRef* m_pElemVal1_2_8_11_17_21= NULL;
gslc_tsElemRef* m_pElemVal1_2_8_9 = NULL;
gslc_tsElemRef* m_pElemVal1_2_8_9_10= NULL;
gslc_tsElemRef* m_pElemVal1_2_8_9_12= NULL;
gslc_tsElemRef* m_pElemVal1_2_8_9_12_16= NULL;
gslc_tsElemRef* m_pElemVal1_2_8_9_12_16_20= NULL;
gslc_tsElemRef* m_pElemVal1_2_8_9_12_18= NULL;
gslc_tsElemRef* m_pElemVal1_2_8_9_12_18_22= NULL;
gslc_tsElemRef* m_pElemVal1_3     = NULL;
gslc_tsElemRef* m_pElemVal1_3_5   = NULL;
gslc_tsElemRef* m_pElemVal1_4     = NULL;
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
      case E_ELEM_NUMINPUT_21:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2);
        break;
      case E_ELEM_NUMINPUT_12:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_3);
        break;
      case E_ELEM_NUMINPUT_22:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_4);
        break;
      case E_ELEM_NUMINPUT_11:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_3_5);
        break;
      case E_ELEM_NUMINPUT_ROLL:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8);
        break;
      case E_ELEM_NUMINPUT_PITCH:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9);
        break;
      case E_ELEM_NUMINPUT_YAW:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9_10);
        break;
      case E_ELEM_NUMINPUT_J1X:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_11);
        break;
      case E_ELEM_NUMINPUT_J1Y:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9_12);
        break;
      case E_ELEM_NUMINPUT_J2X:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_11_15);
        break;
      case E_ELEM_NUMINPUT_J2Y:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9_12_16);
        break;
      case E_ELEM_NUMINPUT_T1:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_11_17);
        break;
      case E_ELEM_NUMINPUT_T2:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9_12_18);
        break;
      case E_ELEM_NUMINPUT_T3:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_11_15_19);
        break;
      case E_ELEM_NUMINPUT_T4:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9_12_16_20);
        break;
      case E_ELEM_NUMINPUT_P1:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_11_17_21);
        break;
      case E_ELEM_NUMINPUT_P2:
        // Clicked on edit field, so show popup box and associate with this text field
        gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9_12_18_22);
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

      case E_ELEM_NUMINPUT_21:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_12:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_3, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_22:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_4, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_11:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_3_5, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_ROLL:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_PITCH:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_YAW:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9_10, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_J1X:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_11, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_J1Y:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9_12, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_J2X:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_11_15, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_J2Y:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9_12_16, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_T1:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_11_17, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_T2:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9_12_18, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_T3:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_11_15_19, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_T4:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9_12_16_20, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_P1:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_11_17_21, pvData);
        gslc_PopupHide(&m_gui);
        break;
      case E_ELEM_NUMINPUT_P2:
        gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9_12_18_22, pvData);
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

// Callback function for when a slider's position has been updated
bool CbSlidePos(void* pvGui,void* pvElemRef,int16_t nPos)
{
  gslc_tsGui*     pGui     = (gslc_tsGui*)(pvGui);
  gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
  gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui,pElemRef);
  int16_t         nVal;

  // From the element's ID we can determine which slider was updated.
  switch (pElem->nId) {
//<Slider Enums !Start!>

//<Slider Enums !End!>
    default:
      break;
  }

  return true;
}
//<Tick Callback !Start!>
//<Tick Callback !End!>

void setup()
{
  // ------------------------------------------------
  // Initialize
  // ------------------------------------------------
  Serial.begin(115200);
  // Wait for USB Serial 
  //delay(1000);  // NOTE: Some devices require a delay after Serial.begin() before serial port can be used
  InitGPIO();
  InitNOW();
  gslc_InitDebug(&DebugOut);
  // ------------------------------------------------
  // Create graphic elements
  // ------------------------------------------------
  InitGUIslice_gen();
  StartUp();
}

// -----------------------------------
// Main event loop
// -----------------------------------
void loop()
{

  // ------------------------------------------------
  // Update GUI Elements
  // ------------------------------------------------
  UpdateTFT();
  UpdateNOW();
  //TODO - Add update code for any text, gauges, or sliders
  
  // ------------------------------------------------
  // Periodically call GUIslice update function
  // ------------------------------------------------
  //gslc_Update(&m_gui);
  delay(50);
}

