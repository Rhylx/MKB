/*
These defines map the AVR-based ports of the Arduino Pro to the NRF52832 GPIO pins.
This makes it simpler to migrate from the Arduino Pro Micro to the BlueMicro.
*/

#ifndef AVR_MAPPING_H
#define AVR_MAPPING_H

#define D3      17  //
#define D2      7   //
#define D1      25  //sda
#define D0      26  //scl
#define D4      27
#define C6      28
#define D7      29
#define E6      30
#define B4      15
#define B5      16

#define F4      5
#define F5      4
#define F6      3
#define F7      2
#define B1      12  //sck
#define B3      14  //miso
#define B2      13  //mosi
#define B6      11

#define BLUEMICRO 0
#define BLUEMACRO 1

/*
Common Defines.
*/
// ToDo: Move these defines to a more logical location.

#define COL2ROW       0
#define ROW2COL       1

#define TEST 0
#define LEFT 1
#define RIGHT 2
#define MASTER 3

#endif /* AVR_MAPPING_H */
