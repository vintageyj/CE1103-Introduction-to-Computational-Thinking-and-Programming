from sense_hat import SenseHat
sense = SenseHat()
import time, random

sense.clear()
red = (255, 0, 0)
yellow = (255, 255, 0)
green = (0, 255, 0)
blue = (0, 0, 255)
colour = [red, green, yellow, blue]

k = 0
corner = [0,7]
for i in corner:
    for j in corner:
        sense.set_pixel(i, j, colour[k])
        k += 1
        
time.sleep(1.5)
sense.clear()

k = 0
for x in range(4):
    sense.set_pixel(random.randint(0,7), random.randint(0,7), colour[k])
    k += 1