#include <Servo.h>

Servo myservo;
const int buttonPin = 3;
int buttonState = 0;
int servoState = 0;

void setup() {
  myservo.attach(5);
  myservo.write(0);
  delay(1000);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  Serial.println(servoState);

  if (buttonState == HIGH) {
    if (servoState == 0) {
      myservo.write(180);
      delay(1000);
      servoState = 1;
    } else {
      myservo.write(0);
      delay(1000);
      servoState = 0;
    }
  }
}