#include <iostream>

int main() {
    int num1, num2;

    // Ask the user for input
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate and display the result
    int sum = num1 + num2;
    std::cout << "The sum is: " << sum << "\n";

    return 0;
}

