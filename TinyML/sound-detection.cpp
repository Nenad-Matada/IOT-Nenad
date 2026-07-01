#define LED_PIN 2
void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  float sound = random(0, 1000) / 1000.0;
  Serial.print("Sound: ");
  Serial.print(sound);
  Serial.print(" -> ");
  if (sound > 0.7) {
    Serial.println("Clap Detected!");
    digitalWrite(LED_PIN, HIGH);
  } else {
    Serial.println("Noise");
    digitalWrite(LED_PIN, LOW);
  }
  delay(1000);
}


