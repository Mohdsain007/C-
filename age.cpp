#include <iostream>
using namespace std;
int main(){ 
 int a,b,c;
cout<< "Enter 1st person age: \n";
cin>>a;
cout<< "Enter 2nd person age: \n";
cin>>b;
cout<< "Enter 3rd person age: \n";
cin>>c;
if(a==c)
else if(a>=b && a>=c)
{
cout<<"the elder is :"<<a;
}
else if(b>=a && b>=c)
{
cout<<"the elder is :"<<b;
}
else if (c>=a && c>=b)
{
cout<<"the elder is :"<<c;
}

else
{
cout <<"equal age";
}

return 0;
}