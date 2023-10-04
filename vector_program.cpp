#include <iostream>
#include <vector>

int main() {
    // Declare a vector of integers
    std::vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access elements
    std::cout << "Elements in the vector:" << std::endl;
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Modify an element
    numbers[1] = 25;

    // Add more elements
    numbers.push_back(40);
    numbers.push_back(50);

    // Access elements using iterators (C++11 and later)
    std::cout << "Elements in the vector (using iterators):" << std::endl;
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove the last element
    numbers.pop_back();

    // Check if the vector is empty
    if (numbers.empty()) {
        std::cout << "The vector is empty." << std::endl;
    } else {
        std::cout << "The vector is not empty." << std::endl;
    }

    // Get the size of the vector
    std::cout << "Size of the vector: " << numbers.size() << std::endl;

    // Clear all elements from the vector
    numbers.clear();

    // Check if the vector is empty again
    if (numbers.empty()) {
        std::cout << "The vector is empty after clearing." << std::endl;
    }

    return 0;
}
