// (1) Question: Define a class with a private member and a public member function to access the private member.

#include <iostream>

class MyClass {
private:
    int privateMember;

public:
    void setPrivateMember(int value) {
        privateMember = value;
    }

    int getPrivateMember() const {
        return privateMember;
    }
};

int main() {
    MyClass obj;
    obj.setPrivateMember(42);
    std::cout << "Private member value: " << obj.getPrivateMember() << std::endl;
    return 0;
}

// (2) Question: Create a class representing a 2D point and calculate the distance between two points.

#include <iostream>
#include <cmath>

class Point2D {
private:
    double x, y;

public:
    Point2D(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    double distanceTo(const Point2D& other) const {
        return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
    }
};

int main() {
    Point2D p1(1.0, 2.0);
    Point2D p2(4.0, 6.0);
    std::cout << "Distance between points: " << p1.distanceTo(p2) << std::endl;
    return 0;
}

// (3) Question: Create a class representing a Circle with member functions to calculate its area and circumference.

#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const {
        return 3.14159 * radius * radius;
    }

    double circumference() const {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    Circle c(5.0);
    std::cout << "Area: " << c.area() << std::endl;
    std::cout << "Circumference: " << c.circumference() << std::endl;
    return 0;
}

// (4) Question: Implement a class for a simple Bank Account with deposit and withdraw functions.

#include <iostream>

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            std::cout << "Insufficient funds." << std::endl;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    std::cout << "Current balance: " << account.getBalance() << std::endl;
    return 0;
}

// (5) Question: Implement a class hierarchy for different shapes (e.g., Circle, Square) with a common base class. Calculate their areas.

#include <iostream>

class Shape {
public:
    virtual double area() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() const override {
        return side * side;
    }
};

int main() {
    Circle c(5.0);
    Square s(4.0);

    std::cout << "Area of Circle: " << c.area() << std::endl;
    std::cout << "Area of Square: " << s.area() << std::endl;

    return 0;
}

// (6) Question: Implement a class representing a Student with a constructor and member functions to set and display student details.

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;

public:
    Student(const std::string& n, int roll) : name(n), rollNumber(roll) {}

    void display() const {
        std::cout << "Name: " << name << ", Roll Number: " << rollNumber << std::endl;
    }
};

int main() {
    Student student("Alice", 12345);
    student.display();
    return 0;
}

// (7) Question: Create a class representing a Book with member functions to set and display book details.

#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;

public:
    void setTitle(const std::string& t) {
        title = t;
    }

    void setAuthor(const std::string& a) {
        author = a;
    }

    void display() const {
        std::cout << "Title: " << title << ", Author: " << author << std::endl;
    }
};

int main() {
    Book book;
    book.setTitle("The Great Gatsby");
    book.setAuthor("F. Scott Fitzgerald");
    book.display();
    return 0;
}

// (8) Question: Create a class representing a Rectangle with member functions to calculate its area and perimeter.

#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;
    return 0;
}

// (9) Question: Implement a class representing a Bank with member functions to add and display account details.

#include <iostream>
#include <vector>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(const std::string& accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {}

    void display() const {
        std::cout << "Account Number: " << accountNumber << ", Balance: " << balance << std::endl;
    }
};

class Bank {
private:
    std::vector<BankAccount> accounts;

public:
    void addAccount(const std::string& accNumber, double initialBalance) {
        BankAccount newAccount(accNumber, initialBalance);
        accounts.push_back(newAccount);
    }

    void displayAccounts() const {
        for (const BankAccount& acc : accounts) {
            acc.display();
        }
    }
};

int main() {
    Bank bank;
    bank.addAccount("12345", 1000.0);
    bank.addAccount("67890", 500.0);

    bank.displayAccounts();

    return 0;
}

// (10) Question: Implement a class hierarchy for different vehicles (e.g., Car, Motorcycle) with a common base class. Calculate their maximum speed.

#include <iostream>

class Vehicle {
public:
    virtual double maxSpeed() const = 0;
};

class Car : public Vehicle {
public:
    double maxSpeed() const override {
        return 120.0; // Maximum speed in km/h
    }
};

class Motorcycle : public Vehicle {
public:
    double maxSpeed() const override {
        return 180.0; // Maximum speed in km/h
    }
};

int main() {
    Car car;
    Motorcycle motorcycle;

    std::cout << "Max Speed of Car: " << car.maxSpeed() << " km/h" << std::endl;
    std::cout << "Max Speed of Motorcycle: " << motorcycle.maxSpeed() << " km/h" << std::endl;

    return 0;
}

// (11) Question: Implement a class representing a Date with member functions to set and display the date.

#include <iostream>

class Date {
private:
    int day, month, year;

public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void display() const {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    Date date;
    date.setDate(15, 9, 2023);
    date.display();
    return 0;
}

// (12) Question: Create a class representing a Product with member functions to set and display product details.

#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;

public:
    void setDetails(const std::string& productName, double productPrice) {
        name = productName;
        price = productPrice;
    }

    void display() const {
        std::cout << "Product: " << name << ", Price: $" << price << std::endl;
    }
};

int main() {
    Product product;
    product.setDetails("Laptop", 999.99);
    product.display();
    return 0;
}

// (13) Question: Implement a class hierarchy for different animals (e.g., Cat, Dog) with a common base class. Display their sounds.

#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& n) : name(n) {}

    virtual std::string sound() const = 0;
};

class Cat : public Animal {
public:
    Cat(const std::string& n) : Animal(n) {}

    std::string sound() const override {
        return "Meow";
    }
};

class Dog : public Animal {
public:
    Dog(const std::string& n) : Animal(n) {}

    std::string sound() const override {
        return "Woof";
    }
};

int main() {
    Cat cat("Whiskers");
    Dog dog("Buddy");

    std::cout << cat.sound() << " (" << cat.name << ")" << std::endl;
    std::cout << dog.sound() << " (" << dog.name << ")" << std::endl;

    return 0;
}

// (14) Question: Create a class hierarchy for different geometric shapes (e.g., Circle, Square) with a common base class. Calculate their areas.

#include <iostream>

class Shape {
public:
    virtual double area() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() const override {
        return side * side;
    }
};

int main() {
    Circle c(5.0);
    Square s(4.0);

    Shape* shapes[] = { &c, &s };

    for (const Shape* shape : shapes) {
        std::cout << "Area: " << shape->area() << std::endl;
    }

    return 0;
}

// (15) Question: Implement a class hierarchy for different employees (e.g., Manager, Programmer) with a common base class. Calculate their salaries.

#include <iostream>

class Employee {
protected:
    std::string name;
    double baseSalary;

public:
    Employee(const std::string& n, double salary) : name(n), baseSalary(salary) {}

    virtual double calculateSalary() const = 0;
};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(const std::string& n, double salary, double b) : Employee(n, salary), bonus(b) {}

    double calculateSalary() const override {
        return baseSalary + bonus;
    }
};

class Programmer : public Employee {
public:
    Programmer(const std::string& n, double salary) : Employee(n, salary) {}

    double calculateSalary() const override {
        return baseSalary;
    }
};

int main() {
    Manager manager("Alice", 50000, 10000);
    Programmer programmer("Bob", 60000);

    Employee* employees[] = { &manager, &programmer };

    for (const Employee* emp : employees) {
        std::cout << "Salary for " << emp->name << ": $" << emp->calculateSalary() << std::endl;
    }

    return 0;
}

// (16) Question: Implement a class hierarchy for different shapes (e.g., Circle, Rectangle) with a common base class. Calculate their areas.

#include <iostream>

class Shape {
public:
    virtual double area() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

int main() {
    Circle c(5.0);
    Rectangle r(4.0, 3.0);

    Shape* shapes[] = { &c, &r };

    for (const Shape* shape : shapes) {
        std::cout << "Area: " << shape->area() << std::endl;
    }

    return 0;
}

// (17) Question: Create a class hierarchy for different fruits (e.g., Apple, Banana) with a common base class. Display their colors.

#include <iostream>
#include <string>

class Fruit {
protected:
    std::string color;

public:
    Fruit(const std::string& c) : color(c) {}

    virtual std::string getColor() const {
        return color;
    }
};

class Apple : public Fruit {
public:
    Apple(const std::string& c) : Fruit(c) {}

    std::string getColor() const override {
        return color + " apple";
    }
};

class Banana : public Fruit {
public:
    Banana(const std::string& c) : Fruit(c) {}
};

int main() {
    Apple redApple("red");
    Banana yellowBanana("yellow");

    Fruit* fruits[] = { &redApple, &yellowBanana };

    for (const Fruit* fruit : fruits) {
        std::cout << "Color: " << fruit->getColor() << std::endl;
    }

    return 0;
}

// (18) Question: Implement a class hierarchy for different shapes (e.g., Triangle, Square) with a common base class. Calculate their areas.

#include <iostream>

class Shape {
public:
    virtual double area() const = 0;
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() const override {
        return side * side;
    }
};

int main() {
    Triangle t(4.0, 3.0);
    Square s(4.0);

    Shape* shapes[] = { &t, &s };

    for (const Shape* shape : shapes) {
        std::cout << "Area: " << shape->area() << std::endl;
    }

    return 0;
}

// (19) Question: Create a class representing a Car with member functions to set and display car details.

#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;

public:
    void setDetails(const std::string& carMake, const std::string& carModel) {
        make = carMake;
        model = carModel;
    }

    void display() const {
        std::cout << "Car Make: " << make << ", Model: " << model << std::endl;
    }
};

int main() {
    Car car;
    car.setDetails("Toyota", "Camry");
    car.display();
    return 0;
}

// (20) Question: Implement a class hierarchy for different shapes (e.g., Circle, Rectangle) with a common base class. Calculate their perimeters.

#include <iostream>

class Shape {
public:
    virtual double perimeter() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double perimeter() const override {
        return 2 * (length + width);
    }
};

int main() {
    Circle c(5.0);
    Rectangle r(4.0, 3.0);

    Shape* shapes[] = { &c, &r };

    for (const Shape* shape : shapes) {
        std::cout << "Perimeter: " << shape->perimeter() << std::endl;
    }

    return 0;
}





