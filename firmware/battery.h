#ifndef BATTERY_H
#define BATTERY_H
    #include <Arduino.h>
    #include <bluefruit.h>
    #include "firmware_config.h"
    #include "keyboard_config.h"

    #if BLE_LIPO_MONITORING == 1
        int readVBAT(void);
        uint8_t mvToPercent(float mvolts);
        void updateBattery(void);
    #endif
    #if BLE_CR2032_MONITORING == 1

    #endif
#endif
