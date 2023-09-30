#include <iostream>

using namespace std;

class Employee {
    private :
    int id;
    string name;
    string department;
    string role;
    
    
    public:
    void setId(int id);
    void setName(string name);
    void setDepartment(string department);
    void setRole(string role);
    
    int getId();
    string getName();
    string getDepartment();
    string getRole();
    
    void display();
};

void Employee::setId(int id){
    this->id=id;
}
void Employee::setName(string name){
    this->name=name;
}
void Employee::setDepartment(string department){
    this->department=department;
}
void Employee::setRole(string role){
    this->role=role;
}


int Employee::getId(){
    return this->id;
}
string Employee::getName(){
    return this->name;
}
string Employee::getDepartment(){
    return this->department;
}
string Employee::getRole(){
    return this->role;
}


void Employee::display() { // Define the display function as a friend
    cout << " Employee Id :- " << this->id << endl;
    cout << " Employee Name :- " << this->name << endl;
    cout << " Employee Department :- " << this->department << endl;
    cout << " Employee Role :- " << this->role << endl;
}

int main()
{
    Employee e1;
    e1.setId(1);
    e1.setName("Suraj Sahani");
    e1.setDepartment("Developer");
    e1.setRole("Backend");
    
    Employee e2;
    e2.setId(2);
    e2.setName("Amit Sahani");
    e2.setDepartment("Developer");
    e2.setRole("Frontend");
    
    Employee e3;
    e3.setId(3);
    e3.setName("Rakesh Sahani");
    e3.setDepartment("Developer");
    e3.setRole("UI/UX");
    
    cout<<" Employee Id :- "<<e1.getId()<<endl;
    cout<<" Employee Name :- "<<e1.getName()<<endl;
    cout<<" Employee Department :- "<<e1.getDepartment()<<endl;
    cout<<" Employee Role :- "<<e1.getRole()<<endl;
    cout<<"**********"<<endl;
    cout<<" Employee Id :- "<<e2.getId()<<endl;
    cout<<" Employee Name :- "<<e2.getName()<<endl;
    cout<<" Employee Department :- "<<e2.getDepartment()<<endl;
    cout<<" Employee Role :- "<<e2.getRole()<<endl;
    cout<<"**********"<<endl;
    cout<<" Employee Id :- "<<e3.getId()<<endl;
    cout<<" Employee Name :- "<<e3.getName()<<endl;
    cout<<" Employee Department :- "<<e3.getDepartment()<<endl;
    cout<<" Employee Role :- "<<e3.getRole()<<endl;
    
    e1.display();
    cout<<"**********"<<endl;
    e2.display();
    cout<<"**********"<<endl;
    e3.display();
    
    return 0;
}