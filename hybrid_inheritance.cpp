// Hybrid Inheritance In C++

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

class C : public A{
    
    public :
    
    void display(){
        cout<<"Class C"<<endl;
    }
};

class D : public B,C{
    
    public :
    
    void display(){
        cout<<"Class D"<<endl;
    }
};

int main()
{
    B b;
    b.display();
    
    C c;
    c.display();
    
    D d;
    d.display();

    return 0;
}
