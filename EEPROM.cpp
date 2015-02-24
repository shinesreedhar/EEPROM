/*
  EEPROM.cpp - EEPROM library
  Copyright (c) 2014 Shine Sreedhar.  All right reserved.

*/

/******************************************************************************
 * Includes
 ******************************************************************************/

#include <avr/eeprom.h>
#include "Arduino.h"
#include "EEPROM.h"

/******************************************************************************
 * Definitions
 ******************************************************************************/

/******************************************************************************
 * Constructors
 ******************************************************************************/

/******************************************************************************
 * User API
 ******************************************************************************/

uint8_t EEPROMClass::read(int address)
{
	return eeprom_read_byte((unsigned char *) address);
}

void EEPROMClass::write(int address, uint8_t value)
{
	eeprom_write_byte((unsigned char *) address, value);
}

EEPROMClass EEPROM;
