#include <iostream> 
using namespace std;

class Box
{
public:
double length; 
double breadth;

};

int main( )
{
Box B; 

B.length = 6; 
B.breadth =3;

cout << "length = " <<B.length<<endl; 
cout << "breadth = " <<B.breadth<<endl; 


return 0;
}