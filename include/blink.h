/**
 * @brief Simple fonction pour On/Off une LED
 * 
 * @param pin broche de sortie brancher a une LED
 * @param temp le temps entre les on/off
 */
void blink(int pin, int temp){
	// Block on
	digitalWrite(pin, HIGH);
	delay(temp);
	#ifdef DEBUG
		Serial.print("LED sur le PIN ");
		Serial.print(pin);
		Serial.print(" est ON\n");
	#endif

	// Block off
	digitalWrite(pin, LOW);
	delay(temp);
	#ifdef DEBUG
		Serial.print("LED sur le PIN ");
		Serial.print(pin);
		Serial.print(" est OFF\n");
	#endif
}