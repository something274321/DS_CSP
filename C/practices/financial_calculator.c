// DS financial calculator
#include <stdio.h>
int money;
int rent;
int util;
int gro;
int tran;

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

    int save = 10/money;

    float rentp = rent/money*100;
    float utilp = util/money*100;
    float grop = gro/money*100;
    float tranp = tran/money*100;
    float cost = rent+util+gro+tran+save;
    float remain = money-cost;

    printf("Your rent/mortgage is $%d and that is %.2f percent of your income.\n",rent,rentp);
    printf("Your utilities cost is $%d and that is %.2f percent of your income.\n",util,utilp);
    printf("Your groceries cost is $%d and that is %.2f percent of your income.\n",gro,grop);
    printf("Your transportation cost is $%d and that is %.2f percent of your income.\n",tran,tranp);

    printf("You should save $%d a month, that is 10 percent of your income.\n",save);

    printf("You have $%.2f of spending money each month!\n",cost);

    return 0;
}