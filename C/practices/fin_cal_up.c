//DJ Financial Calculator 2 C

#include <stdio.h>

float cash(char* cost){   
    float temp_num;
    printf("what is your monthly  %s?\n$ ",cost);
    scanf ("%f", &temp_num);
    return temp_num;
}

float percent(char*cost,float cost2,float money2){
    float costp = cost2/money2*100;
    printf("Your %s is $%.2f and that is %2.f percent of your income.\n",cost,cost2,costp);
}

int main(){
    float money = cash("income");
    float rent = cash("rent/mortgage");
    float util = cash("utilities");
    float gro = cash("groceries");
    float tran = cash("transportation");
    percent("rent/mortgage",rent,money);
    percent("utilities",util,money);
    percent("groceries",gro,money);
    percent("transportation",tran,money);

    float save = money/10;

    float cost3 = (float)rent+util+gro+tran+save;
    float remain = (float)money-cost3;


    printf("You should save $%.2f a month, that is 10 percent of your income.\n",save);

    printf("You have $%.2f of spending money each month!\n",remain);

    return 0;
}