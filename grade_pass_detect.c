#include <stdio.h>

int main() {
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    // Check if the grade is 60 or above using bitwise AND
    if (grade >= 60) {
        printf("You passed!\n");
    } else {
        printf("You failed.\n");
    }

    return 0;
}