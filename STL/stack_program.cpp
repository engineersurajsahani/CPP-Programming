#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // Standard Template Library
    
    // Stack 
    
    stack <int> v;
    
    // Add Data 
    
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);
    
    // Read Data 
    
    cout<<"Top Element :- "<<v.top();
    cout<<endl;
    
    // Delete Data
    
    v.pop();
    cout<<"Top Element :- "<<v.top();
    cout<<endl;
    v.pop();
    cout<<"Top Element :- "<<v.top();
    cout<<endl;
    
    // Empty 
    
    if(v.empty()){
        cout<<"Stack is empty.";
    }
    else{
        cout<<"Stack is not empty.";
    }
    
 
    return 0;
}