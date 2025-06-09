
/**
 * Exercise 7.3 - Count ocurrences of numbers.
 *
 * Write program that reads the integers between 1 and 50
 * and count ocurrences of each. Assume the input ends with 0.
**/

#include <iostream>
#include <array>

/* Constant definition. */
constexpr std::size_t N {50};

/* Function main begins program execution. */
int main(void) {
    // Inits array of counters.
    std::array<int, N + 1> counters {0};
    
    // Enter integers between 1 and 50.
    int n;
    std::cout << "Enter numbers between 1 and 50 (0 to exit): ";
    do {
        std::cin >> n;
        if (1 <= n && n <= 50) {
            counters[n]++;
        }
    } while (n != 0);

    // Shows results.
    for (std::size_t i {1}; i <= N; i++) {
        if (counters[i]) {
            std::cout << i << " occurs " << counters[i] << " times" << std::endl;
        }
    }

    // Ends program execution.
    return 0;
}
