#include <stdio.h>

int main() {
    int temps[7] = {30, 31, 29, 28, 33, 32, 30};

    int i = 1;
    while (i < 7) {
        printf("Day %d: %d°C\n" , i+1, temps[i]);
        i++;
    }
    return 0;
}