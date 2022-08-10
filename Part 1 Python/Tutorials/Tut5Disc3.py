def sumNodes(t):
    total = 0
    if len(t) == 1:
        total += t[0]
    else:
        numLeft = sumNodes(t[0])
        numRight = sumNodes(t[2])
        return (numLeft + numRight + t[1])
    return total
t = [[[7], 1, [9]], 3, [[8], 2, [4]]]
print(sumNodes(t))