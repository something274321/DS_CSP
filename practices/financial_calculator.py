#DJ Financial Calculator
income = int(input("what is your monthly income $ "))
rent = int(input("what is your monthly rent $ "))
utilities = int(input("what is your monthly utilities cost $ "))
groceries = int(input("what is your monthly groceries cost $ "))
transportation = int(input("what is your monthly transportation cost $ "))
print(f"Your rent is ${rent} and that is {rent/income*100}% of your income.")
print(f"Your utilities cost is ${utilities} and that is {utilities/income*100}% of your income.")
print(f"Your groceries cost is ${groceries} and that is {groceries/income*100}% of your income.")
print(f"Your transportation cost is ${transportation} and that is {transportation/income*100}% of your income.")
life_cost = rent+utilities+groceries+transportation
remainder = income - life_cost
if remainder == 0:
    print("You have no Money left over")
elif remainder < 0:
    print(f"You are ${remainder*-1} in debt")
else:
    savings = income/10
    print(f"You should save ${savings} a month, that is 10% of your income.")
    print (f"You have ${remainder-savings} of spending money each month!")