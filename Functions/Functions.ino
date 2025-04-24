// Functions

#define led 23

void setup() {
  pinMode(led, OUTPUT); // initialize the LED pin as an output
}
void loop() {
  blinkLED(5); // blink the LED 5 times
  delay(1000); // wait for 1 second
  blinkLED(3); // blink the LED 3 times
  delay(1000); // wait for 1 second
  blinkLED(2); // blink the LED 2 times
  delay(1000); // wait for 1 second
  exit(0); // exit the loop
}
void blinkLED(int count) {
  for (int i = 0; i < count; i++) {
    digitalWrite(led, HIGH); // turn on the LED
    delay(500); // wait for 500ms
    digitalWrite(led, LOW); // turn off the LED
    delay(500); // wait for 500ms
  }
}
