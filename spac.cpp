#include <iostream> 
using namespace std; 


class Parent { 

protected: 
    string v,w,x,y,z; 
}; 
  

class Child : public Parent { 
  
public: 
    void set(string a,string b,string c,string d, string e) 
    { 
  
        cout<<"enter your subjects : \n";
        cin>>a>>b>>c>>d>>e; 
    } 
  
    void display() 
    { 
        cout << "your subjects is :\n"<<"1 :"<<a <<"\n 2 :" <<b<<"\n 3 :"<<c<<"\n 4 :"<<d<<"\n 5 :"<<e<< endl; 
    } 
}; 
  
int main() 
{ 
  string v,w,x,y,z;
    Child obj1; 
  
    obj1.set(v,w,x,y,z); 
    obj1.display(); 
    return 0; 
} 