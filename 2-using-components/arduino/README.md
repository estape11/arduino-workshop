# Using the Arduino (flash)
Now we'll set up the software to work with the Arduino board. 

## Requirements

- Arduino board

## Steps

### 1. Connect the Arduino to the computer using the USB cable

### 2. Open the Arduino IDE

### 3. Select the board from the menu
The programmer needs to know what hardware you're using, so select the Arduino micro using the menu bar. 

- `Tools > board > Arduino/Arduino Uno`

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/arduino/assets/board_selection.png?raw=true" width="650">


### 4. Select the device port
Next, select a port for the serial device to communicate through. 

- `Tools > Serial Port`

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/arduino/assets/device_selection.png?raw=true" width="650">
**Note**: To check that you've chosen the right port, disconnect the Arduino and reopen the Serial Port menu. The entry that has disappeared is the correct port. Reconnect the board and select that serial port. 

### 5. Copy and paste file [arduino.ino](https://github.com/estape11/arduino-workshop/blob/main/2-using-components/arduino/arduino.ino) or open the file using Arduino IDE

- Compile and upload the sketch, using the arrow button. After a few seconds, the small LED on the Arduino should flash quickly. You should see the LED on the Arduino repeatedly blink on for 1 second, then blink off for 1 second. 
  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/arduino/assets/flash.png?raw=true" width="650">

### 6. Changing blinking speed 
Try to modify the arduino.ino file so that the LED flashes at twice its original rate. If you're not sure how to change the flashing rate, find the line below, and edit it so the delay is shorter. Then reupload your modified sketch. 

```c
delay(1000); //wait for a second
```

When you can readily change the way that the LED flashes, you're ready to move on with the tutorial. 

**Note**: Arduino programs are called sketches. Sketches are just C++ programs. Every sketch includes 2 special functions: `setup()`and `loop()`. 
`setup()`: runs once at the start of the programs, and `loop()` runs forever after that.
