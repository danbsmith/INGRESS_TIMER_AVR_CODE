/*
 * circuitpins.h
 *
 *  Created on: Apr 30, 2014
 *      Author: daniel
 */

#ifndef CIRCUITPINS_H_
#define CIRCUITPINS_H_

/*
 * LED 2 ---> PORTA_2
 * PUSH1 ---> PINA_1
 * LED 3 ---> PORTA_0
 * LED 4 ---> PORTB_7
 * LED 5 ---> PORTB_6
 * LED 6 ---> PORTB_5
 * LED 7 ---> PORTD_6
 * LED 8 ---> PORTB_4
 * LED 9 ---> PORTD_5
 * LED10 ---> PORTB_3
 * LED11 ---> PORTD_4
 * LED12 ---> PORTB_2
 * LED13 ---> PORTD_3
 * LED14 ---> PORTB_1
 * LED15 ---> PORTD_2
 * LED16 ---> PORTB_0
 * LED17 ---> PORTD_1
 * LED18 ---> PORTD_0
 */
// Values for DDRx Registers
#define DIRECTION_A 0x07
#define DIRECTION_B 0xFF
#define DIRECTION_D 0x7F

// At Time 00
#define BANK_A_00 0x00
#define BANK_B_00 0x00
#define BANK_D_00 0x01

// At Time 01
#define BANK_A_01 0x02
#define BANK_B_01 0x00
#define BANK_D_01 0x01

// At Time 02
#define BANK_A_02 0x03
#define BANK_B_02 0x00
#define BANK_D_02 0x01

// At Time 03
#define BANK_A_03 0x07
#define BANK_B_03 0x80
#define BANK_D_03 0x01

// At Time 04
#define BANK_A_04 0x07
#define BANK_B_04 0xC0
#define BANK_D_04 0x01

// At Time 05
#define BANK_A_05 0x07
#define BANK_B_05 0xE0
#define BANK_D_05 0x01

// At Time 06
#define BANK_A_06 0x07
#define BANK_B_06 0xE0
#define BANK_D_06 0x41

// At Time 07
#define BANK_A_07 0x07
#define BANK_B_07 0xF0
#define BANK_D_07 0x41

// At Time 08
#define BANK_A_08 0x07
#define BANK_B_08 0xF0
#define BANK_D_08 0x61

// At Time 09
#define BANK_A_09 0x07
#define BANK_B_09 0xF8
#define BANK_D_09 0x61

// At Time 10
#define BANK_A_10 0x07
#define BANK_B_10 0xF8
#define BANK_D_10 0x71

// At Time 11
#define BANK_A_11 0x07
#define BANK_B_11 0xFC
#define BANK_D_11 0x71

// At Time 12
#define BANK_A_12 0x07
#define BANK_B_12 0xFC
#define BANK_D_12 0x79

// At Time 13
#define BANK_A_13 0x07
#define BANK_B_13 0xFE
#define BANK_D_13 0x79

// At Time 14
#define BANK_A_14 0x07
#define BANK_B_14 0xFE
#define BANK_D_14 0x7D

// At Time 15
#define BANK_A_15 0x07
#define BANK_B_15 0xFF
#define BANK_D_15 0x7D

// At Time 16
#define BANK_A_16 0x07
#define BANK_B_16 0xFF
#define BANK_D_16 0x7E

// Empty Rest
#define BANK_A_RESTE 0x02
#define BANK_B_RESTE 0x00
#define BANK_D_RESTE 0x00

// PRESETS

#define CLOCK_SELECT 0x05
#define INPUT_MASK 0x02

#endif /* CIRCUITPINS_H_ */
