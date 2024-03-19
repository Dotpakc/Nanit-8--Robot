#include <Arduino.h>
#include <NanitLib.h>

#include "Motor.h"


Motor m1(MOTOR1_A, MOTOR1_B);
Motor m2(MOTOR2_A, MOTOR2_B);



void setup() {
  Serial.begin(9600);
  Nanit_Base_Start();

  pinMode(MOTOR_ENABLE, OUTPUT);
 

  digitalWrite(MOTOR_ENABLE, HIGH);
}

void loop() {
  m1.forward(255);
  m2.forward(255);
  delay(1000);
  m1.stop();
  m2.stop();
  delay(1000);
  m1.backward(255);
  m2.backward(255);
  delay(1000);
  m1.stop();
  m2.stop();
  delay(1000);
}
