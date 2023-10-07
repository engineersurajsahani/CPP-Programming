// Single Inheritance In C++

#include <iostream>

using namespace std;

class A{
    
    public :
    
    void display(){
        cout<<"Class A"<<endl;
    }
};

class B : public A{
    
    public :
    
    void display(){
        cout<<"Class B"<<endl;
    }
};

int main()
{
    B b;
    b.display();

    return 0;
}
