#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    //1
    int grades[]={84,43,99,74,2,88,92,85,97,62,81,100,96,83};
    printf("%d\n",grades[2]);
    grades[2] = 1;
    printf("%d\n", grades[2]);

    for(int i =20; i>=0; i--){
        printf("%d ",i);
    }


    int grade_len = sizeof(grades)/sizeof(grades[0]);
    for (int index = 0; index < grade_len; index++){
        printf("\n%d",grades[index] + 5);
    }


    printf("\n");


    srand(time(NULL));
    int goose = rand() % 15 +1;
    int count = 1;
    for(count; count < goose; count++){
        printf("duck\n");
    }
    printf("GOOSE\n");


    return 0;
}
