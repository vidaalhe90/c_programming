
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Exercise 7.5 - The number of even numbers and odd numbers.            *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - *
 * Write a program that reads ten integers, and then display the number  *
 * of even numbers and odd numbers. Assume that the inputs ends with 0.  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifdef _WIN32
    #define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main(void) {
    /* init counters array (even numbers, odd numbers)*/
    int counters[] = {0, 0};

    /* enter integers (until 0 appears)*/
    int n;
    printf("%s", "Enter numbers (0 to exit): ");
    for (;;) {
        scanf("%d", &n);
        if (n == 0) { break; }
        counters[n % 2]++;
    }

    /* shows results */
    printf("The number of odd numbers: %d\n", counters[1]);
    printf("The number of even numbers: %d\n", counters[0]);

    /* ends program execution */
    return EXIT_SUCCESS;
}
