import serial
import time
from tkinter import *

counter = 0
arduino = serial.Serial(port='COM7', baudrate=115200, timeout=.1)

main = Tk()

def send():
    global counter
    if counter == 0:
        counter = 1
        b1.configure(text="reverse")
    elif counter == 1:
        counter = 0
        b1.configure(text="extend")
    arduino.write(bytes("0","utf-8"))
    time.sleep(0.05)


b1 = Button(main,text="extend",command=send)


b1.pack()

main.mainloop()
