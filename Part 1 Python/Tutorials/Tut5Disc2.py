def numOfNodes(t):
    if len(t) == 1:
        return 1
    elif len(t) == 0:
        return 0
    else:
        numLeft = numOfNodes(t[0])
        numRight = numOfNodes(t[2])
        return (numLeft + numRight + 1)
t = [[[7], 1, [9]], 3, [[8], 2, [4]]]
print(numOfNodes(t))