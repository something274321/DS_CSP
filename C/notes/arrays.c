#include <stdio.h>


int main(){
    //1
    int grades[]={84,43,99,74,2,88,92,85,97,62,81,100,96,83};
    printf("%d\n",grades[3]);
    grades[3] = 1;
    printf("%d\n", grades[3]);


    return 0;
}