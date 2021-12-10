byte eingang;

#include <SoftwareSerial.h> 

SoftwareSerial mySerial (2,3);
void setup() {

mySerial.begin(1200);
Serial.begin(9600);
}

void loop() {

if (mySerial.available() > 0) {

  eingang = mySerial.read();

Serial.write(eingang);

}
}
