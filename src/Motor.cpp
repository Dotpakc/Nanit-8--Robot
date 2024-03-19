#include "Motor.h"



Motor::Motor(int pin1, int pin2) {
    _pin1 = pin1;
    _pin2 = pin2;
    pinMode(_pin1, OUTPUT);
    pinMode(_pin2, OUTPUT);
};

void Motor::forward(int speed) {
    analogWrite(_pin1, speed);
    digitalWrite(_pin2, LOW);
};

void Motor::backward(int speed) {
    analogWrite(_pin2, speed);
    digitalWrite(_pin1, LOW);
};

void Motor::stop() {
    digitalWrite(_pin1, LOW);
    digitalWrite(_pin2, LOW);
};


