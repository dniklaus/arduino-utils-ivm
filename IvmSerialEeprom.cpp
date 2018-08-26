/*
 * IvmSerialEeprom.cpp
 *
 *  Created on: 23.01.2014
 *      Author: niklausd
 */

#if defined (ARDUINO_ARCH_SAMD) && defined (__SAMD21G18A__) // Adafruit Feather M0
#else
  #include "EEPROM.h"
#endif


#include "IF_IvmMemory.h"
#include "IvmSerialEeprom.h"

IvmSerialEeprom::IvmSerialEeprom()
{ }

IvmSerialEeprom::~IvmSerialEeprom()
{ }

void IvmSerialEeprom::write(unsigned int address, unsigned char data)
{
#if defined (ARDUINO_ARCH_SAMD) && defined (__SAMD21G18A__) // Adafruit Feather M0
#else
  EEPROM.write(address, data);
#endif
}

unsigned char IvmSerialEeprom::read(unsigned int address)
{
  unsigned char data = 0;
#if defined (ARDUINO_ARCH_SAMD) && defined (__SAMD21G18A__) // Adafruit Feather M0
#else
  data = EEPROM.read(address);
#endif
  return data;
}
