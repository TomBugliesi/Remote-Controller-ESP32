/*
  SerialUpdate.cpp - Library for Description
  Created by Tommaso Bugliesi, 03/08/2024.
  Brief description: The library allows to update the software parameters via serial interface.
*/

#include "SerialUpdate.h"
#include "ESPNOWSender.h"

extern ESPNOWSender espnow; 

SerialUpdate::SerialUpdate() {
  // Constructor implementation
  _inputString.reserve(200);  // Reserve 200 bytes for input string
}

SerialUpdate::~SerialUpdate() {
  // Destructor implementation
}

// Add public method implementations here
void SerialUpdate::update(){
  if (Serial.available() > 0) {
    char inChar = (char)Serial.read();
    if (inChar == '\n' || inChar == '\r') {
      if (_inputString.length() > 0) {
        handleSerialInput(_inputString);
        _inputString = "";
      }
    } else {
      _inputString += inChar;
    }
  }
}

// Add private method implementations here
void SerialUpdate::handleSerialInput(String input) {
  input.trim();  // Remove any leading/trailing whitespace
  if (_currentState == WAIT_FOR_COMMAND) {
    if (input.equalsIgnoreCase("PID")) {
      Serial.println("Entering PID calibration mode.");
      Serial.println("Use format <variable>=<value>. Available variable are Kp_Roll, Kd_Roll, Ki_Roll, Kp_Pitch, Kd_Pitch, Ki_Pitch");
      _currentState = UPDATE_VARIABLE;
    }
  } else if (_currentState == UPDATE_VARIABLE) {
    if (input.equalsIgnoreCase("exit")) {
      onExit();
    } else {
      updateVariable(input);
    }
  }
}

void SerialUpdate::updateVariable(String input) {
  int separatorIndex = input.indexOf('=');
  if (separatorIndex == -1) {
    Serial.println("Invalid format. Use <variable>=<value>.");
    return;
  }

  String variable = input.substring(0, separatorIndex);
  String value = input.substring(separatorIndex + 1);
  float newValue = value.toFloat();

  if (variable.equals("Kp_Roll")) {
    _motorStruct.KpRoll = newValue;
    Serial.print("Kp_Roll updated to ");
    Serial.println(newValue);
  } else if (variable.equals("Ki_Roll")) {
    _motorStruct.KiRoll = newValue;
    Serial.print("Ki_Roll updated to ");
    Serial.println(newValue);
  } else if (variable.equals("Kd_Roll")) {
    _motorStruct.KdRoll = newValue;
    Serial.print("Kd_Roll updated to ");
    Serial.println(newValue);
  } else if (variable.equals("Kp_Pitch")) {
    _motorStruct.KpPitch = newValue;
    Serial.print("Kp_Pitch updated to ");
    Serial.println(newValue);
  } else if (variable.equals("Kd_Pitch")) {
    _motorStruct.KdPitch = newValue;
    Serial.print("Kd_Pitch updated to ");
    Serial.println(newValue);
  } else if (variable.equals("Ki_Pitch")) {
    _motorStruct.KiPitch = newValue;
    Serial.print("Ki_Pitch updated to ");
    Serial.println(newValue);
  } else if (variable.equals("reset")) {
    _motorStruct.KpRoll = 0.0;
    _motorStruct.KdRoll = 0.0;
    _motorStruct.KiRoll = 0.0;
    _motorStruct.KpPitch = 0.0;
    _motorStruct.KdPitch = 0.0;
    _motorStruct.KiPitch = 0.0;

    // Complete reset by resetting state machine and sending values
    onExit();
    Serial.println("Reset completed");
  } else {
    Serial.println("Unknown variable.");
  }
}

void SerialUpdate::onExit(){
  Serial.println("Exiting calibration mode.");

  // Reset default state
  _currentState = WAIT_FOR_COMMAND;

  // Send PID calibration 
  espnow.sendData(0x02, &(_motorStruct), sizeof(_motorStruct));
  
  // Save Motor calibration internally 
  memcpy(&(globalStructPtr->motorData), &_motorStruct, sizeof(_motorStruct));
}