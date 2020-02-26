#include <iostream>
using namespace std;

int ntr(int x , int y){
cout<<"your natural numbers is :"<<"first is :"<<x <<"second number is :"<<y;
return 0;
}
int evn(int m){
cout<<"even numbers is :"<<m;
return 0;
}

int main()
{
int choice;
cout << "1 : natural number\n";
cout << "2 : even-odd number\n";
cout << "3 : exit\n";
cout <<"enter your choice\n";
cin >> choice;
switch(choice) 
{
int num1, num2,num3,n;
case 1:cout<< " Enter any two nature numbers";
cin>>num1>>num2;
ntr(num1,num2);
break;

case 2:cout<< " Enter 10 numbers ";
for(int i=1; i<=10; i++){
cin>>n;
if(n % 2==0)
evn(n);
}
break;

 case 3:cout<<exit;
break;
}
return 0;
}

       
   