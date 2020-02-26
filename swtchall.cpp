#include <iostream>
using namespace std;
int shop(int choice);
int main()
{
  cout<<" 1 : Addition \n  2 : Subtraction \n  3 : Multiplication \n  4 : Division \n  5 : exit\n";
   cout<<"Enter your choice \n";
    cin>>choice;
shop(choice);
  int shop(int choice)
   {
 char data[100];
  string exit;

  ofstream output;
   output.open("afile.dat");

 cout << "Enter your name: "; 
   cin.getline(data,100);
 
  case 1: add = a + b;
  cout<< add;
   break;
 
   case 2: sub = a - b;
    cout<< sub;
   break;
  
    case 3: mul = a * b;
    cout<< mul;
    break;
 
   case 4: div = a/b;
   cout<< div;
   break;
case 5 : exit;
cout<<"exit";

   default :
  cout<<"wrong choice";
   break;
        }
       
    return 0;
}
