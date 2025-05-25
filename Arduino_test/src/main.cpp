#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("From Arduino Message.");

  delay(1000);
}
