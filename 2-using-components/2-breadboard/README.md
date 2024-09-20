# Using the Breadboard to connect components
Your breadboard has a few regions: power and ground rails on the sides, and circuit-building areas in the center. 

  <img src="https://github.com/user-attachments/assets/49e7a334-88d2-4d61-bbd4-d5d14ffd5308" width="800">



**Note**: When changing any circuit on the breadboard, it's good idea to unplug the USB cable from the Arduino, so you don't power something by mistake, so unplug it for now.  


## Setup the breadboard

Now we'll use Arduino to power up and configure the board for convenient access. 

The Arduino receives power from your laptop through the USB cable. It then makes that power available to circuits on your breadboard through its 5V, 3.3V, and GND pins. 
### Wire the board 

- Step 1: Using 2 jumper wires, connect the Arduino 5V pin to the red power rail, and either of the Arduino's 2 GND pins to the blue ground rail. 
- Step 2: Using 2 long jumper wires, connect the power and ground rails across opposite sides of the board, as shown on the left side of the image below. Red connects to red, blue to blue. 
<img src="https://github.com/user-attachments/assets/b062b8d1-4eb2-4759-bdd8-e17224c376ed" width="640">

Together, these connections create a convenient power along both rails for your circuits. 

### Power the board
Now plug the USB cable back into the Arduino. You should see the green power LED on the Arduino turn on. 

**If you don't, you have short circuit, and should disconnect the USB cable and fix the circuit right away!**

If everything looks good, you're up and running, and ready to light some [LEDs](https://github.com/estape11/arduino-workshop/tree/main/2-using-components/3-leds). 



## Detecting short circuit ⚠️

A short circuit happens when electricity flows the wrong way, causing too much current and potentially damaging Arduino. This usually means the postive and negative input/output of a component are phyisical connected, which should not happened.

In the following image, the power connection (+) and (-) are connected to the same column 14, which will cause a short circuit.

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/4-other-components/2-breadboard/assets/short_circuit_2.jpeg?raw=true" width="640">

In this next image, using a jumper to brigde between the column 14 and column 20 also produces a short circuit.

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/4-other-components/2-breadboard/assets/short_circuit.jpeg?raw=true" width="640">
  
### Tool to measure voltage, resistance, and current
Using the multimeter you can check the continuity between the connections.
