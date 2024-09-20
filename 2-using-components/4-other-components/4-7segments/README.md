# Using 4x 7 segments display with the Arduino

## Requirements
- 4 x 330Ω resistors
- 12 x Male to male jumper wires
- Arduino board
- Breadboard

## Install needed library

- Download the [zip file](https://github.com/DeanIsMe/SevSeg/archive/refs/heads/master.zip) from https://github.com/DeanIsMe/SevSeg 
- Go into finder and locate the "documents" folder, and open it. 
- Locate the "arduino" folder, and open it.
- Locate the libraries folder, and open it.
- Finally drag and drop the installed library into the just opened libraries folder.

```
Note: If your arduino application was opened and running while you where putting the library into the libraries folder, the arduino won't recognize the library. You just have to quit the application and open it again.
```

## Diagram

  <img src="https://github.com/estape11/arduino-workshop/blob/main/2-using-components/4-other-components/4-7segments/assets/4-7segments_diagram.png?raw=true" width="400">

## Steps
- Using the Arduino IDE, flash the code ([4-7segments.ino](https://github.com/estape11/arduino-workshop/blob/main/2-using-components/4-other-components/4-7segments/4-7segments.ino))
- Monitor the 4x7 segment display that shows the number 1234