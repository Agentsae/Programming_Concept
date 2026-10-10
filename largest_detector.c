#include <stdio.h>

int main () {
    int n, n1, n2;

    printf("Enter three integers: \n");
    scanf("%d %d %d", &n, &n1, &n2);

    if (n >= n1 && n >= n2) {
        printf("The largest number is: %d\n", n);
    }
    else if (n1 >= n && n1 >= n2) {
        printf("The largest number is: %d\n", n1);
    }
    else {
        printf("The largest number is: %d\n", n2);
    }
    return 0;
    
}