
////////////////////////////////////////////////////////////////////////////////
// Exercise 7.9 - Find the largets element.                                   //
////////////////////////////////////////////////////////////////////////////////
// Write a function that finds the largest element in an array                //
// of doyble values using the following function prototype:                   //
//                                                                            //
// double maximum(double[] array[], size_t n);                                //
//                                                                            //
// Write a test program that prompts the user to enter 10 numbers, invokes    //
// this function to return the maximum value, and displays the maximum value. //
////////////////////////////////////////////////////////////////////////////////

// in order to get portable code
#ifdef _WIN32
    #define _CRT_SECURE_NO_WARNINGS
#endif

// include standard headers
#include <stdio.h>
#include <stdlib.h>

// macro definition
#define N 10

// function 'maximum' prototype
double maximum(double array[], size_t n);

// function main begins program execution
int main(void) {
    // enters 10 integers
    double values[N];
    printf("Enter %d numbers: ", N);
    for (size_t i = 0; i < N; i++) {
        scanf("%lf", &values[i]);
    }

    // calls 'maximum' function
    double max = maximum(values, N);

    // shows results
    printf("The maximum number is %.2lf\n", max);

    // ends program execution
    return EXIT_SUCCESS;
}

// function 'maximum' definition
double maximum(double array[], size_t n) {
    double max = array[0];
    for (size_t i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
