#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For std::remove

class Student {
public:
    Student(const std::string& rollNumber, const std::string& name, const int age)
        : rollNumber(rollNumber), name(name), age(age) {}

    const std::string& getRollNumber() const {
        return rollNumber;
    }

    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void display() const {
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

    // Overload == operator for comparison
    bool operator==(const Student& other) const {
        return rollNumber == other.rollNumber;
    }

private:
    std::string rollNumber;
    std::string name;
    int age;
};

class StudentManagementSystem {
public:
    void addStudent(const std::string& rollNumber, const std::string& name, const int age) {
        Student student(rollNumber, name, age);
        students.push_back(student);
    }

    void viewAllStudents() const {
        std::cout << "Student List:" << std::endl;
        for (const Student& student : students) {
            student.display();
            std::cout << "-----------------------------" << std::endl;
        }
    }

    Student* findStudent(const std::string& rollNumber) {
        for (Student& student : students) {
            if (student.getRollNumber() == rollNumber) {
                return &student;
            }
        }
        return nullptr;
    }

    void updateStudent(const std::string& rollNumber, const std::string& newName, const int newAge) {
        Student* student = findStudent(rollNumber);
        if (student) {
            std::cout << "Current Details:" << std::endl;
            student->display();
            std::cout << "Updating Student..." << std::endl;
            student->setName(newName);
            student->setAge(newAge);
            std::cout << "Updated Details:" << std::endl;
            student->display();
        } else {
            std::cout << "Student not found." << std::endl;
        }
    }

    void deleteStudent(const std::string& rollNumber) {
        Student* student = findStudent(rollNumber);
        if (student) {
            students.erase(std::remove(students.begin(), students.end(), *student), students.end());
            std::cout << "Student deleted." << std::endl;
        } else {
            std::cout << "Student not found." << std::endl;
        }
    }

private:
    std::vector<Student> students;
};

int main() {
    StudentManagementSystem stuSystem;

    stuSystem.addStudent("S001", "John Doe", 20);
    stuSystem.addStudent("S002", "Jane Smith", 21);
    stuSystem.addStudent("S003", "Bob Johnson", 22);

    int choice;
    std::string rollNumber, name;
    int age;

    while (true) {
        std::cout << "\nStudent Management System" << std::endl;
        std::cout << "1. View All Students" << std::endl;
        std::cout << "2. Update Student" << std::endl;
        std::cout << "3. Delete Student" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            stuSystem.viewAllStudents();
            break;
        case 2:
            std::cout << "Enter Student Roll Number: ";
            std::cin >> rollNumber;
            std::cout << "Enter New Name: ";
            std::cin >> name;
            std::cout << "Enter New Age: ";
            std::cin >> age;
            stuSystem.updateStudent(rollNumber, name, age);
            break;
        case 3:
            std::cout << "Enter Student Roll Number to Delete: ";
            std::cin >> rollNumber;
            stuSystem.deleteStudent(rollNumber);
            break;
        case 4:
            std::cout << "Exiting Student Management System." << std::endl;
            return 0;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
