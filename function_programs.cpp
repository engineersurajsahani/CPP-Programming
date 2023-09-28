#include <stdio.h>

// Without Parameter And Without Return Type Function
void hello(){
    printf("Hello");
}

// With Parameter And Without Return Type Function
void sum(int a,int b){
    printf("Sum of a  and b is : - %d",a+b);
}

// Without Parameter And With Return Type Function
int add(){
    int a=6;
    int b=7;
    int c=a+b;
    return c;
}

// With Parameter And With Return Type Function
int addition(int a,int b){
    int c=a+b;
    return c;
}

void printArray(int array[],int arraySize){
    for(int i=0;i<arraySize;i++){
        printf(" %d ",array[i]);
    }
}

void print2DArray(int array[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",array[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("Hello World");

    return 0;
}
