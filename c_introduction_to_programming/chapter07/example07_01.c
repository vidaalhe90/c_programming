
#ifdef __unix__
    #define printf_s printf
    #define scanf_s scanf
#endif

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int n;
    printf_s("%s", "Enter number of students: ");
    scanf_s("%d", &n);
    
    int *scores = (int *)malloc(n * sizeof (int));
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &scores[i]);
    }

    int best_score = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > best_score) {
            best_score = scores[i];
        }
    }

    char *grades = (char *)malloc(n * sizeof (char));
    for (int i = 0; i < n; i++) {
        grades[i] = 'F';
        if      (scores[i] >= best_score - 5)  { grades[i] = 'A'; }
        else if (scores[i] >= best_score - 10) { grades[i] = 'B'; }
        else if (scores[i] >= best_score - 15) { grades[i] = 'C'; }
        else if (scores[i] >= best_score - 20) { grades[i] = 'D'; }
    }

    for (int i = 0; i < n; i++) {
        printf_s("Student %d score is %d and grade is %c\n", i, scores[i], grades[i]);
    }

    if (scores) {
        free(scores);
        scores = NULL;
    }

    if (grades) {
        free(grades);
        grades = NULL;
    }

    return EXIT_SUCCESS;
}

void enter_positive(const char* prompt, int *value) {
    int n = 0;
    while (n <= 0) {
        printf_s("%s", prompt);
        scanf_s("%d", n);
    }
    *value = n;
}

void enter_scores(int *scores, int n) {
    printf_s("Enter %d scores: ", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &scores[i]);
    }
}

int find_best(int *scores, int n) {
    int best = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > best) {
            best = scores[i];
        }
    }
    return best;
}
