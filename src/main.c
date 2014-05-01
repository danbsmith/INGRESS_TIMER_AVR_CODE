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

void setPorts(int PA, int PB, int PD);

int main() {
	setup();
	int overflows = 0; // for a 1/16th, need 2.23 full runs of timer at /1024 prescaler = 2 full and an extra 15415
	int level = 0;
	int PA = 0;
	int PB = 0;
	int PD = 0;
	while(1) {
		while((PINA & INPUT_MASK) > 0) {
			setPorts(BANK_A_RESTE, BANK_B_RESTE, BANK_D_RESTE);
			TCNT1 = 0x0000;
		}
		level = 0;
		while(level <= 16) {
			overflows = 0;
			switch(level) {
			case 0:
				PA = BANK_A_00;
				PB = BANK_B_00;
				PD = BANK_D_00;
			break;
			case 1:
				PA = BANK_A_01;
				PB = BANK_B_01;
				PD = BANK_D_01;
			break;
			case 2:
				PA = BANK_A_02;
				PB = BANK_B_02;
				PD = BANK_D_02;
			break;
			case 3:
				PA = BANK_A_03;
				PB = BANK_B_03;
				PD = BANK_D_03;
			break;
			case 4:
				PA = BANK_A_04;
				PB = BANK_B_04;
				PD = BANK_D_04;
			break;
			case 5:
				PA = BANK_A_05;
				PB = BANK_B_05;
				PD = BANK_D_05;
			break;
			case 6:
				PA = BANK_A_06;
				PB = BANK_B_06;
				PD = BANK_D_06;
			break;
			case 7:
				PA = BANK_A_07;
				PB = BANK_B_07;
				PD = BANK_D_07;
			break;
			case 8:
				PA = BANK_A_08;
				PB = BANK_B_08;
				PD = BANK_D_08;
			break;
			case 9:
				PA = BANK_A_09;
				PB = BANK_B_09;
				PD = BANK_D_09;
			break;
			case 10:
				PA = BANK_A_10;
				PB = BANK_B_10;
				PD = BANK_D_10;
			break;
			case 11:
				PA = BANK_A_11;
				PB = BANK_B_11;
				PD = BANK_D_11;
			break;
			case 12:
				PA = BANK_A_12;
				PB = BANK_B_12;
				PD = BANK_D_12;
			break;
			case 13:
				PA = BANK_A_13;
				PB = BANK_B_13;
				PD = BANK_D_13;
			break;
			case 14:
				PA = BANK_A_14;
				PB = BANK_B_14;
				PD = BANK_D_14;
			break;
			case 15:
				PA = BANK_A_15;
				PB = BANK_B_15;
				PD = BANK_D_15;
			break;
			case 16:
				PA = BANK_A_16;
				PB = BANK_B_16;
				PD = BANK_D_16;
			break;
			}
			setPorts(PA, PB, PD);
			while(overflows < 2) {
				while(TCNT1 < 0xFFFF) {
				}
				TCNT1 = 0x0000;
				overflows++;
			}
			while(TCNT1 < 0x3C37) {
			}
			TCNT1 = 0x0000;
		}
	}
	return 0;
}

void setup() {
	DDRA = DIRECTION_A;
	DDRB = DIRECTION_B;
	DDRD = DIRECTION_D;
	setPorts(BANK_A_RESTE, BANK_B_RESTE, BANK_D_RESTE);
	TCCR1B = CLOCK_SELECT;
}

void setPorts(int PA, int PB, int PD) {
	PORTA = PA;
	PORTB = PB;
	PORTD = PD;
}
