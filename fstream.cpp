
#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
   char data[100];

   ofstream output;
   output.open("afile.dat");

   cout << "Enter your name: "; 
   cin.getline(data,100);

   output << data <<endl;

   cout << "Enter your age: "; 
   cin >> data;
   
   output << data <<endl;


   output.close();

   ifstream input; 
   input.open("afile.dat"); 
 
   input >> data; 

   cout << data <<endl;
   
   input >> data; 
   cout << data <<endl; 

   input.close();

   return 0;
}