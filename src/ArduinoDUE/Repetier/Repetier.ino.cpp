# 1 "c:\\users\\touch_~1\\appdata\\local\\temp\\tmp6t7ni8"
#include <Arduino.h>
# 1 "D:/MM3/Repetier-Firmware/src/ArduinoDUE/Repetier/Repetier.ino"
# 361 "D:/MM3/Repetier-Firmware/src/ArduinoDUE/Repetier/Repetier.ino"
#include "Repetier.h"

#include <SPI.h>



#if UI_DISPLAY_TYPE == DISPLAY_ARDUINO_LIB



#endif
void setup();
void loop();
#line 375 "D:/MM3/Repetier-Firmware/src/ArduinoDUE/Repetier/Repetier.ino"
void setup()

{

    Printer::setup();

}



void loop()

{

    Commands::commandLoop();

}