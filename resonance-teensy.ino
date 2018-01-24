// Resonance Teensy

const int solenoid = 12;
const int led = LED_BUILTIN;

void setup() {
  pinMode(solenoid, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(solenoid, HIGH);
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(solenoid, LOW);
  digitalWrite(led, LOW);
  delay(1000);
}

