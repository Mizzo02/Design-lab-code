//converts the data from the serial port to an array of characters

#define LF          0x0A 
#include <SoftwareSerial.h>

SoftwareSerial HC12(10, 11);
char angle_str[10]; 
int idx; 

void setup() {
    Serial.begin(9600);
    HC12.begin(9600);

    idx = 0;
}

void loop() {

    if (HC12.available() > 0) {
    angle_str[idx] = HC12.read();
    if (angle_str[idx] == LF) {
        Serial.print("Received new angle: ");
        angle_str[idx-1] = 0;
        Serial.println(angle_str);
        idx = -1;
        }
    idx++;
    }
}
