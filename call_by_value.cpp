#include <stdio.h>

void swap(int a,int b){
    
    printf("\nAddress of a is %d",&a);
    
    printf("\nAddress of b is %d",&b);
    
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    // Call By Value 
    
    int a=10;
    int b=20;
    
    printf("\nValue of a is %d and Value of b is %d",a,b);
    
    printf("\nAddress of a is %d",&a);
    
    printf("\nAddress of b is %d",&b);
    
    swap(a,b);
    
    printf("\nValue of a is %d and Value of b is %d",a,b);

    return 0;
}
