#include <Servo.h>
Servo myservo;
const int buttonPin = 2;  // the pin that the pushbutton is attached to
int buttonState = 0;        // current state of the button
int previousButtonState = 0;    // previous state of the button

void setup() {
  myservo.attach(9);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}


void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState != previousButtonState) {
    if (buttonState == HIGH) {
      Serial.println("button pressed");
    } else {
      Serial.println("button released");
    }
  }
  previousButtonState = buttonState;

  if (digitalRead(buttonPin) == HIGH){
    myservo.write(180);
  } else {
    myservo.write(0):
  }
}