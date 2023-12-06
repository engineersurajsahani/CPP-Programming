#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called\n";
    }
    
    void display(){
        std::cout<<"Display is called\n";
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called\n";
    }
};

int main() {
    // Creating an object of MyClass
    MyClass myObject;
    myObject.display();

    // The object goes out of scope when main() finishes
    // The destructor is automatically called at this point

    return 0;
}
