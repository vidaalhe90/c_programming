
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Exercise 7.9 - Find the largest element.                                    *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * 
 * Write a function that find the largest element in an array                  *
 * of double array using the following prototype:                             *
 *                                                                             *
 *      double maximum(double array[], size_t n);                                 *
 *                                                                             *
 * Write a test program that prompts the user to enter 10 numbers, invokes     *
 * this function to return the maximum value, and displays the maximum array. *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifdef _WIN32
    #define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>

#define N 10

/* function 'maximum' prototype */
double maximum(double array[], size_t n);

/* function main begins program execution */
int main(void) {

    /* enter 10 double numbers */
    double values[N];
    printf("Enter %d numbers: ", N);
    for (size_t i = 0; i < N; i++) {
        scanf("%lf", &values[i]);
    }

    /* call maximum function */
    double max = maximum(values, N);

    /* shows results */
    printf("The maximum number is %.2lf\n", max);

    /* ends program execution */
    return EXIT_SUCCESS;
}

/* function 'maximum' definition */
double maximum(double array[], size_t n) {
    double max = array[0];
    for (size_t i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
