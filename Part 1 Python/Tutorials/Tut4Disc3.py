#List every student's score in a group
def listGrades(dataBase, group):
    try:
        for ID in dataBase[group]:
            print(f"{ID}: {dataBase[group][ID]}")
    except KeyError:
        print("Group not in data base.")