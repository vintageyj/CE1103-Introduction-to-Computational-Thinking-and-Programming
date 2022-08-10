#Create a system for storing anonymous grades for each lab class
#Each lab class will have different lab groups, i.e. FE2
#Each individual in each lab group has an ID of x, where 1 <= x <= 40
#Each individual should also have a grade of y assigned to them, where 1 <= y <= 100

#Function for storing data
def key_in(labClass):
    individual = input("Enter the details using the format below.\nLab Group, ID(1-40), Grade(1-100): ")
    mylist = [i.strip() for i in individual.split(",")]
    group, ID, grade = mylist[0].upper(), mylist[1], mylist[2]
    labClass[group] = {}
    labClass[group][ID] = grade
    print("This individual's grade has been stored.\n")

#Function for calling data
def check(labClass):
    details = input("Enter the details using the format below.\nLab Group, ID(1-40): ")
    mydetails = [j.strip() for j in details.split(",")]
    group, ID = mydetails[0].upper(), mydetails[1]
    print(f"\nThis individual's grade is {labClass[group][ID]}.\n")

#Start of looping program
labClass = {}
print("Lab Class Grading Dictionary v1")
while True:
    #Asking if user wishes to store or check an individual's grade in the dictionary
    print("Enter 'exit' to exit from the program.")
    storeOrCheck = input("Do you wish to STORE or CHECK an individual's grade?\n")
    if storeOrCheck.upper() == "EXIT":
        quit()
    elif storeOrCheck.upper() == "STORE":
        key_in(labClass)
    elif storeOrCheck.upper() == "CHECK":
        check(labClass)
        