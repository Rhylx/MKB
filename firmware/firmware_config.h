#ifndef FIRMWARE_CONFIG_H
#define FIRMWARE_CONFIG_H

#include "avr_mapping.h"
#include "keyboard_config.h"

#if KEYBOARD_SIDE == MASTER
#define BLE_PAIRS 0
#define BLE_HID 1
#ifndef PERIPHERAL_COUNT
  #define PERIPHERAL_COUNT 1
#endif
#define CENTRAL_COUNT 0
#define MATRIX_SCAN 1
#define SEND_KEYS 1
#define DEVICE_NAME DEVICE_NAME_M
#elif KEYBOARD_SIDE == TEST
#define BLE_CENTRAL 0  ///
#define BLE_PERIPHERAL 0 ///
#define BLE_PAIRS 0  /// NOT SURE WHAT THIS ACTIVATES
#define BLE_HID 1 //1 //
#define PERIPHERAL_COUNT 1 //1
#define CENTRAL_COUNT 0
#define MATRIX_SCAN 1 // 1
#define SEND_KEYS 1 // 1 //
#define DEVICE_NAME DEVICE_NAME_M
#endif

//set default modes for the halves
#ifndef KEYBOARD_MODE

#define KEYBOARD_MODE MASTER //MASTER defaults to master (only one keyboard)

#endif /* ifndef KEYBOARD_MODE */

#if KEYBOARD_MODE == DEFAULT
#define BLE_HID 1
#define BLE_CENTRAL 1
#define CENTRAL_COUNT 1
#define BLE_PERIPHERAL 0
#elif KEYBOARD_MODE == SLAVE
#define BLE_HID 0
#define BLE_CENTRAL 0
#define CENTRAL_COUNT 0
#define BLE_PERIPHERAL 1
#elif KEYBOARD_MODE == MASTER
#define BLE_HID 1
#define BLE_CENTRAL 0
#define CENTRAL_COUNT 0
#define BLE_PERIPHERAL 0
#endif /* KEYBOARD_MODE */

#ifndef BOOT_MODE_COMMANDS
#define BOOT_MODE_COMMANDS {{KC_SPACE, STATE_MONITOR_MODE},{ KC_B,  STATE_BOOT_CLEAR_BONDS },{ KC_F, STATE_BOOT_SERIAL_DFU},{ KC_W, STATE_BOOT_WIRELESS_DFU}}
#define BOOT_MODE_COMMANDS_COUNT 4
#endif

#ifndef BOOT_MODE_DELAY
#define BOOT_MODE_DELAY  500
#endif

#ifndef DEBOUNCETIME
#define DEBOUNCETIME 10
#endif

#ifndef HIDREPORTINGINTERVAL
#define HIDREPORTINGINTERVAL 1
#endif

// Battery Service definitions.

#ifndef BLE_LIPO_MONITORING
#define BLE_LIPO_MONITORING 1
#endif



#define SLEEPING_DELAY 30000              // when it's not connected, 30 seconds is good.
#define SLEEPING_DELAY_CONNECTED 600000   // 2 minutes is way too fast and really ennoying. making it 10 minutes
#define SLEEP_ACTIVE 1                    // 1 = it will go to sleep. 0 = sleep will not be activated.

#define DEFAULT_PWM_VALUE 1500            // PWM intensity
#define PWM_TOUCH_INTERVAL 1000           // detection time since last keypress.

#define VBAT_PIN          (A7)
#define VBAT_MV_PER_LSB   (0.73242188F)   // 3.0V ADC range and 12-bit ADC resolution = 3000mV/4096
#define VBAT_DIVIDER      (0.71275837F)   // 2M + 0.806M voltage divider on VBAT = (2M / (0.806M + 2M))
#define VBAT_DIVIDER_COMP (1.403F)        // Compensation factor for the VBAT divider

#endif /* FIRMWARE_CONFIG_H */
