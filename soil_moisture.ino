#define SensorPin A0
float sensorValue = 0;
int led = 16;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i <= 100; i++) {
      sensorValue = sensorValue + analogRead(SensorPin);
      delay(10);
  }
  sensorValue = sensorValue/100.0;
  Serial.println(sensorValue);
  if (sensorValue > 875) {
    digitalWrite(led, HIGH);
    Serial.println("On");
  } else {
    digitalWrite(led, LOW);
    Serial.println("Off");
  }
  delay(500);
}
