# Using the Arduino (flash)
Now we'll set up the software to work with the Arduino board. 

## Requirements

- Arduino board

## Steps

#### 1. Connect the Arduino to the computer using the USB cable

#### 2. Open the Arduino IDE

#### 3. Select the board from the menu
The programmer needs to know wht hardware you're using, so select the Arduino micro using the menu bar. 

- `Tools > board > Arduino/Arduino Uno`

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/arduino/assets/board_selection.png?raw=true" width="650">


#### 4. Select the device port
Next, select a port for the serial device to communicate through. 

- `Tools > Serial Port`

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/arduino/assets/device_selection.png?raw=true" width="650">
**Note**: To check that you've chosen the right port, disconnect the Arduino and reopen the Serial Port menu. The entry that has disappeared is the correct port. Reconnect the board and select that serial port. 

- Copy and paste file arduino.ino or open the file using Arduino IDE

- Click the flash button and wait until it finishes

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/arduino/assets/flash.png?raw=true" width="650">

- Validate that the small LED in the Arduino is blinking
