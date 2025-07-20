
int irPin = 2;

void setup() {
  pinMode(irPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int status = digitalRead(irPin);
  if (status == LOW) {
    Serial.println("Object Detected");
  } else {
    Serial.println("Clear");
  }
  delay(300);
}
