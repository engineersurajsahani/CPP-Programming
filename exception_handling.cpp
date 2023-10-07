#include <iostream>

int main() {
    try {
        // Attempt to perform an operation that might throw an exception
        int numerator = 10;
        int denominator = 0;

        if (denominator == 0) {
            // Throw an exception when division by zero is detected
            throw "Division by zero is not allowed.";
        }

        int result = numerator / denominator;

        // This line will not be reached if an exception is thrown
        std::cout << "Result: " << result << std::endl;
    } catch (const char* errorMessage) {
        // Catch and handle the exception
        std::cerr << "Exception caught: " << errorMessage << std::endl;
    }

    std::cout << "Program continues after exception handling." << std::endl;

    return 0;
}
