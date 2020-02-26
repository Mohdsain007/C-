#include <iostream>
using namespace std;

int add(int m , int y){
int addition;
addition = m +y;
cout<<"sum of two number is :"<<addition;
return addition;
}
int sub(int m , int y){
int subtraction;
subtraction = m -y;
cout<<"sum of two number is :"<<subtraction;
return subtraction;
}

int mul(int m , int y){
int multiplication;
multiplication = m *y;
cout<<"sum of two number is :"<<multiplication;
return multiplication;
}

int divi(int m , int y){
int division;
division = m /y;
cout<<"sum of two number is :"<<division;
return division;
}



int main()
{
int choice;
cout << "1 : Addition\n";
cout << "2 : Subtraction\n";
cout << "3 : Multiplication\n";
cout << "4 : Division\n";
cout <<"enter your choice\n";
cin >> choice;
switch(choice) 
{
int num1, num2;
case 1:cout<< " Enter 2 number ";
cin>>num1>>num2;
add(num1,num2);
break;

case 2:cout<< " Enter 2 number ";
cin>>num1>>num2;
sub(num1,num2);
break;

 case 3:cout<< " Enter 2 number ";
cin>>num1>>num2;
mul(num1,num2);
break;

case 4:cout<< " Enter 2 number ";
cin>>num1>>num2;
divi(num1,num2);
break;
}
return 0;
}

       
   