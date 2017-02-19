#ifndef Switch_h
#define Switch_h
#include "Arduino.h"

class SwitchSensor
{
  public:
    SwitchSensor(int switchPin);
    bool hasChanged();
    int value;
   private:
    int _pin;
    int _prevVal;
};

#endif
