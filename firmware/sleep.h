#ifndef SLEEP_H
#define SLEEP_H
#include <Arduino.h>
#include <bluefruit.h>
#include "keyboard_config.h"
#include "firmware_config.h"
// Keyboard Matrix
extern byte rows[]  ;      // Contains the GPIO Pin Numbers defined in keyboard_config.h
extern byte columns[] ;     // Contains the GPIO Pin Numbers defined in keyboard_config.h

void pinModeSense( uint32_t ulPin, uint32_t ulMode );
void setupWakeUp(void);
void gotoSleep(unsigned long timesincelastkeypress,bool connected);

#endif
