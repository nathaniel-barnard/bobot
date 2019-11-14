#include <Servo.h>

Servo myservo;  // create servo object to control a servo

const int buttonPin = 4; // number of the pushbutton pin
const int servoPin = 9;
const int ledPin =  3; // number of the LED pin

int buttonState = 0; // read pushbutton status
int pos = 0; // servo position
int delayTime = 3000; // time for boba to come out

void setup() {
  // initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT);
  // attach the servo on pin 9 to the servo object
  myservo.attach(servoPin);  // attaches the servo on pin 9 to the servo object
}

void sweep() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  delay(delayTime);
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

void loop() {
  // read the state of the pushbutton value
  buttonState = digitalRead(buttonPin);

  // if the button is pressed, the buttonState is HIGH
  if (buttonState == HIGH) {
    // turn LED on
    digitalWrite(ledPin, HIGH);
    sweep();
  } else {
    // turn LED off
    digitalWrite(ledPin, LOW);
  }

  
}
