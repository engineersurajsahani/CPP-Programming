#include <iostream>
#include <list>

int main() {
    // Declare a list of integers
    std::list<int> numbers;

    // Add elements to the list
    numbers.push_back(10);   // Add at the end
    numbers.push_front(5);   // Add at the beginning
    numbers.push_back(20);   // Add at the end

    // Access elements
    std::cout << "Elements in the list:" << std::endl;
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Insert an element after the first element
    auto it = numbers.begin();
    ++it;  // Advance iterator to the second element
    numbers.insert(it, 15);

    // Access elements using iterators
    std::cout << "Elements in the list (using iterators):" << std::endl;
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove the last element
    numbers.pop_back();

    // Check if the list is empty
    if (numbers.empty()) {
        std::cout << "The list is empty." << std::endl;
    } else {
        std::cout << "The list is not empty." << std::endl;
    }

    // Get the size of the list
    std::cout << "Size of the list: " << numbers.size() << std::endl;

    // Clear all elements from the list
    numbers.clear();

    // Check if the list is empty again
    if (numbers.empty()) {
        std::cout << "The list is empty after clearing." << std::endl;
    }

    return 0;
}
