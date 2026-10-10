#include <stdio.h>

int main () {
    int grade;
    int aCount = 0, bCount= 0, cCount=0, dCount = 0, eCount=0;

    printf ("enter your grade = \n");
    printf ("enter EOF character to end the input\n");

    while ( ( grade = getchar()) !=EOF) 
    {
        switch (grade)
    {
    case 'A': case 'a':
        ++aCount;
        break;
    
    case 'B': case 'b' :
        ++bCount;
        break;

    case 'C' : case 'c' :
        ++cCount;
        break;

    case 'D' : case 'd' :
        ++dCount;
        break;
        
    case 'E' : case 'e' :
        ++eCount;
        break;

    case '\n' : case ' ' :
    break;

    default:
        printf ("Incorrect letter grade.");
        printf ("Enter a new grade\n");
        break;
        }
    }
    
    printf ("\nTotals for each letter grade are: \n");
    printf ("A: %d\n", aCount);
    printf ("B: %d\n", bCount);
    printf ("C: %d\n", cCount);
    printf ("D: %d\n", dCount);
    printf ("E: %d\n", eCount);

    return 0;
}