#include <Arduino.h>

#include "Button.h"

Button::Button(uint8_t iPin, bool iReversed = false, bool pullUp = false)
{
    pin = iPin;
    reversed = iReversed;
    pinMode(pin, INPUT);
    if (pullUp)
        pinMode(pin, INPUT_PULLUP);
}

/**
 * Get the value of the button's pin
 * 
 * @return bool true if the button is pressed, false if else
 */
bool Button::getValue()
{
    byte state = reversed ? LOW : HIGH;
    return digitalRead(pin) == state;
}

int Button::getAnalogValue()
{
    return analogRead(pin);
}