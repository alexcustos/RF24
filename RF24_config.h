/*
 Copyright (C) 2011 J. Coliz <maniacbug@ymail.com>

 Modified by Aleksandr Borisenko to make it compile without arduino core.
 NOTE: Only the ATmega328P is supported. CE and CSN PINs are hardcoded to PB1 and PB2 respectively.

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */

 /* spaniakos <spaniakos@gmail.com>
  Added __ARDUINO_X86__ support
*/

#ifndef __RF24_CONFIG_H__
#define __RF24_CONFIG_H__

#include <avr/pgmspace.h>
#define PRIPSTR "%S"

/*** USER DEFINES:  ***/
//#define FAILURE_HANDLING
//#define SERIAL_DEBUG
#define MINIMAL

#define rf24_max(a, b) (a > b ? a : b)
#define rf24_min(a, b) (a < b ? a : b)

#define RF24_SPI_TRANSACTIONS

// RF modules support 10 Mhz SPI bus speed
const uint32_t RF24_SPI_SPEED = 10000000;

#ifdef SERIAL_DEBUG
#define IF_SERIAL_DEBUG(x) ({x;})
#else
#define IF_SERIAL_DEBUG(x)
#endif

#endif // __RF24_CONFIG_H__
