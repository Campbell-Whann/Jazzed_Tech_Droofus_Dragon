#include <Servo.h>

Servo myservo;
const int buttonPin = 3;

void setup() {
  myservo.attach(5);
  myservo.write(0);
  delay(2000);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    myservo.write(180);
    delay(1000);
  } else {
    myservo.write(0);
  }
}
