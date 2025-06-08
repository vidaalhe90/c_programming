
//////////////////////////////////////////////////////////////////////////
// Exercise 7.11 - Statistics: Compute deviation.                       //
//////////////////////////////////////////////////////////////////////////
// This exercise uses the formulas to compute the standard deviation of //
// n number. Your program should contain the following functions:       //
//                                                                      //
// double deviation(double x[], size_t n);                              //
// double mean(double x[], size_t n);                                   //
//                                                                      //
// Write a test program that prompts 10 numbers and displays the mean   //
// and standard deviation.                                              //
//////////////////////////////////////////////////////////////////////////

// in order to get portable code
#ifdef _WIN32
    #define _CRT_SECURE_NO_WARNINGS
#endif

// include standard headers
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// macro definition
#define N 10

// function 'mean' prototype
double mean(double x[], size_t n);

// function 'deviation' prototype
double deviation(double x[], size_t n);

// function main begins program execution
int main(void) {
    // enter 10 numbers
    double numbers[N];
    printf("Enter %d numbers: ", N);
    for (size_t i = 0; i < N; i++) {
        scanf("%lf", &numbers[i]);
    }

    // calls 'mean' and 'deviation' functions
    double x_mean = mean(numbers, N);
    double x_deviation = deviation(numbers, N);

    // shows results
    printf("The mean is %lf\n", x_mean);
    printf("The standard deviation is: %lf\n", x_deviation);

    // ends program execution
    return EXIT_SUCCESS;
}

// function 'mean' definition
double mean(double x[], size_t n) {
    double sum = 0.0;
    for (size_t i = 0; i < n; i++) {
        sum += x[i];
    }
    return sum / n;
}

// function 'deviation' definition
double deviation(double x[], size_t n) {
    double sum = 0.0;
    double x_mean = mean(x, n);
    for (size_t i = 0; i < n; i++) {
        sum += pow(x[i] - x_mean, 2);
    }
    return sqrt(sum / (n - 1));
}
