#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for std::remove

class Employee {
public:
    Employee(const std::string& id, const std::string& name, const std::string& department, const std::string& role)
        : id(id), name(name), department(department), role(role) {}

    const std::string& getID() const {
        return id;
    }

    // Setter methods to update employee details
    void setName(const std::string& newName) {
        name = newName;
    }

    void setDepartment(const std::string& newDepartment) {
        department = newDepartment;
    }

    void setRole(const std::string& newRole) {
        role = newRole;
    }

    void display() const {
        std::cout << "Employee ID: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Department: " << department << std::endl;
        std::cout << "Role: " << role << std::endl;
    }

    // Overload == operator to allow comparison by ID
    bool operator==(const Employee& other) const {
        return id == other.id;
    }

private:
    std::string id;
    std::string name;
    std::string department;
    std::string role;
};

class EmployeeManagementSystem {
public:
    void addEmployee(const std::string& id, const std::string& name, const std::string& department, const std::string& role) {
        Employee employee(id, name, department, role);
        employees.push_back(employee);
    }

    void viewAllEmployees() const {
        std::cout << "Employee List:" << std::endl;
        for (const Employee& employee : employees) {
            employee.display();
            std::cout << "-----------------------------" << std::endl;
        }
    }

    Employee* findEmployee(const std::string& id) {
        for (Employee& employee : employees) {
            if (employee.getID() == id) {
                return &employee;
            }
        }
        return nullptr;
    }

    void updateEmployee(const std::string& id, const std::string& name, const std::string& department, const std::string& role) {
        Employee* employee = findEmployee(id);
        if (employee) {
            employee->setName(name);              // Update employee details
            employee->setDepartment(department);
            employee->setRole(role);
            std::cout << "Employee updated successfully!" << std::endl;
            employee->display();
        } else {
            std::cout << "Employee not found." << std::endl;
        }
    }

    void deleteEmployee(const std::string& id) {
        Employee* employee = findEmployee(id);
        if (employee) {
            employees.erase(std::remove(employees.begin(), employees.end(), *employee), employees.end());
            std::cout << "Employee deleted." << std::endl;
        } else {
            std::cout << "Employee not found." << std::endl;
        }
    }

private:
    std::vector<Employee> employees;
};

int main() {
    EmployeeManagementSystem empSystem;

    empSystem.addEmployee("E001", "John Doe", "HR", "Manager");
    empSystem.addEmployee("E002", "Jane Smith", "Finance", "Accountant");
    empSystem.addEmployee("E003", "Bob Johnson", "IT", "Developer");

    int choice;
    std::string id, name, department, role;

    while (true) {
        std::cout << "\nEmployee Management System" << std::endl;
        std::cout << "1. View All Employees" << std::endl;
        std::cout << "2. Update Employee" << std::endl;
        std::cout << "3. Delete Employee" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            empSystem.viewAllEmployees();
            break;
        case 2:
            std::cout << "Enter Employee ID: ";
            std::cin >> id;
            std::cout << "Enter New Name: ";
            std::cin >> name;
            std::cout << "Enter New Department: ";
            std::cin >> department;
            std::cout << "Enter New Role: ";
            std::cin >> role;
            empSystem.updateEmployee(id, name, department, role);
            break;
        case 3:
            std::cout << "Enter Employee ID to Delete: ";
            std::cin >> id;
            empSystem.deleteEmployee(id);
            break;
        case 4:
            std::cout << "Exiting Employee Management System." << std::endl;
            return 0;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
