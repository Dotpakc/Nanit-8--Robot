#include <Arduino.h>
#include <NanitLib.h>
#include <Servo.h>

#define PIR_PIN P9_3


Servo servo;


bool pir_state = false;

void pir_isr() {
  pir_state = true;
}



void setup() {
  Serial.begin(9600);
  Nanit_Base_Start();

  servo.attach(P9_4);
  servo.write(0);

  attachInterrupt(digitalPinToInterrupt(PIR_PIN), pir_isr, RISING);

}

void loop() {
  if (pir_state) {
    Serial.println("Motion detected");
    servo.write(180);
    delay(1000);
    servo.write(0);
    pir_state = false;
  }
}
