# I2C Scanner Library

I2C Scanner is used to find the I2C addresses on MbedOS.<br/>
Library creates an I2C object and then rearches for I2C devices<br/>

## Installation

```bash
Import Library... -> Git or os.mbed.com URL
```

## Implementation Example

D14 -> SDA pin<br/>
D15 -> SCL pin

```C++
#include <mbed.h>
#include "i2cScanner.h"

I2C i2c(D14, D15); // SDA pin, SCL pin

int main()
{
    i2cScanner scanner(i2c);
    scanner.printAddress();  
}
```
or
```C++
#include <mbed.h>
#include "i2cScanner.h"

int main()
{
    i2cScanner scanner(D14, D15); // SDA pin, SCL pin
    scanner.printAddress();  
}
```


## Disclaimer
This code was tested ony on STM32 Nucleo-64 F446RE board

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
