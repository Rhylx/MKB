#include "advanced_keycodes.h"

#ifndef KEY_STATE
#define KEY_STATE

#define DOUBLETAP_TIME_LIMIT 700
#define TIME_TILL_HOLD 200
#define TIME_TILL_RELEASE 50

class KeyState
{
    public:
        KeyState();

        void press(unsigned long currentMillis);
        void clear(unsigned long currentMillis);

        void addMethod(uint8_t method);

        enum class State
        {
            RELEASED,       // simply released
            PRESSED,        // a simple press

            MT_TAPPED,      // a released press
            MT_HELD,        // a constant press

            DT_TAPPED,      // if a tap can't be doubled anymore
            DT_DOUBLETAPPED // two presses with a release/tap in between
        };

        State getState() const;

    private:
        bool canDoubletap;
        bool checkMT, checkDT;

        //std::array<5, bool> checkMethods;

        State state;
        unsigned long lastChanged;
};

#endif
