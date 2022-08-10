from sense_hat import SenseHat
sense = SenseHat()
import time, random
sense.clear()

r = (255, 255, 0)
b = (0, 100, 255)
w = (255,255,255)
n = (0, 0, 0)

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
    sense.set_rotation(random.randrange(0,360, 90))
    r, b = (random.randint(0,255), random.randint(0,255), 0), (0, random.randint(0,255), random.randint(0,255))
    time.sleep(1)