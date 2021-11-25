/*
  Titre      : Blink
  Auteur     : Yahya Madrani
  Date       : 17/11/2021
  Description: Programme blink pour le test des uC
  Version    : 0.0.1
*/

#define DEBUG               // Si definie la console aura des message de debeugage

#include <Arduino.h>
#include "blink.h"

#define LED_PIN LED_BUILTIN // Definition comme preprocesseur pour faciliter le changement du pin
#define BLINK_TIME  250     // Le temps entre ON et OFF

void setup() {

	Serial.begin(9600);       // Configuration frequence de sortie 
	pinMode(LED_PIN, OUTPUT); // Configuration du PIN LED integré comme sortie
	#ifdef DEBUG
		Serial.printf("PIN %d est configuré comme sortie\n", LED_PIN);
	#endif

}

void loop() {

	// Appel de notre fonctionblink dans notre fichier entete blink.h
	blink(LED_PIN, BLINK_TIME);

}