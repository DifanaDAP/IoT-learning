#include <Arduino.h>

#define LED_PIN 9 // pwm-cable pin
#define POT_PIN A0  // potentiometer connected to analog pin A0

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(POT_PIN);  // Read analog value
  int brightness = map(sensorValue, 0, 1023, 0, 255); // map to pwm range

  analogWrite(LED_PIN, brightness); // set led brightness

  Serial.print("Analog Value: ");
  Serial.print(sensorValue);
  Serial.print(" - Brightness: ");
  Serial.println(brightness);

  delay(100);
}
