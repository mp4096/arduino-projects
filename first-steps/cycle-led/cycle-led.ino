const int BUTTON_PIN = 3;
const int LED_PIN = 12;
const int NUM_MODES = 3;
bool button_pressed = false;
int mode = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  button_pressed = not digitalRead(BUTTON_PIN);
  if (button_pressed) {
    mode = (mode + 1) % NUM_MODES;
  }

  switch (mode) {
    case 0: {
        digitalWrite(LED_PIN, HIGH);
        delay(250); // to alleviate contact bounce
        break;
      }
    case 1: {
        digitalWrite(LED_PIN, HIGH);
        delay(250);
        digitalWrite(LED_PIN, LOW);
        delay(250);
        break;
      }
    case 2: {
        digitalWrite(LED_PIN, HIGH);
        delay(100);
        digitalWrite(LED_PIN, LOW);
        delay(100);
      }
    default:
      break;
  }
}

