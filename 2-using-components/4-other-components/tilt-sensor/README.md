# Using tilt sensor with the Arduino

## Usability
Detects if the sensor has been tilted or not (0 or 1).

Note:
 * Use of active low inputs (through a pull-up resistor)
 * The input is at low when the sensor is active.

## Requirements
- Arduino board
- Breadboard
- WS-520D tilt sensor

## Diagram

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/4-other-components/tilt-sensor/assets/tilt_diagram.png?raw=true" width="400">


## Steps
- Using the Arduino IDE, flash the code (tilt.ino)
- Monitor the serial output and move the sensor to check if it is tilted or not every 5 seconds
