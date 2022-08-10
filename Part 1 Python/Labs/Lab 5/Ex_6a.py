from sense_hat import SenseHat 
sense = SenseHat()

def get_color(color_str):
    color_out = 0
    attempt = 1
    while attempt <= 3:
        try:
            color = input("Enter the value of " + color_str + " color for the message (0 to 255): ")
            if float(color) % int(color) != 0 or int(color) < 0 or int(color) > 255:
                attempt += 1
                print("Invalid value, enter 0 to 255. " + str(4-attempt) + " tries left.")
            else:
                color_out = int(color)
                break
        except ZeroDivisionError:
            break
        except:
            attempt += 1
            print("Invalid value, enter 0 to 255. " + str(4-attempt) + " tries left.")
    return color_out

if __name__ == '__main__':
    sense.clear()
    r_int = get_color("red")
    g_int = get_color("green")
    b_int = get_color("blue")
    msg_color = (r_int, g_int, b_int) 
    sense.show_message("I got it!", text_colour=msg_color)