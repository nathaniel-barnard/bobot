// https://www.instructables.com/id/How-to-use-the-TMP36-temp-sensor-Arduino-Tutorial/

int analog_no = 5 ;// define A5 as input signal pin
int count;
int temp;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int rawvoltage= analogRead(analog_no);
  float volts = rawvoltage * 0.004882814;
  float celsiustemp = 100.0 * volts - 50;
  float fahrenheittemp = celsiustemp * 9.0/5.0 + 32.0;
  Serial.print(fahrenheittemp);
  Serial.println("Fahrenheit");
  Serial.print(celsiustemp);
  Serial.println("Celsius");
  Serial.println(volts);
  temp = count + 1;
  Serial.println(temp);
  Serial.println("----------");
  count = temp;
  delay(3000);

}

/*
void loop() {
  int pin_value;
  int temperature;
  
  pin_value = analogRead(analog_no);
  
  temperature = (pin_value)/10;
  Serial.print("Current temperature is ") ;
  Serial.print(temperature) ;
  Serial.println("C");
  delay(400);
}*/
