from sense_hat import SenseHat
sense = SenseHat()
import time, random
sense.clear()

r = (255, 255, 0)
b = (0, 100, 255)
w = (255,255,255)
n = (0, 0, 0)
counter = 0
while True:
    image_pixels =[n, r, r, r, r, r, r, n,
               w, w, r, r, w, w, r, r,
               b, b, w, r, b, b, w, r,
               b, b, w, r, b, b, w, r,
               r, r, r, r, r, r, r, r,
               r, r, r, r, r, r, r, r,
               r, r, r, r, r, r, r, r,
               r, n, r, n, r, n, r, n]
    sense.set_pixels(image_pixels)
    current_rotation = random.randrange(0,360, 90)
    sense.set_rotation(current_rotation)
    r, b = (random.randint(0,255), random.randint(0,255), 0), (0, random.randint(0,255), random.randint(0,255))

    '''angle = 0, x,y = 0,1
       angle = 90, x,y = -1,0
       angle = 180, x,y = 0,-1
       angle = 270, x,y = 1,0'''
    time.sleep(1)
    acceleration = sense.get_accelerometer_raw()
    x_raw = acceleration['x']
    y_raw = acceleration['y']
    x = int(round(x_raw, 0))
    y = int(round(y_raw, 0))
    if x == 0 and y == 0:
        angle = 0
    elif x == 0 and y == 1:
        angle = 0
    elif x == -1 and y == 0:
        angle = 90
    elif x == 0 and y == -1:
        angle = 180
    elif x == 1 and y == 0:
        angle = 270
    
    if current_rotation == 0 or current_rotation == 360:
        if angle == 0:
            counter += 1
            print(counter)
            continue
    elif angle == current_rotation:
        counter += 1
        print(counter)
        continue
    else:
        sense.set_rotation(90)
        p = (255, 105, 180)
        loser =[p, p, n, n, n, n, p, p,
               p, p, p, n, n, p, p, p,
               n, p, p, p, p, p, p, n,
               n, n, p, p, p, p, n, n,
               n, n, p, p, p, p, n, n,
               n, p, p, p, p, p, p, n,
               p, p, p, n, n, p, p, p,
               p, p, n, n, n, n, p, p]
        sense.set_pixels(loser)
        time.sleep(1.5)
        sense.show_message(str(counter))
        if counter <= 10:
            sense.show_message("You suck!")
        elif counter < 20:
            sense.show_message("Nice Try!")
        else:
            sense.show_message("AWESOME!")
        break
    

