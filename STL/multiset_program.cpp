#include <iostream>
#include <set>

using namespace std;

int main()
{
    // Standard Template Library
    
    // MultiSet 
    
    multiset <int> v;
    
    // Add Data 
    
    v.insert(10);
    v.insert(20);
    v.insert(30);
    v.insert(40);
    v.insert(50);
    v.insert(50);
    
    // Read Data 
    
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    
    // Delete Data
    
    v.erase(50);
    
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    
    v.erase(30);
    
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    
    // Empty 
    
    if(v.empty()){
        cout<<"Set is empty.";
    }
    else{
        cout<<"Set is not empty.";
    }
    
 
    return 0;
}