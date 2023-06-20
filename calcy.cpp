#include <iostream>

using namespace std;
void add(int a,int b) 
{
	int c=a+b;
	cout<<c<<endl;
}
void sub(int a,int b)
{
	int c=a-b;
	cout<<c<<endl; 
}
void mult(int a,int b)
{
	int c=a*b;
	cout<<c<<endl; 
}
void div(int a,int b)
{
	int c=a/b;
	cout<<c<<endl; 
}
int main()
{
	int a,b;
	while(true)
{
    cout<<"the value of a is";
	cin>>a;
	cout<<"the value of b is";
	cin>> b;
    int p;
  
   cout<<"\n1.add"<<"n2.sub"<<"\n3.mul"<<"\n4div"<<endl;
cout<<"enter ur choice"<<endl;
  cin>>p;
  
 switch(p) 
 {
 	case(1):
 		cout<<"sum is";
 		add(a,b);
 		
 	case(2):
	 cout<<"subtraction is";
	 sub(a,b);
	 break;
	 case(3):
	 cout<<"multipliaction is";
	 mult(a,b);
	 break;
	 case(4):
	 cout<<"division is";
	 div(a,b);
	 break;
	 default:
	 cout<<"wrong choice";	
   }  

   cout<<"do u want to continue?"<<endl;
   cout<<"if u have to continue then say yes otherwise no";
   int n;
   cin>>n;
   if(n==0) {
   	break;
   }
   else {
   	cout<<"try more";
    }
}
}


