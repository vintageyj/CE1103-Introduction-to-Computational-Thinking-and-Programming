#Take 2 lists of integer grades from two classes
#Returns the highest avg score
#Returns the highest maximum score

#Sample input
#Class 1: [90,10,50]
#Class 2: [80,50,30]

print("Key in the class grade using the format below.")
print("Grade 1, Grade 2, Grade 3...")
class1 = list(map(int, input("Enter First Class' grades: ").split(",")))
class2 = list(map(int, input("Enter Second Class' grades: ").split(",")))
print()

class1_avg = sum(class1)/len(class1)
class2_avg = sum(class2)/len(class2)
if class1_avg % 1 == 0:
    class1_avg = int(class1_avg)
else:
    class1_avg = round(class1_avg, 1)
if class2_avg % 1 == 0:
    class2_avg = int(class2_avg)
else:
    class2_avg = round(class2_avg, 1)

if class1_avg > class2_avg:
    print(f"Class 1 has a higher average score of {class1_avg}.")
elif class1_avg < class2_avg:
    print(f"Class 2 has a higher average score of {class2_avg}.")
else:
    print(f"Both classes have the same average score of {class1_avg}.")

class1_max, class2_max = max(class1), max(class2)
if class1_max > class2_max:
    print(f"Class 1 has the highest maximum score of {class1_max}.")
elif class1_max < class2_max:
    print(f"Class 2 has the highest maximum score of {class2_max}.")
else:
    print(f"Both classes have the highest maximum score of {class1_max}.")
