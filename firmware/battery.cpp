#include "battery.h"

/**************************************************************************************************************************/
#if BLE_LIPO_MONITORING == 1
  BLEBas blebas;                                                                    // Battery Service

int readVBAT(void) {
  int raw;
  analogReference(AR_INTERNAL_3_0); // Set the analog reference to 3.0V (default = 3.6V)
  analogReadResolution(12);         // Set the resolution to 12-bit (0..4095) // Can be 8, 10, 12 or 14
  delay(1);                         // Let the ADC settle  OK since we are calling this from the long term monitoring loop
  raw = analogRead(VBAT_PIN);       // Get the raw 12-bit, 0..3000mV ADC value
  analogReference(AR_DEFAULT);      // Set the ADC back to the default settings - just in case we use it somewhere else
  analogReadResolution(10);         // Set the ADC back to the default settings - just in case we use it somewhere else
  return raw;
};

uint8_t mvToPercent(float mvolts) {
    uint8_t battery_level;

    if (mvolts >= 3000)
    {
        battery_level = 100;
    }
    else if (mvolts > 2900)
    {
        battery_level = 100 - ((3000 - mvolts) * 58) / 100;
    }
    else if (mvolts > 2740)
    {
        battery_level = 42 - ((2900 - mvolts) * 24) / 160;
    }
    else if (mvolts > 2440)
    {
        battery_level = 18 - ((2740 - mvolts) * 12) / 300;
    }
    else if (mvolts > 2100)
    {
        battery_level = 6 - ((2440 - mvolts) * 6) / 340;
    }
    else
    {
        battery_level = 0;
    }

    return battery_level;
}

void updateBattery(void)
{
    int vbat_raw = 0;
    uint8_t vbat_per =0;
    vbat_raw = readVBAT();                                // Get a raw ADC reading
    vbat_per = mvToPercent(vbat_raw * VBAT_MV_PER_LSB);       // Convert from raw mv to percentage (based on LIPO chemistry)
    blebas.notify(vbat_per);                                  // update the Battery Service.  Use notify instead of write to ensure that subscribers receive the new value.

                // Convert the raw value to compensated mv, taking the resistor-
                // divider into account (providing the actual LIPO voltage)
                // ADC range is 0..3000mV and resolution is 12-bit (0..4095),
                // VBAT voltage divider is 2M + 0.806M, which needs to be added back
                // float vbat_mv = (float)vbat_raw * VBAT_MV_PER_LSB * VBAT_DIVIDER_COMP;   // commented out since we don't use/display floating point value anywhere.
}
#endif
/**************************************************************************************************************************/
#if BLE_CR2032_MONITORING == 1

#endif
