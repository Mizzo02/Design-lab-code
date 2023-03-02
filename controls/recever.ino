#include <Arduino.h>

int value = 0;

void setup() {
// initialize serial communication at 9600 baud rate
Serial.begin(9600);
pinMode(13, OUTPUT);
pinMode(10, OUTPUT);
}

void loop() {
value = Serial.parseInt();


if(value == 4){
   digitalWrite(13, LOW);
   delay(500);
   digitalWrite(13, HIGH);
   delay(500);
   
}
else
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(10, HIGH);
}
