#include <stdio.h>

 int main () {
    int number;

       printf("Enter a positive integer: ");
       scanf("%d", &number);

         for (int i = 0; i <= number; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
         }
             
           
    
    return 0;

 }