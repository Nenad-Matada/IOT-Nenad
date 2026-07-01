int buzzer = 8;
int led = 7;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
}
void loop() {
  int temperature = random(20, 100); 
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  if (temperature > 60) {
    Serial.println("🔥 FIRE DETECTED!");
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
  } else {
    Serial.println("✅ Safe");
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }
  Serial.println("-------------------");
  delay(1000);
}
