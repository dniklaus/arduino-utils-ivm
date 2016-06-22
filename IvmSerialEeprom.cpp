/*
 * IvmSerialEeprom.cpp
 *
 *  Created on: 23.01.2014
 *      Author: niklausd
 */

#include "EEPROM.h"

#include "IF_IvmMemory.h"
#include "IvmSerialEeprom.h"

IvmSerialEeprom::IvmSerialEeprom()
{ }

IvmSerialEeprom::~IvmSerialEeprom()
{ }

void IvmSerialEeprom::write(unsigned int address, unsigned char data)
{
  EEPROM.write(address, data);
}

unsigned char IvmSerialEeprom::read(unsigned int address)
{
  return EEPROM.read(address);
}
