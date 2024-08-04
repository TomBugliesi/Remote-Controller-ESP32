#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>

#include "ESPNOWSender.h"
#include "Global.h"
#include "GPIOIntegrate.h"
#include "RemoteControllerESP32_GSLC.h"
#include "GUIupdate.h"
#include "SerialUpdate.h"


// Init classes
ESPNOWSender espnow;
GPIOIntegrate gpioIntegrate;
SerialUpdate serialUpdate;
GUIupdate guiUpdate;

void setup() {
    Serial.begin(115200);
    delay(100);

    // Init global pointer structure
    initGlobal();    

    // Init ESPNOW
    espnow.begin();

    // GUISlice section
    gslc_InitDebug(&DebugOut);
    InitGUIslice_gen();
}

void loop() {
    gpioIntegrate.updateGPIO();

    // Calibration from serial
    serialUpdate.update();

    // Update gui
    guiUpdate.update(&m_gui);

    // // Update value from global structure
    // char strBuffer[5];
    // sprintf(strBuffer, "%f", globalStructPtr->motorData.KpRoll);
    // gslc_ElemSetTxtStr(&m_gui,m_pElemVal1,strBuffer);
    gslc_Update(&m_gui);

    delay(10);
}
