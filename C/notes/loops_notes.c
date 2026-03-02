#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 


int main(){
    //1
    int i = 1;
    while (i<=10){
        printf("%d\n",i);
        i++;
    }

    srand(time(NULL)); //lets us make a random number

    printf("%d\n",(rand()%5)+5);
    printf("%d\n",(rand()%10)+1);
    printf("%d\n",rand()%11);


    //2
    int goose = rand() %100 +1;
    int count = 1;

    while (count<goose){
        printf("Duck\n");
        count++;
    }
    printf("GOOSE!");

    //3
    int number = rand() % 20 + 1;

    while (true){

        int guess;
        printf("Guess a number between 1 and 20: ");
        scanf("%d", &guess);
        if(guess == number){
            printf("You win! The number was %d\n",number);
            break;
        }else if(guess<number){
            printf("You guess is too low. Try again.\n");

        }else{
            printf("You guess is too high. Try again.\n");

        }
    }

    


    return 0;
}