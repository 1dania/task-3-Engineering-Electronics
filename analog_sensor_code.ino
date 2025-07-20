
int sensorPin = A0;
int value;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(sensorPin);
  Serial.println(value);
  delay(500);
}
