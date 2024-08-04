// //<App !Start!>
// // FILE: [main.cpp]
// // Created by GUIslice Builder version: [0.17.b24]
// //
// // GUIslice Builder Generated File
// //
// // For the latest guides, updates and support view:
// // https://github.com/ImpulseAdventure/GUIslice
// //
// //<App !End!>

// // ------------------------------------------------
// // Headers to include
// // ------------------------------------------------
// #include "projects_GSLC.h"
// #include "Struct.h"
// #include "GPIO_Integrate.h"
// #include "GUI_Integrate.h"
// #include "ESPNOW_Integrate.h"

// // NEW start
// #include "DShotESC.h"

// #define PEAKSPEED 40
// #define CONTINOUSSPEED 0
// #define SINE_DURATION 10000.f //duration of the full cycle, in millis

// DShotESC esc0;
// /*
// #include "DShotRMT.h"

// // Define the GPIO pin connected to the motor and the DShot protocol used
// const auto MOTOR01_PIN = GPIO_NUM_12;
// const auto DSHOT_MODE = DSHOT300;
// // Define the failsafe and initial throttle values
// const auto FAILSAFE_THROTTLE = 999;
// const auto INITIAL_THROTTLE = 48;
// // Initialize a DShotRMT object for the motor
// DShotRMT motor01(MOTOR01_PIN, RMT_CHANNEL_0);
// */
// int16_t milliswrap = 0;
// // NEW end

// // ------------------------------------------------
// // Program Globals
// // ------------------------------------------------

// // Save some element references for direct access
// //<Save_References !Start!>
// gslc_tsElemRef* m_pElemVal1_2     = NULL;
// gslc_tsElemRef* m_pElemVal1_2_8   = NULL;
// gslc_tsElemRef* m_pElemVal1_2_8_11= NULL;
// gslc_tsElemRef* m_pElemVal1_2_8_11_15= NULL;
// gslc_tsElemRef* m_pElemVal1_2_8_11_15_19= NULL;
// gslc_tsElemRef* m_pElemVal1_2_8_11_17= NULL;
// gslc_tsElemRef* m_pElemVal1_2_8_11_17_21= NULL;
// gslc_tsElemRef* m_pElemVal1_2_8_9 = NULL;
// gslc_tsElemRef* m_pElemVal1_2_8_9_10= NULL;
// gslc_tsElemRef* m_pElemVal1_2_8_9_12= NULL;
// gslc_tsElemRef* m_pElemVal1_2_8_9_12_16= NULL;
// gslc_tsElemRef* m_pElemVal1_2_8_9_12_16_20= NULL;
// gslc_tsElemRef* m_pElemVal1_2_8_9_12_18= NULL;
// gslc_tsElemRef* m_pElemVal1_2_8_9_12_18_22= NULL;
// gslc_tsElemRef* m_pElemVal1_3     = NULL;
// gslc_tsElemRef* m_pElemVal1_3_5   = NULL;
// gslc_tsElemRef* m_pElemVal1_4     = NULL;
// gslc_tsElemRef* m_pElemKeyPadNum  = NULL;
// //<Save_References !End!>

// // Define debug message function
// static int16_t DebugOut(char ch) { if (ch == (char)'\n') Serial.println(""); else Serial.write(ch); return 0; }

// // ------------------------------------------------
// // Callback Methods
// // ------------------------------------------------
// // Common Button callback
// bool CbBtnCommon(void* pvGui,void *pvElemRef,gslc_teTouch eTouch,int16_t nX,int16_t nY)
// {
//   // Typecast the parameters to match the GUI and element types
//   gslc_tsGui*     pGui     = (gslc_tsGui*)(pvGui);
//   gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
//   gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui,pElemRef);

//   if ( eTouch == GSLC_TOUCH_UP_IN ) {
//     // From the element's ID we can determine which button was pressed.
//     switch (pElem->nId) {
// //<Button Enums !Start!>
//       case E_ELEM_NUMINPUT_21:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2);
//         break;
//       case E_ELEM_NUMINPUT_12:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_3);
//         break;
//       case E_ELEM_NUMINPUT_22:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_4);
//         break;
//       case E_ELEM_NUMINPUT_11:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_3_5);
//         break;
//       case E_ELEM_NUMINPUT_ROLL:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8);
//         break;
//       case E_ELEM_NUMINPUT_PITCH:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9);
//         break;
//       case E_ELEM_NUMINPUT_YAW:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9_10);
//         break;
//       case E_ELEM_NUMINPUT_J1X:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_11);
//         break;
//       case E_ELEM_NUMINPUT_J1Y:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9_12);
//         break;
//       case E_ELEM_NUMINPUT_J2X:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_11_15);
//         break;
//       case E_ELEM_NUMINPUT_J2Y:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9_12_16);
//         break;
//       case E_ELEM_NUMINPUT_T1:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_11_17);
//         break;
//       case E_ELEM_NUMINPUT_T2:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9_12_18);
//         break;
//       case E_ELEM_NUMINPUT_T3:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_11_15_19);
//         break;
//       case E_ELEM_NUMINPUT_T4:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9_12_16_20);
//         break;
//       case E_ELEM_NUMINPUT_P1:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_11_17_21);
//         break;
//       case E_ELEM_NUMINPUT_P2:
//         // Clicked on edit field, so show popup box and associate with this text field
//         gslc_ElemXKeyPadInputAsk(&m_gui, m_pElemKeyPadNum, E_POP_KEYPAD_NUM, m_pElemVal1_2_8_9_12_18_22);
//         break;
// //<Button Enums !End!>
//       default:
//         break;
//     }
//   }
//   return true;
// }
// //<Checkbox Callback !Start!>
// //<Checkbox Callback !End!>
// // KeyPad Input Ready callback
// bool CbKeypad(void* pvGui, void *pvElemRef, int16_t nState, void* pvData)
// {
//   gslc_tsGui*     pGui     = (gslc_tsGui*)pvGui;
//   gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
//   gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui,pElemRef);

//   // From the pvData we can get the ID element that is ready.
//   int16_t nTargetElemId = gslc_ElemXKeyPadDataTargetIdGet(pGui, pvData);
//   if (nState == XKEYPAD_CB_STATE_DONE) {
//     // User clicked on Enter to leave popup
//     // - If we have a popup active, pass the return value directly to
//     //   the corresponding value field
//     switch (nTargetElemId) {
// //<Keypad Enums !Start!>

//       case E_ELEM_NUMINPUT_21:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_12:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_3, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_22:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_4, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_11:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_3_5, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_ROLL:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_PITCH:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_YAW:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9_10, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_J1X:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_11, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_J1Y:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9_12, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_J2X:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_11_15, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_J2Y:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9_12_16, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_T1:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_11_17, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_T2:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9_12_18, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_T3:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_11_15_19, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_T4:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9_12_16_20, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_P1:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_11_17_21, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
//       case E_ELEM_NUMINPUT_P2:
//         gslc_ElemXKeyPadInputGet(pGui, m_pElemVal1_2_8_9_12_18_22, pvData);
//         gslc_PopupHide(&m_gui);
//         break;
// //<Keypad Enums !End!>
//       default:
//         break;
//     }
//   } else if (nState == XKEYPAD_CB_STATE_CANCEL) {
//     // User escaped from popup, so don't update values
//     gslc_PopupHide(&m_gui);
//   }
//   return true;
// }
// //<Spinner Callback !Start!>
// //<Spinner Callback !End!>
// //<Listbox Callback !Start!>
// //<Listbox Callback !End!>
// //<Draw Callback !Start!>
// //<Draw Callback !End!>

// // Callback function for when a slider's position has been updated
// bool CbSlidePos(void* pvGui,void* pvElemRef,int16_t nPos)
// {
//   gslc_tsGui*     pGui     = (gslc_tsGui*)(pvGui);
//   gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
//   gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui,pElemRef);
//   int16_t         nVal;

//   // From the element's ID we can determine which slider was updated.
//   switch (pElem->nId) {
// //<Slider Enums !Start!>

// //<Slider Enums !End!>
//     default:
//       break;
//   }

//   return true;
// }
// //<Tick Callback !Start!>
// //<Tick Callback !End!>

// void setup()
// {
//   // ------------------------------------------------
//   // Initialize
//   // ------------------------------------------------
//   Serial.begin(115200);
//   // Wait for USB Serial 
//   //delay(1000);  // NOTE: Some devices require a delay after Serial.begin() before serial port can be used
//   InitGPIO();
//   InitNOW();
//   gslc_InitDebug(&DebugOut);
//   // ------------------------------------------------
//   // Create graphic elements
//   // ------------------------------------------------
//   InitGUIslice_gen();
//   StartUp();

//   // NEW start
//   esc0.install(GPIO_NUM_12, RMT_CHANNEL_0);
// 	esc0.init();
// 	// esc0.setReversed(true);
// 	// esc0.set3DMode(false);
// 	// for (int i = 0; i < 5; i++)
// 	// {
// 	// 	esc0.beep(i);
// 	// }
//   // Start generating DShot signal for the motor
//   //motor01.begin(DSHOT_MODE);
//   // NEW end
// }

// // -----------------------------------
// // Main event loop
// // -----------------------------------
// void loop()
// {

//   // ------------------------------------------------
//   // Update GUI Elements
//   // ------------------------------------------------
//   UpdateGPIO();
//   UpdateGUI();
//   //UpdateNOW();
//   //TODO - Add update code for any text, gauges, or sliders

//   // ------------------------------------------------
//   // Periodically call GUIslice update function
//   // ------------------------------------------------
//   //gslc_Update(&m_gui);
//   // delay(20);

//   // NEW start
//   // Read the throttle value from the USB serial input
//   /*
//   auto throttle_input = 1046;

//   // Set the throttle value to either the value received from the serial input or the failsafe throttle value
//   auto throttle_value = (throttle_input > 0) ? throttle_input : FAILSAFE_THROTTLE;

//   // Send the throttle value to the motor
//   motor01.sendThrottleValue(throttle_value);
//   */

//   milliswrap = cos(millis()*2/SINE_DURATION*PI)*PEAKSPEED + PEAKSPEED + CONTINOUSSPEED;
//   Serial.println(milliswrap);
//   esc0.sendThrottle(milliswrap);
//   delay(1);

//   // NEW end
// }


// /*
//  * "THE BEER-WARE LICENSE" (Revision 42):
//  * regenbogencode@gmail.com wrote this file. As long as you retain this notice
//  * you can do whatever you want with this stuff. If we meet some day, and you
//  * think this stuff is worth it, you can buy me a beer in return
//  */
// #include <Arduino.h>
// #ifdef ESP8266
// #include <ESP8266WiFi.h>
// #elif ESP32
// #include <WiFi.h>
// #endif
// #include "ESPNowW.h"

// // uint8_t mac[] = {0x36, 0x33, 0x33, 0x33, 0x33, 0x33};
// uint8_t mac[] = {0xC0, 0x49, 0xEF, 0x95, 0xB1, 0x5C};

// void onRecv(const uint8_t *mac_addr, const uint8_t *data, int data_len) {
//     char macStr[18];
//     snprintf(macStr, sizeof(macStr), "%02x:%02x:%02x:%02x:%02x:%02x",
//              mac_addr[0], mac_addr[1], mac_addr[2], mac_addr[3], mac_addr[4],
//              mac_addr[5]);
//     Serial.print("Last Packet Recv from: ");
//     Serial.println(macStr);
//     Serial.print("Last Packet Recv Data: ");
//     // if it could be a string, print as one
//     if (data[data_len - 1] == 0)
//         Serial.printf("%s\n", data);
//     // additionally print as hex
//     for (int i = 0; i < data_len; i++) {
//         Serial.printf("%x ", data[i]);
//     }
//     Serial.println("");
// }

// void setup() {
//     Serial.begin(115200);
//     Serial.println("ESPNow Drone Demo");
// #ifdef ESP8266
//     WiFi.mode(WIFI_STA); // MUST NOT BE WIFI_MODE_NULL
// #elif ESP32
//     WiFi.mode(WIFI_MODE_STA);
// #endif
//     ESPNow.set_mac(mac);
//     WiFi.disconnect();
//     ESPNow.init();
//     ESPNow.reg_recv_cb(onRecv);
// }

// void loop() {}
#include <Arduino.h>
#include <WiFi.h>

void setup() {
    Serial.begin(115200);
    delay(1000);

    // Initialize WiFi
    WiFi.mode(WIFI_STA);

    // Print MAC address
    Serial.print("MAC Address: ");
    Serial.println(WiFi.macAddress());
}

void loop() {
    // Do nothing
}