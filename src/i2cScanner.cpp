#include "i2cScanner.h"
#include "mbed.h"



i2cScanner::i2cScanner(PinName sda, PinName scl) {
	_I2C = new I2C(sda, scl);
}

i2cScanner::i2cScanner(I2C& busI2C) {
	_I2C = &busI2C;
}

void printAddress(){
	for (int address = 0; address < 127; address++)
	{
		if (!i2c.write(address << 1, NULL, 0)){ // 0 returned is ok
			printf("I2C device found at address 0x%02X (0x%02X in 8-bit)\n", address, address << 1);
			//numberOfDevices++;
			//found = true;
		}
	}
	//if(!found){
	//	printf("No device found");
	//}
}
/*
int getNumberOfDevices(){
	return numberOfDevices;
}*/