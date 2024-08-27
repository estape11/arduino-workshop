# Using the Breadboard to connect components

## Requirements
- Breadboard
- Jumpers
- Multimeter
- LED

## Connections

In a breadboard, the holes are electrically connected in columns (0, 2, 3, ... , 60) and disconnected in rows (A, B, C, ... , J), allowing you to create circuits by simply plugging in the components and connecting them with jumper wires. Powee (+) and ground (-) lines typically run along the edges of the board, providing easy access to supply voltage and a common ground for all components in the circuit.

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/breadboard/assets/breadboard_test_2.jpeg?raw=true" width="400">

You can use jumper cables to create new electrical connections.

Using the multimeter you can check the continuity between the connections.

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/breadboard/assets/breadboard_test.jpeg?raw=true" width="400">

## Detecting short circuit

A short circuit happens when electricity flows the wrong way, causing too much current and potentially damaging things. This usually means the postive and negative input/output of a component are phyisical connected, which should not happened.

In the following image, the power connection (+) and (-) are connected to the same column 14, which will cause a short circuit.

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/breadboard/assets/short_circuit_2.jpeg?raw=true" width="400">

In this next image, using a jumper to brigde between the column 14 and column 20 also produces a short circuit.

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/breadboard/assets/short_circuit.jpeg?raw=true" width="400">


## Connecting an LED
When using a LED, the polarity matters, and each leg of the LED needs to go to a different column. 

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/breadboard/assets/connect_led.jpeg?raw=true" width="400">

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/breadboard/assets/connect_led_2.jpeg?raw=true" width="400">

If you connect both legs to one column, it will not produce a short circuit, however, the LED will not be power. The same applies if you connect it with the inverted legs.

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/breadboard/assets/connect_led_3.jpeg?raw=true" width="400">