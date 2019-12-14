#ifndef BLUETOOTH_H
#define BLUETOOTH_H
#include <bluefruit.h>
#include "firmware_config.h"
#include "bluetooth_config.h"
#undef min
#undef max

#include "KeyScanner.h"
#include "battery.h"



void setupBluetooth(void);
void startAdv(void);
void set_keyboard_led(uint16_t conn_handle, uint8_t led_bitmap);

void sendKeys(uint8_t currentReport[8]);
void sendRelease(uint8_t currentReport[8]);

#if BLE_PERIPHERAL ==1   | BLE_CENTRAL ==1
void sendlayer(uint8_t layer);
#endif

#if BLE_PERIPHERAL == 1
    void cccd_callback(uint16_t conn_hdl,BLECharacteristic* chr, uint16_t cccd_value)  ;
    void layer_request_callback (uint16_t conn_hdl,BLECharacteristic* chr, uint8_t* data, uint16_t len);
#endif


#if BLE_CENTRAL == 1
    void notify_callback(BLEClientCharacteristic* chr, uint8_t* data, uint16_t len);
    void scan_callback(ble_gap_evt_adv_report_t* report);
    void prph_connect_callback(uint16_t conn_handle);
    void prph_disconnect_callback(uint16_t conn_handle, uint8_t reason);
    void cent_connect_callback(uint16_t conn_handle);
    void cent_disconnect_callback(uint16_t conn_handle, uint8_t reason);
#endif

#endif
