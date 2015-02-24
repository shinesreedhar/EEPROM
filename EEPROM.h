/*
  EEPROM.h - EEPROM library
  Copyright (c) Shine Sreedhar.  All right reserved.

 
*/

#ifndef EEPROM_h
#define EEPROM_h

#include <inttypes.h>

class EEPROMClass
{
  public:
    uint8_t read(int);
    void write(int, uint8_t);
};

extern EEPROMClass EEPROM;

#endif

