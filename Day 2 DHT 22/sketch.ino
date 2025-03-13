#include <Arduino.h>
#include<DHT.h>

#define DHTPIN 2 // pin connected to dht 11 data
#define DHTTYPE DHT22 // define the sensor type

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if(isnan(temperature) || isnan(humidity)) {
    Serial.println("failed to read from DHT sensor!");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("°C Humidity");
  Serial.print(humidity);
  Serial.println("%");

  delay(2000); // wait 2 seconds before next reading
}
