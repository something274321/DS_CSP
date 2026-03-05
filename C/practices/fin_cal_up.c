//DJ Financial Calculator 2 C
#include <stdio.h>
int money;
int rent;
int util;
int gro;
int tran;

int money(cost){
    return float(input(f"what is your monthly {cost} $ "));
    income = money("income");
    rent = money("rent");
    utilities = money("utilities cost");
    groceries = money("groceries cost");
    transportation = money("transportation cost")
}

int percent(thing,cost2){
    printf(f"Your {thing} is ${cost2} and that is {cost2/income*100}% of your income.");
}
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





int main(){
    printf("What is your monthly income? $ \n");
    scanf("%d",&money);

    printf("What is your monthly rent/mortgage? $ \n");
    scanf("%d",&rent);

    printf("What is your monthly utilities cost? $ \n");
    scanf("%d",&util);

    printf("What is your monthly groceries cost? $ \n");
    scanf("%d",&gro);

    printf("What is your monthly transportation cost? $ \n");
    scanf("%d",&tran);

    float save = (float)money/10;

    float rentp = (float)rent/money*100;
    float utilp = (float)util/money*100;
    float grop = (float)gro/money*100;
    float tranp = (float)tran/money*100;
    float cost = (float)rent+util+gro+tran+save;
    float remain = (float)money-cost;

    printf("Your rent/mortgage is $%d and that is %.2f percent of your income.\n",rent,rentp);
    printf("Your utilities cost is $%d and that is %.2f percent of your income.\n",util,utilp);
    printf("Your groceries cost is $%d and that is %.2f percent of your income.\n",gro,grop);
    printf("Your transportation cost is $%d and that is %.2f percent of your income.\n",tran,tranp);

    printf("You should save $%.2f a month, that is 10 percent of your income.\n",save);

    printf("You have $%.2f of spending money each month!\n",remain);

    return 0;
}