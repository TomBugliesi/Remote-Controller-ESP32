/*
  SerialUpdate.h - Library for Description
  Created by Tommaso Bugliesi, 03/08/2024.
  Brief description: The library allows to update the software parameters via serial interface.
*/

#ifndef SerialUpdate_h
#define SerialUpdate_h

#include <Arduino.h>
#include "Global.h"

class SerialUpdate {
  public:
    SerialUpdate(); // Constructor
    ~SerialUpdate(); // Destructor

    // Add public methods here
    void update();

  private:
    MotorStruct _motorStruct;

    enum State {
      WAIT_FOR_COMMAND,
      WAIT_FOR_VARIABLE,
      UPDATE_VARIABLE
    };

    uint8_t _currentState = WAIT_FOR_COMMAND;
    String  _inputString ="";
    String  _currentVariable="";

    // Add private methods here
    void handleSerialInput(String input);
    void updateVariable(String input);
    void onExit();
};

#endif // SerialUpdate_h
