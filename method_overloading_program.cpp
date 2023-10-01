#include <iostream>

using namespace std;


// Method Overloading
class A{
    
    public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    int add(int a,int b,int c,int d){
        return a+b+c+d;
    }
    int add(int a){
        return a+5;
    }
};

int main()
{
    A a;
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