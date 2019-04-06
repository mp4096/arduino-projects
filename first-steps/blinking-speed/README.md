# Changing blinking speed with the potentiometer

**Goal:** Control LED blinking speed using the potentiometer.
The blinking delay should be in range from 50 ms to 500 ms.
The variable you get from `analogRead` is in range from 0 to 1023.

**Hint:** The correct formula for linear interpolation is:

```
out = (MAX_OUT - MIN_OUT) * (in - MIN_IN) / (MAX_IN - MIN_IN) + MIN_OUT
```
