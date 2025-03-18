#include <Arduino.h>

#define POT_PIN A0 // potensiometer connected to analog pin A0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Start serial communication
}

void loop() {
  // put your main code here, to run repeatedly:
  int sersorValue = analogRead(POT_PIN);  // read analog value
  float voltage = sensorValue * (5.0 / 1023.0); // convert to voltage

  Serial.print("Analog Value: ");
  Serial.print(sensorValue);
  Serial.print(" - Voltage");
  Serial.print(voltage);
  Serial.println("V")

  delay(500); // delay for readability
}
