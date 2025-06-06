
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Exercise 7.1 - Assign grades                                                          *
 *                                                                                       *
 * Write a program that reads student scores, gets the best scode, and                   *
 * the assigns grades based on the following scheme:                                     *
 *                                                                                       *
 *     Grade A if score >= best - 5,                                                     * 
 *     Grade B if score >= best - 10,                                                    *
 *     Grade C if score >= best - 15,                                                    *
 *     Grade D if score >= best - 20,                                                    *
 *     Grade F otherwise.                                                                *
 *                                                                                       *
 * The program prompts the user to enter the total number of students, and then          *
 * prompts the user to enter all of the scores, and concludes by displaying the grades.  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifdef _WIN32
    #define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>

/* helper function to find best score */
int find_best(int scores[], int n) {
    int best_score = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > best_score) {
            best_score = scores[i];
        }
    }
    return best_score;
}

/* helper function to get grade given a score (and the best score finded) */
char get_grade(int score, int best_score) {
    if (score >= best_score - 5)  { return 'A'; }
    if (score >= best_score - 10) { return 'B'; }
    if (score >= best_score - 15) { return 'C'; }
    if (score >= best_score - 20) { return 'D'; }
    return 'F';
}

/* function main begins program execution */
int main(void) {
    /* enter number of scores */
    int n;
    printf("%s", "Enter number of student scores: ");
    scanf("%d", &n);

    /* enter scores */
    int* scores = (int*)malloc(n * sizeof (int));
    printf("Entering %d scores: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    /* finds best entered score */
    int best_score = find_best(scores, n);

    /* assigns a grade to each score */
    char* grades = (char*)malloc(n * sizeof (char));
    for (int i = 0; i < n; i++) {
        grades[i] = get_grade(scores[i], best_score);
    }

    /* shows results */
    for (int i = 0; i < n; i++) {
        printf("Student %d score is %d and grade is %c\n", i, scores[i], grades[i]);
    }

    /* free heap memory used */
    free(scores);
    free(grades);

    /* ends program execution */
    return EXIT_SUCCESS;
}
