#include <iostream>
using namespace std;

int fac(int m) 
{ 
    if (m== 0) 
    return 1; 
    return m * fac(m - 1); 
} 
  
int main() 
{ 
    int num;

cout<<"enter any number\n";
cin>>num;
fac(num);
    cout << "Factorial of " << num << " is " << fac(num) << endl; 
    return 0; 
} 

       
   