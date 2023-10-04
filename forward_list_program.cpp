#include <iostream>
#include <forward_list>

int main() {
    // Declare a forward_list of integers
    std::forward_list<int> numbers;

    // Add elements to the front of the forward_list
    numbers.push_front(10);   // Add at the front
    numbers.push_front(20);   // Add at the front
    numbers.push_front(30);   // Add at the front

    // Access and print elements
    std::cout << "Elements in the forward_list:" << std::endl;
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Insert an element after the first element
    auto it = numbers.begin();
    ++it;  // Advance iterator to the second element
    numbers.insert_after(it, 15);

    // Access elements using iterators
    std::cout << "Elements in the forward_list (using iterators):" << std::endl;
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove the first element
    numbers.pop_front();

    // Check if the forward_list is empty
    if (numbers.empty()) {
        std::cout << "The forward_list is empty." << std::endl;
    } else {
        std::cout << "The forward_list is not empty." << std::endl;
    }

    return 0;
}
