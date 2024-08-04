/*
  GUIupdate.h - Library for Description
  Created by Tommaso Bugliesi, 01/08/2024.
  Brief description: The library allows to use the GUI.
*/

#ifndef GUIupdate_h
#define GUIupdate_h

#include <Arduino.h>
#include "GUIslice.h"
#include "GUIslice_drv.h"

// Button states
enum ButtonState { 
  IDLE,
  PRESSED, 
  SHORT_PRESSED,
  LONG_PRESSED 
};

// Menu states
enum Level1 { 
  LV1_MAIN_MENU, 
  LV1_DATA_MENU, 
  LV1_PID_MENU,
  lv1_REMOTE_MENU
};

class GUIupdate {
  public:
    GUIupdate(); // Constructor
    ~GUIupdate(); // Destructor

    // Add public methods here
    void update(gslc_tsGui *m_gui);

  private:   
    // Timers for long press detection
    unsigned long _b1PressTime = 0, _b2PressTime = 0;
    const unsigned long SHORT_PRESS_DURATION = 50; // 0.05 seconds
    const unsigned long LONG_PRESS_DURATION = 900; // 0.9 seconds

    // Button state
    bool _b1Pressed = 0;
    uint8_t _b1State = 0;

    bool _b2Pressed = 0;
    uint8_t _b2State = 0;

    // Action state
    bool _action1Completed = 0;
    bool _action2Completed = 0;

    // Level 1, 2 and 3
    uint8_t _level1State = LV1_MAIN_MENU;

    uint8_t _level1Max = 3;

    // Add private variables and methods here
    
    // Define for each button its state
    void buttonStateDefine();

    // Execute action based on conditions
    void executeAction();

    // Perform action depeding on button 1 state
    void buttonOneAction();

    // // Perform action depeding on button 2 state
    // void ButtonTwoAction();
    
};

#endif // GUIupdate_h
