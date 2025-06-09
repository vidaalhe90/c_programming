
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
int get_best_score(const std::vector<int>& scores) {
    int best_score {scores[0]};
    for (std::size_t i {1}; i < scores.size(); i++) {
        if (scores[i] > best_score) {
            best_score = scores[i];
        }
    }
    return best_score;
}

/** Helper function to get corresponding grage for a given score. */
char get_grade(const int& score, const int& best_score) {
    if (score >= best_score - 5)  { return 'A'; }
    if (score >= best_score - 10) { return 'B'; }
    if (score >= best_score - 15) { return 'C'; }
    if (score >= best_score - 20) { return 'D'; }
    return 'F';
}

/* Function main begins program execution. */
int main() {

    // Enter a valid positive integer.
    int n {0};
    while (n <= 0) {
        std::cout << "Enter number of student scores: ";
        std::cin >> n;
    }

    // Enter n student scores
    std::vector<int> scores(n);
    std::cout << "Enter " << n << " scores: ";
    printf("Enter %d scores: ", n);
    for (int& score : scores) {
        std::cin >> score;
    }

    // Finds best score and gets each score corresponding grade.
    int best_score {get_best_score(scores)};
    std::vector<char> grades(n);
    for (std::size_t i {0}; i < n; i++) {
        grades[i] = get_grade(scores[i], best_score);
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
