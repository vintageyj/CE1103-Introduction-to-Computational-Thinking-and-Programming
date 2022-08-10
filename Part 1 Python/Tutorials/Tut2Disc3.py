F1 = 1
F2 = temp = 1
fibonacci = []
fibonacci.append(F1)
fibonacci.append(F2)
Fn = F1 + F2
while Fn < 1000:
    fibonacci.append(Fn)
    Fn, temp = Fn + temp, Fn
for i in fibonacci:
    if i == fibonacci[-1]:
        print(i)
    else:
        print(i, end=", ")