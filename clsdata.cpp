#include <iostream>
using namespace std;
 

class construct{ 
public: 
    int length;
    int breadth; 
  
    construct() 
    { 
       length = 10; 
        breadth = 20; 
    } 
}; 
  
int main() 
{ 
    construct c; 
    cout << "length: " <<c.length << endl 
         << "breadth: " <<c.breadth; 
    return 1; 
} 