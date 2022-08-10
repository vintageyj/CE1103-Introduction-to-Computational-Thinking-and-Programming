#Design a program taking in a stringhi
#At least 1 upper, lower, digit char
#Password at least 8 characters to be strong

#Function requesting user to input strong password
def enter_pass():
    print(
    "Your password must be strong to be accepted. It must contain at least:\n\
        - 1 Upper Case Character\n\
        - 1 Lower Case Character\n\
        - 1 Digit\n\
        - 8 Characters Long")
    print("Enter '####' to exit.")
    print()
    mypass = input("Enter a password: ")
    if mypass == "####":
        print()
        print("Program exited.")
        quit()
    return mypass

mypass = enter_pass()

#Strong password fulfils all 4 criterias.
strongPass = 4
strength = 0

while strength != 4:
    strength = 0
    #Check for upper case character
    for char in mypass:
        if char.isupper():
            strength += 1
            break
    if strength < 1:
        print()
        print("Your password does not contain an UPPER CASE character, try again!")
        print()
        mypass = enter_pass()
        continue

    #Check for lower case character
    for char in mypass:
        if char.islower():
            strength += 1
            break
    if strength < 2:
        print()
        print("Your password does not contain a LOWER CASE character, try again!")
        print()
        mypass = enter_pass()
        continue

    #Check for a digit
    for char in mypass:
        if char.isdigit():
            strength += 1
            break
    if strength < 3:
        print()
        print("Your password does not contain a DIGIT, try again!")
        print()
        mypass = enter_pass()
        continue

    #Check for password length
    if len(mypass) >= 8:
        strength += 1
    if strength < 4:
        print()
        print("Your password does not contain AT LEAST 8 CHARACTERS, try again!")
        print()
        mypass = enter_pass()
        continue
print()
print("Your entered password is strong! Nice!")