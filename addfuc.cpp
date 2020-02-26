#include <iostream>
using namespace std;
int add(int num1,int num2);
int main()
{
    int num1, num2, sum;
    cout<<"Enters two numbers to add: ";
    cin >> num1 >> num2;
    sum = add(num1, num2);
    cout << "Sum = " << sum;
    return 0;
}
int add(int a, int b)
{
    int add;
    add =a+b;
    
    return add;
}