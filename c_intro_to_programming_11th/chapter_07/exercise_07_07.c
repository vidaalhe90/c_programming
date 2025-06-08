
////////////////////////////////////////////////////////////////////////
//Exercise 7.7 - Count single digits.                                 //
////////////////////////////////////////////////////////////////////////
// Write a program that generates 200 random integers between 0 and 9 //
// and displays the count of each number.                             //
////////////////////////////////////////////////////////////////////////

// in order to get portable code
#ifdef _WIN32
    #define _CRT_SECURE_NO_WARNINGS
#endif

// include standard headers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// macro definitions
#define DIGITS 10
#define N 200

// function main begins program execution
int main(void) {
    // inits counters array (for each digit)
    int counters[DIGITS] = {0};
    
    // generates 200 random digits and increments corresponding counter
    srand((unsigned)time(NULL));
    for (int i = 1; i <= N; i++) {
        counters[rand() % DIGITS]++;
    }

    // shows results
    for (int digit = 0; digit < DIGITS; digit++) {
        printf("Digit %d: %d\n", digit, counters[digit]);
    }

    // ends program execution
    return EXIT_SUCCESS;
}
