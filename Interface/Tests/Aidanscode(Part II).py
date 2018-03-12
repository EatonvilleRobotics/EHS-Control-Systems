import sys
from Tkinter import *
from PIL import ImageTk

canvas = Canvas(width = 3840, height = 2160, bg = 'blue')
canvas.pack(expand = YES, fill = BOTH)

image = ImageTk.PhotoImage(file = "C:/ThisPC/Desktop/Robotics_Crap/bg.gif")
canvas.create_image(10, 10, image = image, anchor = NW)

mainloop()