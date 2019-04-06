const int BUTTON_PIN = 3;
const int LED_PIN = 12;
bool button_pressed = false;
bool led_on = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  button_pressed = not digitalRead(BUTTON_PIN);

  if (button_pressed) {
    led_on = not led_on;
  }

  if (led_on) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(300);
}
