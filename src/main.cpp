/*
  Titre      : Blink
  Auteur     : Yahya Madrani
  Date       : 17/11/2021
  Description: Programme blink pour Arduino Maker 1000
  Version    : 0.0.1
*/

#include <Arduino.h>

void setup() {

  pinMode(PIN_LED, OUTPUT);
  
}

void loop() {

  digitalWrite(PIN_LED, HIGH);
  delay(1000);

  digitalWrite(PIN_LED, LOW);
  delay(1000);

}