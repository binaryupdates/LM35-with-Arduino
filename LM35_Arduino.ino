float temp = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  temp = analogRead(A0);
  temp = temp * 0.48828125;
  Serial.print("TEMPERATURE: ");
  Serial.print(temp);
  Serial.println(" *C");
  delay(1000);
}
