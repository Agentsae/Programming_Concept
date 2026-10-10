#include <stdio.h>

    int main() {

        int sum = 0;
        int number;

        for (number=2;number <= 200; number+= 2) 

            sum += number;

            printf("Sum is %d\n", sum);
            
        
        return 0;

    }