import tkinter as tk
import tkfont
root =tk.Tk()
C = Canvas(top, bg="blue", height=250, width=300)
filename = PhotoImage(file = "C:\Users\Cyber Goats\Documents\GitHub\EHS-Control-Systems\Interface\bg.jpg")
background_label = Label(top, image=filename)
background_label.place(x=0, y=0, relwidth=1, relheight=1)
w = tk.Label(root, text="Python is dumb")
w.pack()

root.mainloop()