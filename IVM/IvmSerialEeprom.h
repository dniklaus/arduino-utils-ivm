/*
 * IvmSerialEeprom.h
 *
 *  Created on: 23.01.2014
 *      Author: niklausd
 */

#ifndef IVMSERIALEEPROM_H_
#define IVMSERIALEEPROM_H_

#include "IF_IvmMemory.h"

class IvmSerialEeprom: public IF_IvmMemory
{
public:
  IvmSerialEeprom();
  virtual ~IvmSerialEeprom();

  /**
   *
   */
  void write(unsigned int address, unsigned char data);

  /**
   *
   */
  unsigned char read(unsigned int address);

private: // forbidden default functions
  IvmSerialEeprom& operator = (const IvmSerialEeprom& );  // assignment operator
  IvmSerialEeprom(const IvmSerialEeprom& src);            // copy constructor
};

#endif /* IVMSERIALEEPROM_H_ */
