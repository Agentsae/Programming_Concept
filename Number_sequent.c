#include <stdio.h>

int main() {
    int n;

    // Meminta input dari user
    printf("Masukkan jumlah baris: ");
    scanf("%d", &n);

    // Validasi input
    if (n <= 0) {
        printf("Masukkan harus bilangan bulat positif.\n");
        return 1;
    }

    // Loop untuk mencetak pola segitiga angka
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}