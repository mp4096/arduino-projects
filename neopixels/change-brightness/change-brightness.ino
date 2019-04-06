#include <Adafruit_NeoPixel.h>

const int POT_PIN = 5;
const int NEOPIXEL_PIN = 5;
const int NUM_LEDS = 8;
const float MAX_POT_VALUE = 1023.0;
int pot_value = 0;
float x = 0.0;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, NEOPIXEL_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.setBrightness(255);
  strip.show();
}

void loop() {
  pot_value = analogRead(POT_PIN);
  x = pot_value / MAX_POT_VALUE;
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, 0, int(101.0 * x), int(189.0 * x));
  }

  strip.show();
}
