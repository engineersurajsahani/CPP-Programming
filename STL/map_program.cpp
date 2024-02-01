#include <iostream>
#include <map>

using namespace std;

int main()
{
    // Standard Template Library
    
    // Map
    
    map <int,int> v;
    
    // Add Data 
    
    v[1]=100;
    v[2]=200;
    v[3]=300;
    v[4]=400;
    v[5]=500;
    v[5]=500;
    
    // Read Data 
    
    for(auto i=v.begin();i!=v.end();i++){
        cout<<i->first<<" : "<<i->second<<endl;
    }
    cout<<endl;
    
    // Update Data
    
    v[2]=2000;
    
    for(auto i=v.begin();i!=v.end();i++){
        cout<<i->first<<" : "<<i->second<<endl;
    }
    cout<<endl;
    
    // Delete Data
    
    v.erase(5);
    
    for(auto i=v.begin();i!=v.end();i++){
        cout<<i->first<<" : "<<i->second<<endl;
    }
    cout<<endl;
    
    v.erase(3);
    
    for(auto i=v.begin();i!=v.end();i++){
        cout<<i->first<<" : "<<i->second<<endl;
    }
    cout<<endl;
    
    // Empty 
    
    if(v.empty()){
        cout<<"Map is empty.";
    }
    else{
        cout<<"Map is not empty.";
    }
    
 
    return 0;
}