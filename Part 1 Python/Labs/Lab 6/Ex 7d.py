from sense_hat import SenseHat
from time import sleep
sense = SenseHat()

def check_wall(x,y,new_x,new_y):
    if board[new_y][new_x] != r:
        return new_x, new_y
    elif board[new_y][x] != r:
        return x, new_y
    elif board[y][new_x] != r:
        return new_x, y
    else:
        return x,y

def move_marble(pitch,roll,x,y):
    new_x = x #assume no change to start with
    new_y = y #assume no change to start with
    
    if 1 < pitch < 179 and x != 0:
        new_x -= 1 # move left
    elif 359 > pitch > 179 and x != 7:
        new_x += 1 # move right
        
    if 1 < roll < 179 and y != 7:
        new_y += 1 # move up
    elif 359 > roll > 179 and y != 0:
        new_y -= 1 # move down
    new_x, new_y = check_wall(x, y, new_x, new_y)
    return new_x, new_y
    

b = (0,0,0)
w = (255,255,255)
r = (255,0,0)
'''board = [[r,r,r,r,r,r,r,r],
         [r,b,b,b,b,b,b,r],
         [r,b,b,b,b,b,b,r],
         [r,b,b,b,b,b,b,r],
         [r,b,b,b,b,b,b,r],
         [r,b,b,b,b,b,b,r],
         [r,b,b,b,b,b,b,r],
         [r,r,r,r,r,r,r,r]]'''

board = [[r,r,r,b,b,b,b,r],
         [r,b,b,b,b,b,b,r],
         [b,b,b,b,b,r,b,r],
         [b,r,r,b,r,r,b,r],
         [b,b,b,b,b,b,b,b],
         [b,r,b,r,r,b,b,b],
         [b,b,b,r,b,b,b,r],
         [r,r,b,b,b,r,r,r] ]
         
y = 2
x = 2
board[y][x] = w
board_1D = sum(board, [])
print(board_1D)
sense.set_pixels(board_1D)

while True:
    pitch = sense.get_orientation()['pitch']
    roll = sense.get_orientation()['roll']
    print("Pitch {0} Roll {1}".format(round(pitch,0), round(roll,0)))
    board[y][x] = b
    x, y = move_marble(pitch, roll, x, y)
    board[y][x] = w
    sense.set_pixels(sum(board,[]))
    sleep(0.05)
    
