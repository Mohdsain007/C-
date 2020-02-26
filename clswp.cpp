#include <iostream>
using namespace std;



 class Student{		
          
    public:
 
 int english,hindi,urdu,result,math,science,result;
			
	
Student(int e, int h, int u,int m, int s)
	{
	english = e;
        hindi = h;
        urdu = u;
        math =m;
        science =s;
	}

			
  void read(void){
	cout<<"Enter your english marks: ";
		cin>>english;
	cout<<"Enter your hindi marks: ";
		cin>>hindi;
       cout<<"enter your urdu marks";
                cin>>urdu;
       cout<<"Enter your math marks: ";
		cin>>math;
       cout<<"enter your science marks";
                cin>>science;
}
void display (void){

result = (e+h+u+m+s)*0.2;
if(result>=90)
cout << result<<"\ngrade A :";
else if(result>=80 && result<90)
cout << result<<"\ngrade B :";
else if(result>=70 && result<80)
cout<<result<<"\ngrade C :";
else if(result>=60 && result<70)
cout<<result<<"\ngrade D :";
else
cout <<result<<"\nfail";

}
};

int main(){
student std;
 
std.read();
std.display();


return 0;
}
