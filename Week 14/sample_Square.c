#define Square(x) ((x) * (x))

#include <stdio.h>

    int main() {
        int a = 5;
        int b = Square(a);
        printf("The square of %d is %d\n", a, b);
        return 0;
    }
