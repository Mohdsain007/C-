#include <iostream>
#include <fstream>
using namespace std;
int main()
{
string exit;
char choice,data[100];
ofstream output;
 ifstream input; 

cout<<"registration\n";
cout<<"a: student Data \nb: father data \nc: Exit \n";
cout<<"Enter your choice \n";
cin>>choice;
 
switch(choice)
   {
case 'a' : 

   output.open("afile.dat");

   cout << "Enter student name:\n "; 
   cin.getline(data,100);

 output <<data <<endl;

   cout << "Enter student age: \n "; 
   cin>>data;
   
   output <<data <<endl;


   output.close();


   input.open("afile.dat"); 
 
   input >>data; 

   cout <<data<<endl;
   
   input >>data; 
   cout <<data <<endl; 

   input.close();
   break;


case 'b' :  
   output.open("afile.dat");

   cout << "Enter your father name: "; 
     cin.getline(data,100);

 output <<data<<endl;

   cout << "Enter your father age: "; 
   cin >>data;
   
   output <<data<<endl;


   output.close();

 
   input.open("afile.dat"); 
 
   input >>data; 

   cout <<data<<endl;
   
   input >>data; 
   cout <<data<<endl; 

   input.close();
   break;
  
   case 'c' : exit;
   break;
        }
       
    return 0;
}
