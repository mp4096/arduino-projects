# Learning Arduino

## :rocket: Installation

* Download Arduino IDE [here](https://www.arduino.cc/en/Main/Software)
* Install the NeoPixel library as described
  [here](https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-installation#install-adafruit-neopixel-via-library-manager-16-2)

## :pushpin: Pinout and available hardware

* Pin `D12` (digital output): green LED. Set the pin to `HIGH` to turn the LED on.
* Pin `D3` (digital input): push button. `LOW` if the button is pressed.
* Pin `A5` (analog input): potentiometer (pot). Input voltage is between 0 V and 5 V.
* Pin `D5` (digital output): signal line to the NeoPixel strip.

## :hatching_chick: First steps

* [Blinking LED](first-steps/blinking-led)
* [Toggling LED on key press](first-steps/toggle-led)
* [Switching LED on and off, key debouncing](first-steps/switch-led)
* [Cycling through different LED blinking modes](first-steps/cycle-led)
* [Sending analog voltage via serial port](first-steps/send-voltage-via-serial)
* [Changing blinking speed with the potentiometer](first-steps/blinking-speed)
* :thought_balloon: Some further ideas: Control LED (on/off, mode) via serial port.

## :traffic_light: NeoPixels

:bulb: You can refer to the NeoPixels guide
[here](https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-use)

* [Cycle through neopixels with the potentiometer](neopixels/cycle)
* [Change number of glowing pixels with the potentiometer](neopixels/fill)
* [Change brightness with the potentiometer](neopixels/change-brightness)
* [Change color with the potentiometer](neopixels/change-color-pot)
* :thought_balloon: ...

## :mortar_board: Advanced topics

* Implement debouncing in software as described
  [here](https://www.arduino.cc/en/tutorial/debounce)
