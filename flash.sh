#!/bin/bash
sudo avrdude -pm328 -cusbtiny -u -Uflash:w:Release/INGRESS_TIMER_SOURCE.hex:a -Ulfuse:w:0xe2:m -Uhfuse:w:0xff:m -Uefuse:w:0x07:m