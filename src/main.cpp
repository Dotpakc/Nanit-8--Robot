#include <Arduino.h>
#include <NanitLib.h>
#include <Servo.h>

#define PIR_PIN P9_3
#define LDR_PIN P4_1

Servo servo;


void setup() {
  Serial.begin(9600);
  Nanit_Base_Start();

  servo.attach(P9_4);
  servo.write(0);

}



void loop() {
  if (digitalRead(PIR_PIN) && digitalRead(LDR_PIN)) {
    Serial.println("Motion detected");
    servo.write(180);
    delay(1000);
    servo.write(0);
  }
}
