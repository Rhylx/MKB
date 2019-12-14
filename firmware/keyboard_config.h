#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
/*
#define COL2ROW       1
#define ROW2COL       0

#define LEFT 0
#define RIGHT 1
#define MASTER 2
*/
#define KEYBOARD_SIDE MASTER

#define DEVICE_NAME_M                         "Leon"                          /**< Name of device. Will be included in the advertising data. */

#define DEVICE_MODEL                        "Leon"                          /**< Name of device. Will be included in the advertising data. */

#define MANUFACTURER_NAME                   "SouthpawDesign"                      /**< Manufacturer. Will be passed to Device Information Service. */

// Set max power. Accepted values are: -40, -30, -20, -16, -12, -8, -4, 0, 4
///#define DEVICE_POWER 0
//#define PNP_ID_VENDOR_ID_SOURCE             0x02                                       /**< Vendor ID Source. */
//#define PNP_ID_VENDOR_ID                    0x1915                                     /**< Vendor ID. */
//#define PNP_ID_PRODUCT_ID                   0xEEEE                                     /**< Product ID. */
//#define PNP_ID_PRODUCT_VERSION              0x0001                                     /**< Product Version. */

/*
#define DEBUG_SERIAL 0

#if KEYBOARD_SIDE == LEFT
#define BLE_HID 1
#define BLE_CENTRAL 1
#define BLE_PERIPHERAL 0
#define BLE_PAIRS 1
#define PERIPHERAL_COUNT 1
#define CENTRAL_COUNT 1
#endif
#if KEYBOARD_SIDE == RIGHT
#define BLE_HID 0
#define BLE_CENTRAL 0
#define BLE_PERIPHERAL 1
#define BLE_PAIRS 1
#define PERIPHERAL_COUNT 1
#define CENTRAL_COUNT 0
#endif
#if KEYBOARD_SIDE == MASTER
#define BLE_CENTRAL 0
#define BLE_PERIPHERAL 0
#define BLE_PAIRS 0
#define BLE_HID 1
#define PERIPHERAL_COUNT 1
#define CENTRAL_COUNT 0
#endif
*/

/* HARDWARE DEFINITION*/
/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { 3, 14, 13, 11}
#define MATRIX_COL_PINS {5, 4, 16, 15, 30, 29, 28 ,27, 26, 25 , 8, 6}
#define UNUSED_PINS {}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCETIME 15


#define KEYMAP( \
    A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, \
    B1, B2, B3, B4, B5, B6, B7, B8, B9, B10, B11, B12, \
    C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, \
    D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12 \
    ) { \
        {A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12}, \
        {B1, B2, B3, B4, B5, B6, B7, B8, B9, B10, B11, B12}, \
        {C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12}, \
        {D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12} \
    }



#endif /* KEYBOARD_CONFIG_H */
