#include <iostream>
#include <string>
using namespace std;
#define PI 0.2
int main(){
string name;
float age;
string gender;
int class;
float e,u,h,s,mat;
float average;
float percentage;
float sum;
cout << "Enter your name\n";
cin >>name ;
cout <<"enter your age\n" ;
cin >>age;
cout<<"enter your gender\n;
cin>>gender;
cout<<"enter your class\n";
cin>>class;
cout<<"enter english marks\n;
cin>>e;
cout<<"enter urdu marks\n;
cin>>u;
cout<<"enter hindi marks\n;
cin>>h;
cout<<"enter science marks\n;
cin>>s;
cout<<"enter math marks\n;
cin>>mat;
cout<<name<<age<<gender;
sum=(e+u+h+s+mat);
average=(sum)/5;
percentage=sum*PI;

if(percentage>90)
cout<<percentage<<"grade A.";

    return 0;
}