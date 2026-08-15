void setup() {
pinMode(ledPin, OUTPUT);
}

void loop() {
digitalWrite(ledPin, HIGH); // Turn LED ON
// Wait for 1 second

digitalWrite(ledPin, LOW); // Turn LED OFF
// Wait for 1 second

delay(1000);
delay(1000);

}
