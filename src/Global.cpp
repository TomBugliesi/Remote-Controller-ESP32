/*
  Global.cpp - Library for Description
  Created by Tommaso Bugliesi, 03/03/2024.
  Brief description: Global variables header file.
*/

#include "Global.h"

// Define the global pointer to GlobalData
GlobalStruct* globalStructPtr = nullptr;

void initGlobal() {
    if (!globalStructPtr) {
        globalStructPtr = new GlobalStruct;

        // Initialize globalDataPtr if necessary
        memset(globalStructPtr, 0, sizeof(globalStructPtr));
    }
}
