/*
 * main.c
 *
 *  Created on: Apr 30, 2014
 *      Author: daniel
 */

#include <stdio.h>
#include <stdlib.h>
#include <avr/io.h>
#include "circuitpins.h"

void setup();

void setPorts(int PB, int PD);

int hsSettings();

int main() {
	setup();
	int blinks;
	long int timeon, timeoff;
	blinks = BLINKSDEF;
	timeon = TIMEONDEF;
	timeoff = TIMEOFFDEF;
	int hsset = hsSettings();
	switch(hsset) {
	case 4:
		blinks = BLINKS10;
		timeon = TIMEON10;
		timeoff = TIMEOFF10;
		break;
	case 5:
		blinks = BLINKS11;
		timeon = TIMEON11;
		timeoff = TIMEOFF11;
		break;
	case 8:
		blinks = BLINKS20;
		timeon = TIMEON20;
		timeoff = TIMEOFF20;
		break;
	case 9:
		blinks = BLINKS21;
		timeon = TIMEON21;
		timeoff = TIMEOFF21;
		break;
	case 10:
		blinks = BLINKS22;
		timeon = TIMEON22;
		timeoff = TIMEOFF22;
		break;
	case 12:
		blinks = BLINKS30;
		timeon = TIMEON30;
		timeoff = TIMEOFF30;
		break;
	case 13:
		blinks = BLINKS31;
		timeon = TIMEON31;
		timeoff = TIMEOFF31;
		break;
	case 14:
		blinks = BLINKS32;
		timeon = TIMEON32;
		timeoff = TIMEOFF32;
		break;
	case 15:
		blinks = BLINKS33;
		timeon = TIMEON33;
		timeoff = TIMEOFF33;
	}
	int level = 1;
	int PB, PD;
	while(level <= 16) {
		for(int i = 0; i < blinks; i++) {
			switch(level - 1) {
					case 0:
						PB = BANK_B_00;
						PD = BANK_D_00;
					break;
					case 1:
						PB = BANK_B_01;
						PD = BANK_D_01;
					break;
					case 2:
						PB = BANK_B_02;
						PD = BANK_D_02;
					break;
					case 3:
						PB = BANK_B_03;
						PD = BANK_D_03;
					break;
					case 4:
						PB = BANK_B_04;
						PD = BANK_D_04;
					break;
					case 5:
						PB = BANK_B_05;
						PD = BANK_D_05;
					break;
					case 6:
						PB = BANK_B_06;
						PD = BANK_D_06;
					break;
					case 7:
						PB = BANK_B_07;
						PD = BANK_D_07;
					break;
					case 8:
						PB = BANK_B_08;
						PD = BANK_D_08;
					break;
					case 9:
						PB = BANK_B_09;
						PD = BANK_D_09;
					break;
					case 10:
						PB = BANK_B_10;
						PD = BANK_D_10;
					break;
					case 11:
						PB = BANK_B_11;
						PD = BANK_D_11;
					break;
					case 12:
						PB = BANK_B_12;
						PD = BANK_D_12;
					break;
					case 13:
						PB = BANK_B_13;
						PD = BANK_D_13;
					break;
					case 14:
						PB = BANK_B_14;
						PD = BANK_D_14;
					break;
					case 15:
						PB = BANK_B_15;
						PD = BANK_D_15;
					break;
					case 16:
						PB = BANK_B_16;
						PD = BANK_D_16;
					break;
					default:
						PB = BANK_B_16;
						PD = BANK_D_16;
				}
				setPorts(PB, PD);
				TCNT1 = 0x0000;
				while(TCNT1 < timeon) {
				}
				switch(level) {
						case 0:
							PB = BANK_B_00;
							PD = BANK_D_00;
						break;
						case 1:
							PB = BANK_B_01;
							PD = BANK_D_01;
						break;
						case 2:
							PB = BANK_B_02;
							PD = BANK_D_02;
						break;
						case 3:
							PB = BANK_B_03;
							PD = BANK_D_03;
						break;
						case 4:
							PB = BANK_B_04;
							PD = BANK_D_04;
						break;
						case 5:
							PB = BANK_B_05;
							PD = BANK_D_05;
						break;
						case 6:
							PB = BANK_B_06;
							PD = BANK_D_06;
						break;
						case 7:
							PB = BANK_B_07;
							PD = BANK_D_07;
						break;
						case 8:
							PB = BANK_B_08;
							PD = BANK_D_08;
						break;
						case 9:
							PB = BANK_B_09;
							PD = BANK_D_09;
						break;
						case 10:
							PB = BANK_B_10;
							PD = BANK_D_10;
						break;
						case 11:
							PB = BANK_B_11;
							PD = BANK_D_11;
						break;
						case 12:
							PB = BANK_B_12;
							PD = BANK_D_12;
						break;
						case 13:
							PB = BANK_B_13;
							PD = BANK_D_13;
						break;
						case 14:
							PB = BANK_B_14;
							PD = BANK_D_14;
						break;
						case 15:
							PB = BANK_B_15;
							PD = BANK_D_15;
						break;
						case 16:
							PB = BANK_B_16;
							PD = BANK_D_16;
						break;
						default:
							PB = BANK_B_16;
							PD = BANK_D_16;
					}
					setPorts(PB, PD);
					TCNT1 = 0x0000;
					while(TCNT1 < timeoff) {
					}
		}
	level++;
	}
	while(1) {
	}
}

void setup() {
	DDRC = DIRECTION_C;
	DDRB = DIRECTION_B;
	DDRD = DIRECTION_D;
	setPorts(BANK_B_RESTE, BANK_D_RESTE);
	TCCR1B = CLOCK_SELECT;
}

void setPorts(int PB, int PD) {
	PORTB = PB;
	PORTD = PD;
}

int hsSettings() {
	int HS1 = PINC & HS1_MASK;
	int HS2 = (PINC & HS2_MASK) >> 2;
	switch(HS1) {
	case 0:
		HS1 = 0;
		break;
	case 1:
		HS1 = 2;
		break;
	case 2:
		HS1 = 1;
		break;
	case 3:
		HS1 = 3;
	}
	switch(HS2) {
	case 0:
		HS2 = 0;
		break;
	case 1:
		HS2 = 2;
		break;
	case 2:
		HS2 = 1;
		break;
	case 3:
		HS2 = 3;
	}
	int HHS, HS;
	if(HS1 > HS2) {
		HHS = HS1;
		HS = HS2;
	}
	else {
		HHS = HS2;
		HS = HS1;
	}
	return (HHS << 2) | (HS);
}
