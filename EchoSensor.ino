#include <NewPing.h>
int d1 = 6;
int d2 = 11;
int d3 = 10;
int d4 = 9;
int d5 = 8;
int d6 = 7;
int EchoPin = 5;
int TrigPin = 12;
int MAX_DISTANCE = 200; // w cent

NewPing sonar( TrigPin, EchoPin, MAX_DISTANCE);

void setup() {
  Serial.begin(115200);
  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  pinMode(d4, OUTPUT);
  pinMode(d5, OUTPUT);
  pinMode(d6, OUTPUT);         
}

void loop() {
   Serial.print(sonar.ping_cm());
   Serial.println("cm");
   delay(20);
   if(sonar.ping_cm() <= 10) { digitalWrite(d1, HIGH); } else { digitalWrite(d1, LOW); }
   if(sonar.ping_cm() <= 30) { digitalWrite(d2, HIGH); } else { digitalWrite(d2, LOW); }
   if(sonar.ping_cm() <= 50) { digitalWrite(d3, HIGH); } else { digitalWrite(d3, LOW); }
   if(sonar.ping_cm() <= 70) { digitalWrite(d4, HIGH); } else { digitalWrite(d4, LOW); }
   if(sonar.ping_cm() <= 90) { digitalWrite(d5, HIGH); } else { digitalWrite(d5, LOW); }
   if(sonar.ping_cm() <= 1000) { digitalWrite(d6, HIGH); } else { digitalWrite(d6, LOW); }

}
