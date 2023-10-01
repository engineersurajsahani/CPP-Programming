#include <iostream>

using namespace std;

// Single Inheritance
class A{
    
};

class B : public A{
    
};

// Multilevel Inheritance
class C {
    
};
class D : public C{
    
};
class E: public D{
    
};

// Multiple Inheritance
class F{
    
};
class G{
    
};
class H : public F,G{
    
};

// Hierarchial Inheritance
class I{
    
};
class J :public I{
    
};
class K: public I{
    
};

// Hybrid Inheritance
class L{
    
};
class M{
    
};
class N : public L,M{
    
};

int main()
{
    
    return 0;
}