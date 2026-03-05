#include <stdio.h>

int x = 0;
void add(){
    x++;
}

float divide(int num_one, int num_two){
    return (float) num_one/ num_two;
}


void hello(char* name){
    printf("Hello %s. Welcome to my program!\n",name);
}
int main(){
    add();
    add();
    add();
    add();
    add();
    printf("%d\n",x);

    float quotient = divide(8,4);
    printf("%.2f\n",quotient);
    printf("%.2f\n",divide);


    name("Bob");
    name("Steve");
    name("Jen");
    name("Jon");




    return 0;
}