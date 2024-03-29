#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>

#include "ESPNOWSender.h"
#include "Global.h"
#include "GPIOIntegrate.h"

// Init classes
ESPNOWSender espnow;
GPIOIntegrate gpioIntegrate;

void setup() {
    Serial.begin(115200);
    delay(100);

    // Init global pointer structure
    initGlobal();    

    espnow.begin();
}

void loop() {
    gpioIntegrate.updateGPIO();
    gpioIntegrate.printGPIO();
    memcpy(&(globalStructPtr->gpioData ), &(gpioIntegrate.gpioStruct), sizeof(gpioIntegrate.gpioStruct));

    espnow.sendData(0x01, &(globalStructPtr->gpioData), sizeof(globalStructPtr->gpioData));
    delay(10);
}