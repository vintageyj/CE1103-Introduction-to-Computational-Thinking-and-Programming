#Calls for student's score from dataBase
def query(dataBase, group, ID):
    try:
        grade = dataBase[group][ID]
        print(f"This student's score is {grade}.")
    except KeyError:
        print("Student's score not in data base.")