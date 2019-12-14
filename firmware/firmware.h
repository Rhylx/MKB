#ifndef FIRMWARE_H
#define FIRMWARE_H
#undef min
#undef max
#include "firmware_config.h"
#include "bluetooth_config.h"
#include "KeyScanner.h"
#include "keymap.h"
#include "sleep.h"
#include "bluetooth.h"
#include "battery.h"
#include "gpio.h"

void setupMatrix(void);
void scanMatrix(void);
void sendKeyPresses(void);
void monitoringloop(void);
void keyscanningloop(void);

enum states_monitor_modes {
  STATE_BOOT_INITIALIZE = 0x00,
  STATE_BOOT_MODE,
  STATE_BOOT_CLEAR_BONDS,
  STATE_BOOT_SERIAL_DFU,
  STATE_BOOT_WIRELESS_DFU,
  STATE_MONITOR_MODE,
  STATE_BOOT_UNKNOWN,
  };

#endif /* FIRMWARE_H */
