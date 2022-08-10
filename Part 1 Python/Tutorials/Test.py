str1 = "couple"
str2 = "q"
print(str1.find(str2))
newStr = str1[::str1.find(str2)]
print(newStr)
