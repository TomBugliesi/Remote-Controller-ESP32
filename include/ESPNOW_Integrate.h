//<File !Start!>
// FILE: [ESPNOW_integrate.h]
// Created by Tommaso Bugliesi TomTechHub 04/01/2024
//
// My device MAC address: E0:5A:1B:A6:18:CC
//<File !End!>

#ifndef _ESPNOW_INTEGRATE_H
#define _ESPNOW_INTEGRATE_H

// ------------------------------------------------
// Headers to include
// ------------------------------------------------
//<Includes !Start!>
#include <esp_now.h>
#include <WiFi.h>
//<Includes !End!>

//<Functions !Start!>
void InitNOW(){

    // Init wifi
    WiFi.mode(WIFI_STA);
    WiFi.disconnect();

    // Init ESP-NOW
    if (esp_now_init() != ESP_OK){
        Serial.println("Error with ESP-NOW init");
        return; 
    }

    /*
    // Add peer device (replace with the target device's MAC address)
    uint8_t otherDeviceMac[] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC};
    esp_now_peer_info_t peerInfo;
    memcpy(peerInfo.peer_addr, otherDeviceMac, 6);
    peerInfo.channel = 0;
    peerInfo.encrypt = false;

    if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("Failed to add peer");
    return;
    }
    */

    /*
    Serial.print("Device MAC address: ");
    Serial.println(WiFi.macAddress());
    */
}

void UpdateNOW(){

    Serial.print("Define UpdateNOW code");

    /*
    // Send data 
    uint8_t dataToSend[sizeof(vRemote_struct)];
    mecpy(dataTSend, &vRemote_struct, sizeof(vRemote_struct));

    // Send the data
    esp_now_send( <MAC_ADDRESS>, dataToSend, sizeof(vRemote_struct));
    */
}
//<Functions !End!>

#endif