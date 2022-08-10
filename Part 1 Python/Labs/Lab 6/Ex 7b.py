from sense_hat import SenseHat
from time import sleep
sense = SenseHat()
sense.set_rotation(90)

b = (0,0,0)
w = (255,255,255)
board = [[b,b,b,b,b,b,b,b],
         [b,b,b,b,b,b,b,b],
         [b,b,b,b,b,b,b,b],
         [b,b,b,b,b,b,b,b],
         [b,b,b,b,b,b,b,b],
         [b,b,b,b,b,b,b,b],
         [b,b,b,b,b,b,b,b],
         [b,b,b,b,b,b,b,b]]
         
y = 2
x = 2
board[y][x] = w
board_1D = sum(board, [])
print(board_1D)
sense.set_pixels(board_1D)
