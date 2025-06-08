
/////////////////////////////////////////////////////////////////////////////
// Exercise 7.12 - Reverse an array.                                       //
/////////////////////////////////////////////////////////////////////////////
// Write a function that reverses an array passed as argument. Then        //
// write a test program that prompts the user to enter 10 numbers, invokes //
// the function to reverse the numbers and displays the numbers.           //
/////////////////////////////////////////////////////////////////////////////

// in order to get portable code
#ifdef _WIN32
    #define _CRT_SECURE_NO_WARNINGS
#endif

// include standard headers
#include <stdio.h>
#include <stdlib.h>

// macro definition
#define N 10

// function 'reverses' prototype
void reverses(int x[], size_t n);

// helper function 'shows' used to display array content.
void shows(int x[], size_t);

// function main begins program execution
int main(void) {
    // enter 10 numbers
    int numbers[N];
    printf("Enter %d numbers: ", N);
    for (size_t i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    // shows original array, reverses it, and shows it reversed
    shows(numbers, N);
    reverses(numbers, N);
    shows(numbers, N);
    
    // ends program execution
    return EXIT_SUCCESS;
}

// function 'reverses' definition
void reverses(int x[], size_t n) {
    size_t start = 0, end = n - 1;
    while (start < end) {
        int temp = x[start];
        x[start] = x[end];
        x[end] = temp;
        start++;
        end--;
    }
}

// helper function 'shows' used to display array content.
void shows(int x[], size_t n) {
    char sep = '[';
    for (size_t i = 0; i < n; i++) {
        printf("%c%d", sep, x[i]);
        sep = ',';
    }
    puts("]");
}
