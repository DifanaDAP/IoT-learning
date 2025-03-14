#include<Arduino.h>

#define LED_PIN 13  // Built- in led pin
#define BUTTON_PIN 2 // pust button pin
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP); // use internal pull up resistor
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead((BUTTON_PIN)); // Read button state

  if(buttonState == LOW) { //Button pressed (low due to pull up resistor)
    digitalWrite(LED_PIN, HIGH); // Turn LED on
  } else{
    digitalWrite(LED_PIN, LOW); // Turn LED off
  }
}
