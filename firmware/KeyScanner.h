#include <utility>
#include <cstdint>
#include <vector>
#include <algorithm>

#include "hid_keycodes.h"
#include "keyboard_config.h"
#include "firmware_config.h"
#include "keymap.h"
#include "KeyState.h"

#ifndef KEYSCANNER_H
#define KEYSCANNER_H

class KeyScanner {
    public:
        KeyScanner();

        static bool scanMatrix(const int& currentState,unsigned long millis, const int& row, const int& col);
        static void updateRemoteReport(uint8_t data0 , uint8_t data1, uint8_t data2,uint8_t data3, uint8_t data4, uint8_t data5,uint8_t data6);
        static void updateRemoteLayer(uint8_t data0);
        static bool getReport();
        static unsigned long getLastPressed();
        static bool layerChanged;
        static bool reportEmpty;
        static uint8_t localLayer;
        static uint8_t layerMode;
        static uint8_t currentReport[8];

    private:
        static void resetReport();
        static void updateBuffer(uint8_t layer);
        static bool updateLayer();
        static bool updateModifiers();
        static void copyRemoteReport();
        static void resetRemoteReport();

        static uint8_t remoteReport[8];
        static unsigned long timestamps[MATRIX_ROWS][MATRIX_COLS];
        static unsigned long lastPressed;

        static uint8_t remoteLayer;
        static uint8_t currentMod;
        static uint8_t remoteMod;
        static uint8_t bufferposition;

        static std::vector<uint16_t> activeKeys;
        static std::vector<uint16_t> macroBuffer;
        static std::vector<uint16_t> toggleBuffer;
        static std::vector<uint16_t> leaderBuffer;
        static std::vector<uint16_t> oneshotBuffer;
};
#endif /* KEYSCANNER_H */
