#include <Adafruit_NeoPixel.h>

const int POT_PIN = 5;
const int NEOPIXEL_PIN = 5;
const int NUM_LEDS = 8;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, NEOPIXEL_PIN, NEO_GRB + NEO_KHZ800);

const float MAX_POT_VALUE = 1023.0;
int pot_value = 0;

void setup() {
  strip.begin();
  strip.setBrightness(127);
  strip.show();
}

void loop() {
  pot_value = analogRead(POT_PIN);
  strip.clear();
  if (pot_value < MAX_POT_VALUE/8) {
    strip.setPixelColor(0, 0, 101, 189);
  } else if (pot_value < 2 * MAX_POT_VALUE/8) {
    strip.setPixelColor(1, 0, 101, 189);
  } else if (pot_value < 3 * MAX_POT_VALUE/8) {
    strip.setPixelColor(2, 0, 101, 189);
  } else if (pot_value < 4 * MAX_POT_VALUE/8) {
    strip.setPixelColor(3, 0, 101, 189);
  } else if (pot_value < 5 * MAX_POT_VALUE/8) {
    strip.setPixelColor(4, 0, 101, 189);
  } else if (pot_value < 6 * MAX_POT_VALUE/8) {
    strip.setPixelColor(5, 0, 101, 189);
  } else if (pot_value < 7 * MAX_POT_VALUE/8) {
    strip.setPixelColor(6, 0, 101, 189);
  } else {
    strip.setPixelColor(7, 0, 101, 189);
  }
  strip.show();
}
