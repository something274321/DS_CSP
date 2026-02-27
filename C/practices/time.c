#include <stdio.h>
#include <stdbool.h>


int main(){
    int time;

    printf("what hour is it in military time? ");
    scanf("%d",&time);
    if (time == 0){
        printf("GO TO SLEEP IT'S MIDNIGHT!");
    }
    else if (time == 24){
        printf("Sorry, but thats not how military time works, for midnight put in 0");
    }
    else if (time == 2){
        printf("it's way to early to be awake");
    }
    else if (time < 0){
        if (time >= -24){
            printf("that's yesterday");
        }
        else{
            printf("I'm not a time machine");
        }
    }
    else if (time == 12){
        printf("It's noon");
    }
    else if (time == 16){
        printf("It's time to go home");
    }
    else if (time == 1){
        printf("ZZZZZZZZZZZZZZZZZZZZZZZZZ");
    }
    else if (time > 24){
        if (time <=48){
            printf("that's tomarrow");
        }
        else{
            printf("I'm not a time machine, come back later and ask me again");
        }
    }
    else if (time < 5){
        printf("go back to sleep");
    }
    else if (time < 6){
        printf("you're up early");
    }
    else if (time < 12){
        printf("Good morning");
    }
    else if (time < 17){
        printf("Good afternoon");
    }
    else if (time < 21){
        printf("Good evening");
    }
    else if (time < 23){
        printf("Good Night");
    }
    else if (time < 24){
        printf("Go To Bed");
    }
    else{
        printf("WITCHCRAFT!");
    }


    return(0);
}