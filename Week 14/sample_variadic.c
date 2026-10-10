#include<stdio.h>
#define LOG(fmt, ...) \
    do { \
        fprintf(stderr, "LOG: " fmt "\n", __VA_ARGS__); \
    } while (0)

int main() {
    int a = 10;
    int b = 20;
    LOG("The values are a=%d, b=%d", a, b);
    int sum = a + b;    
    LOG("The sum of a and b is %d", sum);
    return 0;
}