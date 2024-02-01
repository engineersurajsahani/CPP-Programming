#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Standard Template Library
    
    // Vector 
    
    vector <int> v;
    
    // Add Data 
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    // Read Data 
    
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    // Update Data 
    
    v[1]=100;
    
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    
    // Delete Data
    
    v.pop_back();
    
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    
    v.erase(v.begin()+2);
    
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    
    // Empty 
    
    if(v.empty()){
        cout<<"Vector is empty.";
    }
    else{
        cout<<"Vector is not empty.";
    }
    
 
    return 0;
}