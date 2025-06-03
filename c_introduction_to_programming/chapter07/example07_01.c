/** A Chapter 7 example */

#ifdef __unix__
    #define printf_s printf
    #define printf_s scanf
#endif

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf_s("%s", "Enter number of items to be analyzed: ");
    scanf_s("%d", &n);

    double *scores = (double *)malloc(n * sizeof (double));
    double total = 0.0;
    printf_s("Enter %d scores: ", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%lf", &scores[i]);
        total += scores[i];
    }

    double average = total / n;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] > average) {
            counter += 1;
        }
    }

    printf_s("Average: %.2lf\n", average);
    printf_s("Items above average: %d\n", counter);

    if (scores) {
        free(scores);
        scores = NULL;
    }

    return EXIT_SUCCESS;
}
