#include <iostream>

using namespace std;

class Employee{
    public:
    int id;
    string name;
    
    // Default Constructor
    Employee(){
        
    }
    
    // Parameterised Constructor
    Employee(int id,string name){
        this->id=id;
        this->name=name;
    }
    
    // Copy Constructor
    Employee(Employee& emp1,Employee& emp2){
        emp2=emp1;
    }
};
int main()
{
    Employee e1=Employee(1,"Suraj Sahnai");
    Employee e2=Employee(2,"Amit Sahnai");
    Employee e3=Employee(e1,e3);
    
    cout<<" Employee Id :- "<<e1.id<<" Employee Name :- "<<e1.name<<endl;
    cout<<" Employee Id :- "<<e2.id<<" Employee Name :- "<<e2.name<<endl;
    cout<<" Employee Id :- "<<e3.id<<" Employee Name :- "<<e3.name<<endl;
    

    return 0;
}