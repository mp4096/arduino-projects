# Sending analog voltage via serial port

**Goal:** Read the analog voltage from the potentiometer and send it to the PC
using serial communication. You can use Arduino IDE's serial monitor or
serial plotter to visualize the results. The voltage range is from 0 V to 5 V.
The variable you get from `analogRead` is in range from 0 to 1023.

**Hint:** The correct formula for linear interpolation is:

```
out = (MAX_OUT - MIN_OUT) * (in - MIN_IN) / (MAX_IN - MIN_IN) + MIN_OUT
```
