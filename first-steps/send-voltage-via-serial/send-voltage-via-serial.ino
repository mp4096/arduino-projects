const int POT_PIN = 5;
const float MAX_VCC = 5.0;
const float MAX_POT_VALUE = 1023.0;
float voltage = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  voltage = MAX_VCC * (analogRead(POT_PIN) / MAX_POT_VALUE);
  Serial.println(voltage);
}
