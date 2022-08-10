from sense_hat import SenseHat
sense = SenseHat()

def key_in(color, position):
    while True:
        try:
            color_value = input("Enter the value of " + color + " color for the " + position + ": ")
            if 0 <= int(color_value) <= 255:
                color_value = int(color_value)
                break
            else:
                print("You have entered an invalid value. Try again.")
        except:
            if color_value.lower() == 'exit':
                quit()
            else:
                print("You have entered an invalid value. Try again.")
    return (color_value)

while True:
    R, G, B, msg, bg = "red", "green", "blue", "message", "background"
    color_msg, color_bg = (key_in(R, msg), key_in(G, msg), key_in(B, msg)), (key_in(R, bg), key_in(G, bg), key_in(B, bg)) 
    
    while True:
        try:
            speed = float(input("Enter the message display speed: "))
            break
        except:
            print("You have entered an invalid speed value, try again!")
    
    sense.show_message("This is fun!", text_colour = color_msg, back_colour = color_bg, scroll_speed = speed)
    sense.clear()