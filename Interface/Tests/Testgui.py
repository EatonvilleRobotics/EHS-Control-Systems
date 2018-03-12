import sys
from tkinter import *
root = Tk()
#external code
fm = Frame(root)
Button(fm, text='Top').pack(side=TOP, anchor=W, fill=X, expand=YES)
Button(fm, text='Center').pack(side=TOP, anchor=W, fill=X, expand=YES)
Button(fm, text='Bottom').pack(side=TOP, anchor=W, fill=X, expand=YES)
fm.pack(side=LEFT, fill=BOTH, expand=YES)
fm2 = Frame(root)
Button(fm2, text='Left').pack(side=LEFT)
Button(fm2, text='This is the Center button').pack(side=LEFT)
Button(fm2, text='Right').pack(side=LEFT)        
fm2.pack(side=LEFT, padx=10)
frame = Frame(root, width=1500, height=900, bg="black")
frame.pack()
root.title("Eatonville Robotics ROV Control System")

#end code
root.mainloop()