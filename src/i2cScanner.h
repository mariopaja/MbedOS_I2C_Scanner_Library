#ifndef I2CSCANNER_H
#define I2CSCANNER_H

#include "mbed.h"

class i2cScanner{
private:
	bool found = false;
	int numberOfDevices = 0;

protected:
	I2C* _I2C;

public:

	i2cScanner(PinName SDA, PinName SCL);
	i2cScanner(I2C& busI2C);

	void printAddress();

	int getNumberOfDevices();


};



#endif