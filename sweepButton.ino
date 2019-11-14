#include <Servo.h>

Servo myservo;

const int buttonPin = 4;
const int servoPin = 9;
const int ledPin =  3;

int buttonState = 0;
int pos = 0; // servo position
int delayTime = 3000; // time for boba to come out

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  myservo.attach(servoPin);
}

void sweep() {
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(15);
  }
  delay(delayTime);
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(15);
  }
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH); // turn LED on if button pressed
    sweep();
  } else {
    digitalWrite(ledPin, LOW); // turn LED off
  }

  
}
