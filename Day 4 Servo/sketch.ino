#include<Arduino.h>
#include<Servo.h>

#define SERVO_PIN 9 // pin connected to the servo

Servo myServo;  // Create a Servo object

void setup() {
  // put your setup code here, to run once:
  myServo.attach(SERVO_PIN); // Attach the servo to pin 9
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int pos = 0; pos <= 180; pos += 10){ // move from 0 to 180 degress
  myServo.write(pos);
  Serial.print("servo position: ");
  Serial.println(pos);
  delay(500);
  }

  for(int pos = 180; pos >= 0; pos -= 10){  // Move from 180 to 0 degress
  myServo.write(pos);
  Serial.print("servo position: ");
  Serial.println(pos);
  delay(500);
  }
}
