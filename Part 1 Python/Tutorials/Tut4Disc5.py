#dataBase
labClass = {}

#Input student's score into dataBase
def inputRecord(dataBase, group, ID, score):
    if group not in dataBase:
        dataBase[group] = {}
    dataBase[group][ID] = score
    print("Student's score has been updated.")

#Calls for student's score from dataBase
def query(dataBase, group, ID):
    try:
        grade = dataBase[group][ID]
        print(f"This student's score is {grade}.")
    except KeyError:
        print("Student's score not in data base.")

#List every student's score in a group
def listGrades(dataBase, group):
    try:
        for ID in dataBase[group]:
            print(f"{ID}: {dataBase[group][ID]}")
    except KeyError:
        print("Group not in data base.")

#List max grade in a group
def maxGrade(dataBase, group):
    try:
        max_grade = max(dataBase[group].values())
        print(f"Max grade in {group} is {max_grade}.")
    except:
        print("Group not in data base.")

#List every group in a dataBase
def listGroups(dataBase):
    if len(dataBase) == 0:
        print("Data base is empty.")
    else:
        i = 1
        for group in dataBase:
            print(f"{i}. {group}")
            i += 1

#Prompts action from user
def main_menu():
    while True:
        try:
            print("\n\
Welcome to the grading system! Please enter your option: \n\
1: Input record\n\
2: Query a student\n\
3: List grades in a group\n\
4: Get max grade in a group\n\
5: List all group names\n\
6: Exit") #Can use triple quotes too
            option = input("Option: ")
            if float(option) % int(option) != 0:
                print("Invalid input! Please enter 1-6.")
                continue
            break
        except:
            print("Invalid input! Please enter 1-6.")
    return int(option)

#ID only takes 1-40 as inputs
def i_d():
    while True:
        try:
            x = input("Please input the student id: ")
            if float(x) % int(x) != 0 or int(x) < 1 or int(x) > 40:
                print("Invalid input! Student's ID can only be 1-40.")
                continue
            break
        except:
            print("Invalid input! Student's ID can only be 1-40.")
    return x

def my_score():
    while True:
        try:
            y = input("Please input the score: ")
            if float(y) % int(y) != 0 or int(y) < 1 or int(y) > 100:
                print("Invalid input! Student's ID can only be 1-100.")
                continue
            break
        except:
            print("Invalid input! Student's ID can only be 1-100.")
    return y

while True:
    option = main_menu()
    if option == 1:
        group = input("Please input the group name: ")
        ID = i_d()
        score = my_score()
        inputRecord(labClass, group, ID, score)
    elif option == 2:
        group = input("Please input the group name: ")
        ID = i_d()
        query(labClass, group, ID)
    elif option == 3:
        group = input("Please input the group name: ")
        listGrades(labClass, group)
    elif option == 4:
        group = input("Please input the group name: ")
        maxGrade(labClass, group)
    elif option == 5:
        listGroups(labClass)
    elif option == 6:
        print("Program exited.")
        quit()