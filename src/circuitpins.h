/*
 * circuitpins.h
 *
 *  Created on: Apr 30, 2014
 *      Author: daniel
 */

#ifndef CIRCUITPINS_H_
#define CIRCUITPINS_H_

/*
 * LED 1 ---> PORTB_0
 * LED 2 ---> PORTB_1
 * LED 3 ---> PORTB_2
 * LED 4 ---> PORTB_3
 * LED 5 ---> PORTB_4
 * LED 6 ---> PORTB_5
 * LED 7 ---> PORTB_6
 * LED 8 ---> PORTB_7
 * DIP1  ---> PINC_0
 * DIP2  ---> PINC_1
 * DIP3  ---> PINC_2
 * DIP4  ---> PINC_3
 * NC    ---> PINC_4
 * NC    ---> PINC_5
 * LED 9 ---> PORTD_0
 * LED10 ---> PORTD_1
 * LED11 ---> PORTD_2
 * LED12 ---> PORTD_3
 * LED13 ---> PORTD_4
 * LED14 ---> PORTD_5
 * LED15 ---> PORTD_6
 * LED16 ---> PORTD_7
 */
// Values for DDRx Registers
#define DIRECTION_C 0x00
#define DIRECTION_B 0xFF
#define DIRECTION_D 0xFF

// At Time 00
#define BANK_B_00 0x00
#define BANK_D_00 0x00

// At Time 01
#define BANK_B_01 0x01
#define BANK_D_01 0x00

// At Time 02
#define BANK_B_02 0x03
#define BANK_D_02 0x00

// At Time 03
#define BANK_B_03 0x07
#define BANK_D_03 0x00

// At Time 04
#define BANK_B_04 0x0F
#define BANK_D_04 0x00

// At Time 05
#define BANK_B_05 0x1F
#define BANK_D_05 0x00

// At Time 06
#define BANK_B_06 0x3F
#define BANK_D_06 0x00

// At Time 07
#define BANK_B_07 0x7F
#define BANK_D_07 0x00

// At Time 08
#define BANK_B_08 0xFF
#define BANK_D_08 0x00

// At Time 09
#define BANK_B_09 0xFF
#define BANK_D_09 0x01

// At Time 10
#define BANK_B_10 0xFF
#define BANK_D_10 0x03

// At Time 11
#define BANK_B_11 0xFF
#define BANK_D_11 0x07

// At Time 12
#define BANK_B_12 0xFF
#define BANK_D_12 0x0F

// At Time 13
#define BANK_B_13 0xFF
#define BANK_D_13 0x1F

// At Time 14
#define BANK_B_14 0xFF
#define BANK_D_14 0x3F

// At Time 15
#define BANK_B_15 0xFF
#define BANK_D_15 0x7F

// At Time 16
#define BANK_B_16 0xFF
#define BANK_D_16 0xFF

// Empty Rest
#define BANK_B_RESTE 0x00
#define BANK_D_RESTE 0x00

// PRESETS

#define CLOCK_SELECT 0x05
#define HS1_MASK 0x03
#define HS2_MASK 0x0C

// DEFAULT TIMING SETTINGS:
#define BLINKSDEF 10
#define TIMEONDEF 0x1F40  // 0x1F40 translates to 1 second on
#define TIMEOFFDEF 0x1B58 // 0x1B58 translates to about 7/8ths of a second off

// Timing Alterations
	//CHS, 0
	#define BLINKS10 8
	#define TIMEON10 TIMEONDEF
	#define TIMEOFF10 TIMEOFFDEF

	//CHS, CHS
	#define BLINKS11 9
	#define TIMEON11 0x1B58
	#define TIMEOFF11 0x1388

	//RHS, 0
	#define BLINKS20 5
	#define TIMEON20 TIMEONDEF
	#define TIMEOFF20 TIMEOFFDEF

	//RHS, CHS
	#define BLINKS21 6
	#define TIMEON21 TIMEOFFDEF
	#define TIMEOFF21 0x109A

	//RHS, RHS
	#define BLINKS22 5
	#define TIMEON22 0x1770
	#define TIMEOFF22 0x1482

	//VRHS, 0
	#define BLINKS30 4
	#define TIMEON30 TIMEON22
	#define TIMEOFF30 TIMEOFF22

	//VRHS, CHS
	#define BLINKS31 3
	#define TIMEON31 TIMEONDEF
	#define TIMEOFF31 0x157C

	//VRHS, RHS
	#define BLINKS32 3
	#define TIMEON32 TIMEON22
	#define TIMEOFF32 TIMEOFF22

	//VRHS, VRHS
	#define BLINKS33 2
	#define TIMEON33 TIMEONDEF
	#define TIMEOFF33 0x1996

#endif /* CIRCUITPINS_H_ */
