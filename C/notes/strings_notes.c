#include <stdio.h>
#include <string.h>


int main(){
    char subject[] = "Computer Science Principles";
    char fruit[] = "grape";
    char book[50];

    printf("Subject: %s\nFruit: %s\n", subject, fruit);

    printf("What is your favorite book:  ");
    fgets(book, sizeof(book), stdin);

    printf("Your book is %s, That is a really good book!\n", book);

    char first[] = "Johny";
    char last[] = "Doe";

    //first[0] = 'K';
    //first[1] = 'a';
    //first[2] = 'r';
    //first[3] = 'l';
    //first[4] = ' ';
    strcat(first,last);

    printf("%s\n", first);

    char alpha[27];

    strcat(alpha,"abcdefghijklmnopqrstuvwxyz");
    printf("%lu\n", strlen(first));



    return 0;

}
