//DS 6 Silly Sentences - C
#include <stdio.h>
#include <string.h>


int main(){

    char noun [50];
    char adjective[50];
    char verb[50];
    char noun2[50];


    printf("type a noun\n");
    scanf("%s",&noun);
    printf("type a adjective\n");
    scanf("%s",&adjective);
    printf("type a past-tense verb\n");
    scanf("%s",&verb);
    printf("type another noun\n");
    scanf("%s",&noun2);
    
    
    strcat(adjective," ");


    printf("The %s%s %s to the %s",adjective,noun,verb,noun2);



}