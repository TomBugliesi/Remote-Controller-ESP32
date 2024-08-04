/*
  ESPNOWSender.cpp - Library for Description
  Created by Tommaso Bugliesi, 10/03/2024.
  Brief description: A library to activate the ESPNOW protocol for duplex communication with another ESP32 board.
*/

#include "ESPNOWSender.h"

ESPNOWSender::ESPNOWSender() {
  // Constructor implementation
}

ESPNOWSender::~ESPNOWSender() {
  // Destructor implementation
}

// Add private method implementations here

// Add public method implementations here
void ESPNOWSender::sendData(uint8_t header, GPIOStruct *data, size_t dataSize) {
  // Create data packet with header
  uint8_t packet[dataSize + 1];
  packet[0] = header; // Header indicating data type
  memcpy(packet + 1, data, dataSize); // Copy data after header
  
  // Send data
  esp_err_t result = esp_now_send(broadcastAddress, packet, dataSize + 1);
  if (result == ESP_OK) {
    // Serial.println("Data sent successfully");
  } else {
    // Serial.println("Error sending data");
  }
}

void ESPNOWSender::sendData(uint8_t header, MotorStruct *data, size_t dataSize) {
  // Create data packet with header
  uint8_t packet[dataSize + 1];
  packet[0] = header; // Header indicating data type
  memcpy(packet + 1, data, dataSize); // Copy data after header
  
  // Send data
  esp_err_t result = esp_now_send(broadcastAddress, packet, dataSize + 1);
  if (result == ESP_OK) {
    // Serial.println("Data sent successfully");
  } else {
    // Serial.println("Error sending data");
  }
}

void ESPNOWSender::receiveCallback(const uint8_t *macAddr, const uint8_t *data, int dataLen) {
  // Extract data type from header
  uint8_t dataType = data[0]; 

  // Handle different types of data
  switch(dataType) {
    case ESPNOW_DATA_00:
      // Data type 1 handling logic
      Serial.println("Received data type 1:");

      break;
    case ESPNOW_DATA_01:
      // Data type 2 handling logic
      Serial.println("Received data type 2:");
      
      break;
    default:
      // Unknown data type
      Serial.println("Received unknown data type");
  }
}

void ESPNOWSender::begin(){
  // Set device as a Wi-Fi Station
  WiFi.mode(WIFI_STA);

  // Print MAC address
  uint8_t macAddr[6];
  WiFi.macAddress(macAddr);
  
  Serial.print("MAC Address: ");
  for (int i = 0; i < 6; i++) {
    Serial.print(macAddr[i], HEX);
    if (i < 5) {
      Serial.print(":");
    }
  }
  Serial.println();
  
  // Initialize ESPNOW
  if (esp_now_init() != ESP_OK) {
    Serial.printf("Error initializing ESPNOW \n");
    return;
  }
  
  // Register peer
  esp_now_peer_info_t peerInfo;
  memcpy(peerInfo.peer_addr, broadcastAddress, sizeof(broadcastAddress));
  peerInfo.channel = 0;
  peerInfo.ifidx = WIFI_IF_STA;
  peerInfo.encrypt = false;

  while (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.printf("Failed to add peer \n");
    delay(100);
    //TODO: Add led blinking when no peer is found
  }

  // Register receive callback function
  esp_now_register_recv_cb(receiveCallback);
}
