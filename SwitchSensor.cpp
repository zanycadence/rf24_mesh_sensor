#include "Arduino.h"
#include "SwitchSensor.h"

SwitchSensor::SwitchSensor(int pin)
{
  pinMode(pin, INPUT);
  _pin = pin;
  _prevVal = digitalRead(_pin);
}

bool SwitchSensor::hasChanged()
{
  if (digitalRead(_pin) == _prevVal)
  {
    return false;
  } else {
    value = !_prevVal;
    _prevVal = !_prevVal;
    return true;
  }
}

