#include <stdio.h>

int main() {
    int scores[5] = {80, 90, 75, 85, 100};
    int sum = 0; //don't forget to initizalize
    
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }

    float avarage = sum/5.0;
    printf("average=%.2f\n", avarage);

    return 0;
}