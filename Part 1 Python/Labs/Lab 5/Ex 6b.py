from sense_hat import SenseHat
from Ex_6a import get_color
sense = SenseHat()
sense.clear()
r_int = get_color("red")
g_int = get_color("green")
b_int = get_color("blue")
msg_color = (r_int, g_int, b_int)
sense.show_message("We got it!", text_colour=msg_color)