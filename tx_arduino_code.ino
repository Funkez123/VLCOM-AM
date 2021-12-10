#include <SoftwareSerial.h>

SoftwareSerial mySerial(12, 13); // RX, TX

void setup() {
  
  Serial.begin(9600);
  while (!Serial) {
    ; 
  }

  Serial.println("Verbindung hergestellt... ");

  mySerial.begin(1200);
  mySerial.println("Test Verbindung 1");
}
void loop() {

mySerial.begin(1200);
   mySerial.println("#   #");
   mySerial.println("  /  ");
   mySerial.println("  ~  ");
   mySerial.println("Verbindung Ende");
  delay(1000);
  
}                    

