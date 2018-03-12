import sys
from tkinter import *
from tkinter import ttk
control = Tk()
telemetry = Tk()
frame = ttk.Frame(telemetry)
frame = ttk.Frame(control)

#external code
controlFrame = Frame(control, width=1500, height=900, bg="black")
telemetryFrame = Frame(telemetry, width=300, height=150, bg="black")
controlFrame.pack()
telemetryFrame.pack()
control.title("EHS ROV - Control System")
telemetry.title("EHS ROV - Telemetry")
#end code
control.mainloop()
telemetry.mainloop()