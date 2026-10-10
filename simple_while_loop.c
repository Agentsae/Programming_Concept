#include <stdio.h>

int main() {
    int product = 55;

    // Using a while loop to decrement product until it is less than or equal to 50
    printf("Max Quantity = 50 so decrement it until 50:\n");
    while (product >= 50) {
        printf ("%d\n", product);
        product--;
    }
    return 0;
}