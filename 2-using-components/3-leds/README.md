# Using LEDs with the Arduino
Let's build 2 LED circuits: (1) LED always on, (2) LED control by button, and (3) LED control by program. 

## 1: LED always on
### Step 1: Add a resistor
First, unplug the USB cable from the Arduino, then build the circuit shown below. Use a 220 Ohm resistor.  

<img src="https://github.com/user-attachments/assets/6d17c95a-cadf-4fd2-9f02-081091526450" align=center width="640">

Resistors have 4 color bands to indicate their resistance. For 220 Ohm resistors, the ands are red, red, black, black and (farther away) brown. 

<img src="https://github.com/user-attachments/assets/5581c2d7-9ab8-458c-93c0-f2b6166b4351" align=center width="200">

**Note**:It's important to always place a resistor in series with any LED, to limit the current in the LED to a safe value. 


### step 2: Add a LED
LEDs are diodes, and diodes only work when oriented one way. Connect the longer lead toward power, and the shorter lead toward ground.
 <img src="https://github.com/user-attachments/assets/eb3a3c45-88f1-4f35-bc68-2b13d15bd20c" align=center width="100">

### Step 3: Power the Arduino 
Now plug the USB cable back into the Arduino. Your new LED should light up. Notice that the onboard LED is still flashing. That's because the Arduino is still running the arduino.ino program from earlier. 

## 2: LED control by button

### Step 1: Add a button
Unplug the Arduino's USB cable and insert a pushbutton into the circuit, as shown below. Press the button's leads fully into the board. 
Make sure that the button crosses the center separator, as shown below. 

<img src="https://github.com/user-attachments/assets/c6c2bef1-4994-4d9f-a45f-0b3782bbf1f3" align=center width="640">

### Step 2: Power the Arduino
Now plug the USB cable back into the Arduino, and check that the button works: the LED should light only when you press the button. 

🎉 Congratulations, you've made a light switch. 

## 3: LED control by program
### Step 1: Rewire the board
Unplug the USB cable from the Arduino then rewire the board shown below. Connect a long jumper wire to Arduino pin 5. This pin will now power the LED. 

  <img src="https://github.com/user-attachments/assets/aa129690-8284-4496-9a4e-161739a424ea" width="640">

### Step 2: flash the code ([led.ino](https://github.com/estape11/arduino-workshop/blob/main/2-using-components/4-other-components/3-leds/led.ino))
Open the led.no file on your laptop. The following line sets pin 5 to output

```c
#define LED_PIN 5
pinMode(LED_PIN, OUTPUT)
```

And the following lines tell the Arduino to send 5V, and later 0V, out that pin.  

```c
digitalWrite(LED_PIN, HIGH);
digitalWrite(LED_PIN, LOW);
```
### Step 3: Power the Arduino 
Reconnect the USB cable. The external LED should falsh with the onboard LED. 
