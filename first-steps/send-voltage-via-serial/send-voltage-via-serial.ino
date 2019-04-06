const int POT_PIN = 5;
const float VCC_MAX = 5.0;
float voltage = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  voltage = VCC_MAX * (analogRead(POT_PIN) / 1024.0);
  Serial.println(voltage);
}
