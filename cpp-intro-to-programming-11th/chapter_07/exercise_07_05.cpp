
/**
 *  Exercise 7.5 - The number of even and odd numbers.
 *
 * Write a program that reads ten integers, and then display the number of even
 * and odd numbers. Assume that the input wnds with 0.
**/

#include <iostream>

/** Function main begins program execution */
int main() {
    // Inits counters array. (odd and even numbers)
    int counters[] {0, 0};

    // Enter integers.
    int n;
    std::cout << "Enter numbers (0 to exit): ";
    while (true) {
        std::cin >> n;
        if (n == 0) {
            break;
        }
        counters[n % 2]++;
    }

    // Shows results.
    std::cout << "The numnber of odd numbers is: " << counters[1] << std::endl;
    std::cout << "The number of even numbers is: " << counters[0] << std::endl;

    // Ends program execution.
    return 0;
}
