/*
  GUIupdate.cpp - Library for Description
  Created by Tommaso Bugliesi, 01/08/2024.
  Brief description: The library allows to use the GUI.
*/

#include "GUIupdate.h"
#include "Global.h"

enum {E_PG_MAIN,E_PG2,E_PG3,E_PG5,E_POP_KEYPAD_NUM};

GUIupdate::GUIupdate() {
  // Constructor implementation
}

GUIupdate::~GUIupdate() {
  // Destructor implementation
}

// Add public method implementations here
void GUIupdate::update(gslc_tsGui *m_gui){
  buttonStateDefine();
  executeAction();

  switch (_level1State){
    case LV1_MAIN_MENU:
      gslc_SetPageCur(m_gui,E_PG_MAIN);
      break;
    case LV1_DATA_MENU:
      gslc_SetPageCur(m_gui,E_PG2);
      break;
    case LV1_PID_MENU:
      gslc_SetPageCur(m_gui,E_PG3);
      break;
    case lv1_REMOTE_MENU:
      gslc_SetPageCur(m_gui,E_PG5);
      break;
  }
}
// Add private method implementations here
void GUIupdate::buttonStateDefine(){
  _b1Pressed = globalStructPtr->gpioData.B1_In;
  _b2Pressed = globalStructPtr->gpioData.B2_In;

  // Handle button 1
  if (_b1Pressed) {
    if (_b1State == IDLE) {
      _b1State = PRESSED;
      _b1PressTime = millis();
    }
    else if ((_b1State == PRESSED) && (millis()-_b1PressTime >= LONG_PRESS_DURATION)) {
      _b1State = LONG_PRESSED;
    }
    else if (_b1State == SHORT_PRESSED){
      _b1State = IDLE; // Very unlucky situation
    }
    else { // LONG_PRESSED still active
      // Do nothing: state will remain LONG_PRESSED. Flags for action completetion required
    }
  } 
  else if (!_b1Pressed && (_b1State == PRESSED)){
    if (millis()-_b1PressTime > SHORT_PRESS_DURATION){
      _b1State = SHORT_PRESSED;
    }
  }
  else {
    _b1State = IDLE;
  }

  // Handle button 2
  if (_b2Pressed) {
    if (_b2State == IDLE) {
      _b2State = PRESSED;
      _b2PressTime = millis();
    }
    else if ((_b2State == PRESSED) && (millis()-_b2PressTime >= LONG_PRESS_DURATION)) {
      _b2State = LONG_PRESSED;
    }
    else if (_b2State == SHORT_PRESSED){
      _b2State = IDLE; // Very unlucky situation
    }
    else { // LONG_PRESSED still active
      // Do nothing: state will remain LONG_PRESSED. Flags for action completetion required
    }
  } 
  else if (!_b2Pressed && (_b2State == PRESSED)){
    if (millis()-_b2PressTime > SHORT_PRESS_DURATION){
      _b2State = SHORT_PRESSED;
    }
  }
  else {
    _b2State = IDLE;
  }
  // printf("Button 1 state is %d\n",_b1State);
  // printf("Button 1 state is %d\n",_b2State);
}

void GUIupdate::buttonOneAction(){
  switch (_level1State){
    case LV1_MAIN_MENU:
      // Main menu actions
      if (_b2State==SHORT_PRESSED){
        _level1State = LV1_DATA_MENU;
      }
      else if (_b2State==LONG_PRESSED){
        // Do nothing
      }
      break;

    case LV1_DATA_MENU:
      // Main menu actions
      if (_b2State==SHORT_PRESSED){
        _level1State = LV1_PID_MENU;
      }
      else if (_b2State==LONG_PRESSED){
        // Do nothing
      }
      break;

    case LV1_PID_MENU:
      // Main menu actions
      if (_b2State==SHORT_PRESSED){
        _level1State = LV1_MAIN_MENU;
      }
      else if (_b2State==LONG_PRESSED){
        // Do nothing
      }
      break;
  }
}

void GUIupdate::executeAction(){
  // _action1Completed is resetted when both buttons are released
  if (_b1Pressed & !_b2Pressed){
    if (!_action1Completed){
      buttonOneAction();
    }
  }
  else if (!_b1Pressed & _b2Pressed){
    // _action2Completed is resetted when both buttons are released
    if (!_action2Completed){
      // buttonTwoAction();
    }
  }
  else if (_b1Pressed & _b2Pressed){
    // Do nothing: the user must release at least one button
  }
  else if (!_b1Pressed & !_b2Pressed){
    // Reset action state to allow the next action 
    _action1Completed = 0;
    _action2Completed = 0;
  }
}

// TODO: update values in the GUI, send values to the drone when confirmed, receive the value from the drone upon request
