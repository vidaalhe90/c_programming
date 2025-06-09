
/**
 * Exercise 7.1 - Assign grades.
 * 
 * Write a program that reads student scores, gets the best score, and then
 * assigns grades based on the following scheme:
 * 
 * Grade A if score >= best - 5,
 * Grade B if score >= best - 10,
 * Grade C if score >= best - 15,
 * Grade D if score >= best - 20,
 * Grade F otherwise.
 *
 * The progrma prompts the user to enter the total number of students, then
 * prompts the user to enter all of the scores, and concludes by displaying
 * grades.
**/

#include <iostream>
#include <vector>

/** Helper function used to find best score in passed vector. */
int getBestScore(const std::vector<int>& scores) {
    int bestScore {scores[0]};
    for (std::size_t i {1}; i < scores.size(); i++) {
        if (scores[i] > bestScore) {
            bestScore = scores[i];
        }
    }
    return bestScore;
}

/** Helper function to get corresponding grage for a given score. */
char getGrade(const int& score, const int& bestScore) {
    if (score >= bestScore - 5)  { return 'A'; }
    if (score >= bestScore - 10) { return 'B'; }
    if (score >= bestScore - 15) { return 'C'; }
    if (score >= bestScore - 20) { return 'D'; }
    return 'F';
}

/* Function main begins program execution. */
int main() {

    // Enter a valid number of student scores to be processed.
    int n {0};
    while (n <= 0) {
        std::cout << "Enter number of student scores: ";
        std::cin >> n;
    }

    // Enter student scores
    std::vector<int> scores(n);
    std::cout << "Enter " << n << " scores: ";
    printf("Enter %d scores: ", n);
    for (int& score : scores) {
        std::cin >> score;
    }

    // Finds best score and gets each score corresponding grade.
    int bestScore {getBestScore(scores)};
    std::vector<char> grades(n);
    for (std::size_t i {0}; i < n; i++) {
        grades[i] = getGrade(scores[i], bestScore);
    }

    // Shows results.
    for (std::size_t i {0}; i < n; i++) {
        std::cout << "Student " << i
                  << " score is " << scores[i]
                  << " and grade is " << grades[i] << std::endl;
    }

    // Ends program execution.
    return 0;
}
