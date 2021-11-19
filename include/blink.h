void blink(int temp){
  digitalWrite(PIN_LED, HIGH);
  delay(temp);

  digitalWrite(PIN_LED, LOW);
  delay(temp);
}