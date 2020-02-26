#include <iostream>
using namespace std;
int main(){ 
 int m,s,h,u,e,result;
cout<< "Enter your marks in five subjects: \n";
cin>>m>>s>>h>>u>>e;
result = (m+s+h+u+e)*0.2;
if(result>=90)
cout << result<<"\ngrade A";
else if(result>=80 && result<90)
cout << result<<"\ngrade B";
else if(result>=70 && result<80)
cout<<result<<"\ngrade C";
else if(result>=60 && result<70)
cout<<result<<"\ngrade D";
else
cout <<result<<"\nfail";

return 0;
}