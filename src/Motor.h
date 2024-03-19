#include <Arduino.h>


class Motor {
    public:
        Motor(int pin1, int pin2);
        void forward(int speed = 255);
        void backward(int speed = 255);
        void stop();
    private:
        int _pin1;
        int _pin2;
}




