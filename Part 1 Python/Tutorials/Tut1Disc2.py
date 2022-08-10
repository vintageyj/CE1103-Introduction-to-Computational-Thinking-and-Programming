totalBoys = int(input("Enter the number of boys: "))
totalGirls = int(input("Enter the number of girls: "))
classTotal = totalBoys + totalGirls
percentageBoys = round(totalBoys*100/classTotal)
percentageGirls = round(totalGirls*100/classTotal)
print(f"Boys: {percentageBoys}%")
print(f"Girls: {percentageGirls}%")