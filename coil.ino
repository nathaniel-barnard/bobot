int LPWM = 5;
int LEN = 9;
int RPWM = 6;
int REN = 10;
int timeA = 5000      //duration to run
void setup() {
  // put your setup code here, to run once:
pinMode(LPWM, OUTPUT);
pinMode(RPWM, OUTPUT);
pinMode(LEN, OUTPUT);
pinMode(REN, OUTPUT);
digitalWrite(LEN, HIGH);
digitalWrite(REN, HIGH);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(RPWM, HIGH);
digitalWrite(LPWM, LOW);
delay(timeA);
digitalWrite(RPWM, LOW);
digitalWrite(LPWM, HIGH);
delay(timeA);
}
