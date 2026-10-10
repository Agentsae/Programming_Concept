#define DOUBLE(x) (2 * (x))
#define TRIPLE(x) (3 * (x))
#include <stdio.h>

int main() {
    int num = 5;
    printf("Double of %d is %d\n", num, DOUBLE(num));
    printf("Triple of %d is %d\n", num, TRIPLE(num));
    return 0;
}

