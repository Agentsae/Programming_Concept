#include <stdio.h>

 int main () {

    int ticket=1, age=20;

        if (age > 18){

            if (ticket) {
                printf("Welcome to the concert\n");
            } else {
                printf ("please buy a ticket\n");
            }
 
        } else {
            printf("You're underage\n");
        }


    return 0;
 }