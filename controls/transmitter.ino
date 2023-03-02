#include <Arduino.h>

int num = 4;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.write(num);
}
