const int POT_PIN = 5;
const int LED_PIN = 12;
const int MAX_DELAY = 500;
const int MIN_DELAY = 50;
const float MAX_POT_VALUE = 1023.0;
int pot_value = 0;
int delay_time = MIN_DELAY;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  pot_value = analogRead(POT_PIN);
  delay_time = round((MAX_DELAY - MIN_DELAY) * (pot_value / MAX_POT_VALUE)) + MIN_DELAY;

  digitalWrite(LED_PIN, HIGH);
  delay(delay_time);
  digitalWrite(LED_PIN, LOW);
  delay(delay_time);
}
