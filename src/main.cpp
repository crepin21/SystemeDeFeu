/*
  Titre      : Blink
  Auteur     : Yahya Madrani
  Date       : 17/11/2021
  Description: Programme blink pour le test des uC
  Version    : 0.0.1
*/

#include "Arduino.h"
#include "blink.h"

#define LED_PIN LED_BUILTIN // Definition comme preprocesseur pour faciliter le changement du pin
#define BLINK_TIME  1250     // Le temps entre ON et OFF

void setup() {

	Serial.begin(115200);       // Configuration frequence de sortie 

	pinMode(LED_PIN, OUTPUT); // Configuration du PIN LED integré comme sortie

	#ifdef DEBUG
		while (!Serial) {}        // Attendre la connexion du moniteur serie
		Serial.print("\n");
		Serial.print(LED_PIN);
		Serial.print(" est configuré comme port de sortie\n");
	#endif

}

void loop() {

	// Appel de notre fonction blink dans notre fichier entete blink.h
	blink(LED_PIN, BLINK_TIME);

}