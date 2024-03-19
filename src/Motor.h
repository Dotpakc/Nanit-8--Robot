#include <Arduino.h>


#ifndef MOTOR_H
#define MOTOR_H

class Motor {
    public:
        Motor(int pin1, int pin2);
        void forward(int speed = 255);
        void backward(int speed = 255);
        void stop();
    private:
        int _pin1;
        int _pin2;
};

#endif // MOTOR_H




