/**
 * @brief Simple fonction pour On/Off une LED
 * 
 * @param pin broche de sortie brancher a une LED
 * @param temp le temps entre les on/off
 */
void blink(int pin, int temp){
	// Block on
	String msg;
	digitalWrite(pin, HIGH);
	delay(temp);
	#ifdef DEBUG
		msg = "LED sur le PIN " + pin;
		msg += " est on";
		Serial.println(msg);
	#endif

	// Block off
	digitalWrite(pin, LOW);
	delay(temp);
	#ifdef DEBUG
		msg = "LED sur le PIN " + pin;
		msg += " est off";
		Serial.println(msg);
	#endif
}