#List max grade in a group
def maxGrade(dataBase, group):
    try:
        max_grade = max(dataBase[group].values())
        print(f"Max grade in {group} is {max_grade}.")
    except:
        print("Group not in data base.")