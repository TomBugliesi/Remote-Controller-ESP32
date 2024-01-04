#include <esp_now.h>
#include <WiFi.h>

void InitNOW(){

    // Init wifi
    WiFi.mode(WIFI_STA);
    WiFi.disconnect();

    // Init ESP-NOW
    if (esp_now_init() != ESP_OK){
        Serial.println("Error with ESP-NOW init");
    }

    Serial.print("Device MAC address: ");
    Serial.println(WiFi.macAddress());
}

void UpdateNOW(){
    delay(2000);
    // Init ESP-NOW
    if (esp_now_init() != ESP_OK){
        Serial.println("Error with ESP-NOW init");
    }

    Serial.print("Device MAC address: ");
    Serial.println(WiFi.macAddress());
}