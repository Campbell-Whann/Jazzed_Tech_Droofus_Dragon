#include <Servo.h>

Servo myservo;
Servo myservo2;
const int buttonPin = 3;
const int buttonPin2 = 9; 
const int ledPin = 13;
int buttonState = 0;
int buttonState2 = 0;
int servoState = 0;
int servoState2 = 0;

void setup() {
  myservo.attach(5);
  myservo.write(0);
  myservo2.attach(10);
  myservo2.write(0);
  delay(1000);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);
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

  if (buttonState2 == HIGH) {
    if (servoState2 == 0) {
      myservo2.write(180);
      delay(1000);
      servoState2 = 1;
    } else {
      myservo2.write(0);
      delay(1000);
      servoState2 = 0;
    }
  }
}