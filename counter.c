#include<stdio.h>

int main(){
    int counter = 2;          // initialization
    while ( counter < 10 ) {     // repetition condition
        printf( "%d\n", counter );
        ++counter;             // increment
    }

    return 0;
}