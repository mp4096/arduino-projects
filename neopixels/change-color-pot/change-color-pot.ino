#include <Adafruit_NeoPixel.h>

const int POT_PIN = 5;
const int NEOPIXEL_PIN = 5;
const int NUM_LEDS = 8;
const float MAX_POT_VALUE = 1023.0;
int pot_value = 0;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, NEOPIXEL_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.setBrightness(127);
  strip.show();
}

void loop() {
  strip.clear();

  pot_value = analogRead(POT_PIN);
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.ColorHSV(pot_value * 64));
  }

  strip.show();
}
