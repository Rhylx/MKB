#ifndef BLUETOOTH_CONFIG_H
#define BLUETOOTH_CONFIG_H


// NEW BLE KEYBOARD LINK BLE SERVICE & CHARACTERISTICS  -- randomly generated UUID. DO NOT CHANGE.
#define UUID128_SVC_KEYBOARD_LINK             0xf9ed59d396fa4752a7dfb16d7b9e0443           // SERVICE TO BE RUN ON SLAVES. "CLIENT" TO RUN ON MASTER
#define UUID128_CHR_KEYBOARD_LAYERS           0xccccc76aa03d43f993ec2fc6d82a7902           // 1 Byte for Active Layer
#define UUID128_CHR_KEYBOARD_LAYER_REQUEST    0xae31cd09b0734df5b5bd20baaf18239c           // 1 Byte for request from Master to Slaves to change layer
#define UUID128_CHR_KEYBOARD_BUFFER           0x220f9018372a46da81d3cd196a57d5ab           // 7 Bytes for passing HID MODS and BUFFER from Slave to Master
#define UUID128_COUNT 4

// Set max power. Accepted values are: -40, -30, -20, -16, -12, -8, -4, 0, 4
#define DEVICE_POWER                        0                                          // Use 0.  This uses less power and allows for a longer battery life.

/*
  Power     mA    dbm
  -40
  -30
  -20
  -16
  -12
  -8
  -4
  0
  4
  8  only available for nrf52840
*/

// These can be modified.  Not sure of what values are allowed.
#define PNP_ID_VENDOR_ID_SOURCE             0x02                                       /**< Vendor ID Source. */
#define PNP_ID_VENDOR_ID                    0x1915                                     /**< Vendor ID. */
#define PNP_ID_PRODUCT_ID                   0xEEEE                                     /**< Product ID. */
#define PNP_ID_PRODUCT_VERSION              0x0001                                     /**< Product Version. */



#endif /* BLUETOOTH_CONFIG_H */
