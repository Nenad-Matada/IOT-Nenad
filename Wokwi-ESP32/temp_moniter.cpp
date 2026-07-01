void setup() {
  Serial.begin(115200);
}

void loop() {
  int temp = random(20, 50); // simulate temperature

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");

  if(temp > 35){
    Serial.println(" High Temperature Alert!");
  } else {
    Serial.println(" Normal");
  }

  Serial.println("------------------");
  delay(1000);
}
