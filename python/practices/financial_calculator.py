#DJ Financial Calculator 2
def money(cost):
    return float(input(f"what is your monthly {cost} $ "))
income = money("income")
rent = money("rent")
utilities = money("utilities cost")
groceries = money("groceries cost")
transportation = money("transportation cost")

def percent(thing,cost2):
    print(f"Your {thing} is ${cost2} and that is {cost2/income*100}% of your income.")
percent("rent",rent)
percent("utilities cost",utilities)
percent("groceries cost",groceries)
percent("transportation cost",transportation)
life_cost = rent+utilities+groceries+transportation
remainder = income - life_cost
if remainder == 0:
    print("You have no Money left over")
elif remainder < 0:
    print(f"You are ${remainder*-1} in debt")
else:
    savings = income/10
    if savings > remainder:
        print(f"You should save ${remainder} a month, that is the rest of your income.")
    else:
        print(f"You should save ${savings} a month, that is 10% of your income.")
        print (f"You have ${remainder-savings} of spending money each month!")