from sense_hat import SenseHat
sense = SenseHat()

color_msg = input("Enter the text color(c1, c2, c3): ")
msg_list = color_msg.split(",")
color_msg = (int(msg_list[0]), int(msg_list[1]), int(msg_list[2]))
color_bg = input("Enter the background color(b1, b2, b3): ")
bg_list = color_bg.split(",")
color_bg = (int(bg_list[0]), int(bg_list[1]), int(bg_list[2]))
speed = float(input("Enter the message display speed: "))

sense.set_rotation(180)
sense.show_message("This is fun!", text_colour = color_msg, back_colour = color_bg, scroll_speed = speed)