width = int(input("Please enter pattern width: "))
height = width*2 - 1
for h in range(1,height+1):
    if h <= width:
        print("*"*h)
    elif h > width:
        print("*"*(height+1-h))