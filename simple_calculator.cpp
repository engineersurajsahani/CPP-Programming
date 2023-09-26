#include <iostream>

int main() {
    char operation;
    double num1, num2, result;

    // Prompt the user for the operation
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    // Prompt the user for two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform the selected operation using if-else statements
    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 1; // Exit with an error code
        }
    } else {
        std::cout << "Error: Invalid operation." << std::endl;
        return 1; // Exit with an error code
    }

    // Display the result
    std::cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << std::endl;

    return 0; // Exit successfully
}
