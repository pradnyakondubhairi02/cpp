#include <iostream>
using namespace std;
class shape{
	public:
		shape()  {
		   int l,b;
		   int l1,b1,r;
	}
	void rectangle(int,int);
	void triangle(int,int);
	void circle(int);
};
void shape::rectangle(int l,int b)   {
	int area1;
	cout<<"enter the length for rectangle:"<<endl;
	cin>>l;
	cout<<"enter the breadth for rectangle:"<<endl;
	cin>>b;
	area1=l*b;
	cout<<"area of rectangle is:"<<area1<<endl;
}
void shape::triangle(int l1,int b1)  {
	float area2;
	cout<<"enter the length for triangle:"<<endl;
	cin>>l1;
	cout<<"enter the breadth for triangle:"<<endl;
	cin>>b1;
	area2=0.5*l1*b1;
	cout<<"area of triangle is:"<<area2<<endl;
}
void shape::circle(int r)  {
	float area3;
	float pi=3.14;
	cout<<"enter the radius for circle:"<<endl;
	cin>>r;
	area3=pi*r*r;
	cout<<"area of circle is:"<<area3<<endl;
}
int main()  {
	int l,b,l1,b1,r,ch;
	shape p;
	do{
		cout<<"enter your choice:"<<endl;
		cout<<"\n1.for rect \n2.for tri \n3.for circle"<<endl;
		cin>>ch;
		switch(ch)  {
			case 1:
				p.rectangle(l,b);
				break;
			case 2:
	        	p.triangle(l1,b1);
				break;
			case 3:
				p.circle(r);
				break;			
		}
		
	}while(ch!=0);



	return 0;
}
