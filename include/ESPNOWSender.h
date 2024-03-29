/*
  ESPNOWSender.h - Library for Description
  Created by Tommaso Bugliesi, 10/03/2024.
  Brief description: A library to activate the ESPNOW protocol for duplex communication with another ESP32 board.
*/

#ifndef ESPNOWSender_h
#define ESPNOWSender_h

#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>
#include "Global.h"

enum msgHead {
  ESPNOW_DATA_00,
  ESPNOW_DATA_01
};

class ESPNOWSender {
  private:
    // Add private variables and methods here
    uint8_t broadcastAddress[6] = {0xC0, 0x49, 0xEF, 0x95, 0xB1, 0x5C}; // Receiver 

  public:
    ESPNOWSender(); // Constructor
    ~ESPNOWSender(); // Destructor

    // Add public methods here
    void sendData(uint8_t header, GPIOStruct *data, size_t dataSize);
    static void receiveCallback(const uint8_t *macAddr, const uint8_t *data, int dataLen);
    void begin();
};

#endif // ESPNOW_Sender_h
