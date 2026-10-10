#include<stdio.h>

#define CONCAT(a, b) a##b

int main() {
    int Hello = 100;
    printf("The value of xy is: %d\n", CONCAT(Hel,lo));
    return 0;
}