#include <iostream>
using namespace std;
int main()
{
    string str;
    char checkCharacter = 'a';
    int count = 0;
cout<<"enter any name";
cin>>str; 
for(int i=0; i<str.size(); i++){
       if (str[i]==  checkCharacter)
        {
            ++ count;
        }
    }
    cout << "Number of " << checkCharacter << " = " << count;
    return 0;
}