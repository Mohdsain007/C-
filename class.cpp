#include<iostream>
using namespace std;


class shape {
   public: 
      double radious;
      double length;
      double breadth;
    
};

int main() {
   shape circle;
   shape trangle;         
   double area =3.14;  
 
  
  circle.radious = 5; 
     
  trangle.length =10;
  trangle.breadth =20;
  
   
   
   area =3.14*circle.radious*circle.radious;
   cout << "area of circle : " <<area <<endl;

area =3.14*trangle.length*trangle.breadth;
   cout << "area of trangle : " <<area <<endl;

  

   return 0;
}