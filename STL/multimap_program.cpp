#include <iostream>
#include <map>

using namespace std;

int main()
{
    // Standard Template Library
    
    // MultiMap
    
    multimap <int,int> v;
    
    // Add Data 
    
    v.insert(pair<int,int>(1,100));
    v.insert(pair<int,int>(2,200));
    v.insert(pair<int,int>(3,300));
    v.insert(pair<int,int>(4,400));
    v.insert(pair<int,int>(5,500));
    v.insert(pair<int,int>(5,600));
    v.insert(pair<int,int>(4,700));
    
    // Read Data 
    
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