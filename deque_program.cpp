#include <iostream>
#include <deque>

int main() {
    // Declare a deque of integers
    std::deque<int> numbers;

    // Add elements to the front and back of the deque
    numbers.push_back(10);   // Add at the back
    numbers.push_front(5);   // Add at the front
    numbers.push_back(20);   // Add at the back

    // Access elements
    std::cout << "Elements in the deque:" << std::endl;
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Insert an element at the beginning
    numbers.push_front(3);

    // Access elements using iterators
    std::cout << "Elements in the deque (using iterators):" << std::endl;
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove the last and first elements
    numbers.pop_back();
    numbers.pop_front();

    // Check if the deque is empty
    if (numbers.empty()) {
        std::cout << "The deque is empty." << std::endl;
    } else {
        std::cout << "The deque is not empty." << std::endl;
    }

    // Get the size of the deque
    std::cout << "Size of the deque: " << numbers.size() << std::endl;

    // Clear all elements from the deque
    numbers.clear();

    // Check if the deque is empty again
    if (numbers.empty()) {
        std::cout << "The deque is empty after clearing." << std::endl;
    }

    return 0;
}
