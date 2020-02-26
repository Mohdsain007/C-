#include <iostream>

using namespace std;
int main()
{   
string x[10];

for(int i=1; i<=10; i++){
 cout<<"enter any char";
cin>>x[i];

if( x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U')
 
cout<<x[i]<<"vowels";
else
cout<<x[i]<<"consonants";
}
return 0;
}