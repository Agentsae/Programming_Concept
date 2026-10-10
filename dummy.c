#include <stdio.h>

int main() {

    int i = 0;
while (i < 10) {
    if (i == 5) {
        break; // keluar dari loop saat i = 5
    }
    printf("%d\n", i);
    i++;
}


    return 0;
}
