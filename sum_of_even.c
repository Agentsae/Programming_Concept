#include <stdio.h>

int main() {
    int number;
    int sum=0;
    int even;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for (int i=number; i>=1; i--) {
        if (i % 2 == 0) {
            
            sum += i;
            
        } 
    }

    printf ("sum of even number =%d\n", sum);

    return 0;
}
