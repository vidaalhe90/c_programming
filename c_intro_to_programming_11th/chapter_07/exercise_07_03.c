
/////////////////////////////////////////////////////////////////
// Exercise 7.3 - Count ocurrences of numbers.		       //
/////////////////////////////////////////////////////////////////
// Write a program that reads the integers between 1 and 50    //
// and count ocurrecnes of each. Assume the input ends with 0. //
/////////////////////////////////////////////////////////////////

// in order to get portable code
#ifdef _WIN32
    #define _CRT_SECURE_NO_WARNINGS
#endif

// include standard headers
#include <stdio.h>
#include <stdlib.h>

// macro definition
#define N 50

// function main begins program execution
int main(void) {
    // inits counters array
    int counters[N + 1] = {0};

    // enter integers between 1 and 50 and increments corresponding counter
    int n;
    printf("%s", "Enter integers between 1 and 50 (0 to exit): ");
    for (;;) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        if (1 <= n && n <= N) {
            counters[n]++;
        }
    }

    // shows results
    for (int i = 1; i <= N; i++) {
        if (counters[i]) {
            printf("%d ocurrs %d time\\s.\n", i, counters[i]);
        }
    }

    // ends program execution
    return EXIT_SUCCESS;
}
