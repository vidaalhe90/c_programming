
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Exercise 7.3 - Count occurrence of numbers.                           *
 *                                                                       *
 * Write a program that reads the integers between                       *
 * 1 and 50 and count ocurrences of each. Assume the input ends with 0.  * 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifdef _WIN32
    #define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>

#define N 50

/* function main begins program execution */
int main(void) {
    /* init counter's array */
    int counters[N + 1] = {0};

    /* enter values between 1 and 50 */
    int n;
    printf("%s", "Enter integers between 1 and 50 (0 to exit): ");
    for (;;) {
        scanf("%d", &n);
        if (n == 0)  { break; }
        if (1 <= n && n <= N) { counters[n]++; }
    }

    /* shows counters */
    for (int i = 1; i <= N; i++) {
        if (counters[i]) {
            printf("%d ocurrs %d time\\s.\n", i, counters[i]);
        }
    }

    return EXIT_SUCCESS;
}
