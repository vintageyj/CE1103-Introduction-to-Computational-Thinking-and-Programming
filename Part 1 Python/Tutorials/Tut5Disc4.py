neg_inf = float("-inf")
def maxNodes(t):
    if len(t) == 1:
        total += t[0]
    else:
        numLeft = sumNodes(t[0])
        numRight = sumNodes(t[2])
        return (numLeft + numRight + t[1])
    return maxValue
t = [[[7], 1, [9]], 3, [[8], 2, [4]]]
print(maxNodes(t))