#include <stdio.h>

int main() {
    int n;

    // Meminta input dari user
    printf("Masukkan jumlah baris: ");
    scanf("%d", &n);

    // Validasi input
    if (n < 0) {
        printf("The number is negative\n");
    }
    else if (n>0) {
        printf("The number is positive\n");
    }
    else {
        printf("The number is zero\n");
    }
        
    

    return 0;
}