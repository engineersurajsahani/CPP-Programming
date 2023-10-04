#include <iostream>

int main() {
    // Declare and initialize an integer array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access and print elements of the array
    std::cout << "Elements in the array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Modify an element of the array
    numbers[1] = 25;

    // Access and print elements using a range-based for loop (C++11 and later)
    std::cout << "Elements in the array (using range-based for loop):" << std::endl;
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Calculate the sum of the elements
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += numbers[i];
    }

    std::cout << "Sum of the elements: " << sum << std::endl;

    return 0;
}
