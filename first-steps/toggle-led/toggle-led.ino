const int BUTTON_PIN = 3;
const int LED_PIN = 12;
bool button_pressed = false;

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  button_pressed = not digitalRead(BUTTON_PIN);
  if (button_pressed) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
