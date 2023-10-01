#include <iostream>

using namespace std;


// Method Overriding
class A{
    
    public:
    virtual int add(int a,int b) {
        cout<<"Child Class"<<endl;
        return a+b;
    }
    virtual int add(int a,int b,int c) {
        cout<<"Child Class"<<endl;
        return a+b+c;
    }
    virtual int add(int a,int b,int c,int d) {
        cout<<"Child Class"<<endl;
        return a+b+c+d;
    }
    virtual int add(int a) {
        cout<<"Child Class"<<endl;
        return a+5;
    }
};

class B: public  A{
    public:
    int add(int a,int b) override{
        cout<<"Child Class"<<endl;
        return a+b;
    }
    int add(int a,int b,int c) override{
        cout<<"Child Class"<<endl;
        return a+b+c;
    }
    int add(int a,int b,int c,int d) override{
        cout<<"Child Class"<<endl;
        return a+b+c+d;
    }
    int add(int a) override{
        cout<<"Child Class"<<endl;
        return a+5;
    }
};

int main()
{
    B a;
    int b=a.add(5,6);
    int c=a.add(5,6,7);
    int d=a.add(5,6,7,8);
    int e=a.add(5);
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    return 0;
}