#include <stdio.h>

int main() {
    int total = 0; // Sum of grades
    int gradecounter = 0; // Number of grades entered
    int grade; // Current grade
    int average; // Average of grades


    while (gradecounter < 10) {
        printf ("Enter grade: ");
        scanf ("%d", &grade);
        total = total + grade;
        gradecounter = gradecounter + 1;
    }

    average = total / gradecounter;
    printf ("Class average is %d\n", average);

    return 0;
}