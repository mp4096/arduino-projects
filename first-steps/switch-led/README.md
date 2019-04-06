# Switch LED

**Goal:** Switch LED on and off on keypress.
I.e. if the LED is switched on, it stays on even if the key is not pressed.

:warning: This project highlights the problem of contact bounce,
see [here](https://en.wikipedia.org/wiki/Switch#Contact_bounce) and
[here](https://hackaday.com/2015/12/09/embed-with-elliot-debounce-your-noisy-buttons-part-i/).
Although the board has a hardware RC lowpass, switching can be flaky and unreliable.
A better solution would be to implement debouncing in software or with a Schmitt trigger.
