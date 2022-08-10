#Input student's score into dataBase
def inputRecord(dataBase, group, ID, score):
    if group not in dataBase:
        dataBase[group] = {}
    dataBase[group][ID] = score
    print("Student's score has been updated.")