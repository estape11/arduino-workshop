import serial
from pygame import mixer
import time

mixer.init()
mixer.music.load('./mario.wav')

def playSound():
    mixer.music.play()

lastSound = 0 

with serial.Serial('/dev/tty.usbmodem140111', 9600, timeout=1) as ser:
    while True:
        #x = ser.read()          # read one byte
        #s = ser.read(10)        # read up to ten bytes (timeout)
        line = ser.readline()   # read a '\n' terminated line
        if "BTN" in str(line) and time.time() - lastSound > 5:
            lastSound = time.time()
            print("Surprise!")
            playSound()

            