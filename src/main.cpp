#include <Arduino.h>
#include <NanitLib.h>




void setup() {
  Serial.begin(9600);
  Nanit_Base_Start();

  pinMode(MOTOR_ENABLE, OUTPUT);
  pinMode(MOTOR1_A, OUTPUT);
  pinMode(MOTOR1_B, OUTPUT);
  pinMode(MOTOR2_A, OUTPUT);
  pinMode(MOTOR2_B, OUTPUT);

  digitalWrite(MOTOR_ENABLE, HIGH);
}

void loop() {
  digitalWrite(MOTOR1_A, HIGH);
  digitalWrite(MOTOR1_B, LOW);
  digitalWrite(MOTOR2_A, HIGH);
  digitalWrite(MOTOR2_B, LOW);
  delay(1000);

}
