#include <Arduino.h>

class Button
{
    public:
        Button(uint8_t iPin, bool iReversed = false);
        bool getValue();
        uint8_t pin;
        bool reversed;
};
