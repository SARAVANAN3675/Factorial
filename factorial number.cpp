#include <iostream>

// Function to calculate the factorial of a number recursively
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        // Calculate and display the factorial
        unsigned long long result = factorial(num);
        std::cout << "Factorial of " << num << " is " << result << std::endl;
    }

    return 0;
}

