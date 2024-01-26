#include <iostream> // Header File or Pre Processor Directive

int main(){
    
    int a=7; // %d
    float f=6.7; // %f
    char c='b'; // %c
    
    // Operators 
    
    // (1) Arihmetic Operators (+,-,*,/,%)
    
    int n1=10;
    int n2=20;
    
    printf("%d",n1+n2);
    
    // (2) Assignment Operator (+=,-=,*=,/=,%=)
    
    n1+=n2; // n1=30 and n2=20 
    n1-=n2; // n1=10 and n2=20 
    n1*=n2; // n1=200 and n2=20 
    n1/=n2; // n1=10 and n2=20 
    n1%=n2; // n1=10 and n2=20 
    
    printf("\nn1 = %d and n2 = %d",n1,n2);
    
    // (3) Logical Operator (&&, ||, !)
    
    printf("\n%d",!(n1==10));
    
    // (4) Conditional / Comparision / Relational (<,<=,>,>=,==,!=)
    
    printf("\n %d",n1!=n2);
    
}
