# Toggle LED

**Goal:** Turn LED on as long as the button is pressed.

:warning: The button sets the digital input to `false` when closed (i.e. pressed).
Hence, we want to invert the result of `digitalRead`:

```c
button_pressed = not digitalRead(BUTTON_PIN);
```
