/*
  Titre      : Blink
  Auteur     : Yahya Madrani
  Date       : 17/11/2021
  Description: Programme blink pour Arduino Maker 1000
  Version    : 0.0.1
*/

#include <Arduino.h>
#include "blink.h"

void setup() {

  pinMode(PIN_LED, OUTPUT);
  
}

void loop() {

  blink(10000);

}