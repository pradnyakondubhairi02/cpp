#include<iostream>
using namespace std;
class Distance2;


class Distance1  //distance in meter
{
	private :
		int meter;  //m1-distance in meter.  m2-distance in centimeter
	public:
		Distance1()       
		{
		    meter=0;	
		}
		Distance1(int m)           //method overloading
		{
			meter=m;
		}
		void display();
		friend Distance1 addition(Distance1 , Distance2 );    //friend function
		friend Distance2 addition(Distance2 ,Distance1);
};
void Distance1::display()
{
	cout<<"\n"<<meter;
	
}
class Distance2    //distance in centimeter
{
	private:
		int centimeter;
    public:
    	Distance2()
    	{
    		centimeter=0;
		}
		Distance2(int c)
		{
			centimeter=c;
		}
    	void display();
    	friend Distance1 addition(Distance1 ,Distance2 );
    	friend Distance2 addition(Distance2 ,Distance1 );
};


void Distance2::display()
{
	cout<<"\n"<<centimeter;
}
Distance1 addition(Distance1 x,Distance2 y)
{
	Distance1 temp;
	temp.meter=x.meter+y.centimeter/100;
	return temp;
}
Distance2 addition(Distance2 x,Distance1 y)
{
	Distance2 temp;
	temp.centimeter=x.centimeter+y.meter*100;
	return temp;
}
int main()
{
	int mt,ct,ch;
	cout<<"\n Enter the distance in meter:";
	cin>>mt;
	cout<<"\n Enter the distance in centimeter:";
	cin>>ct;
	
	Distance1 m1(mt),m2;
	Distance2 c1(ct),c2;
	m1.display();
	c1.display();
	do{
	cout<<"enter your choice:"<<endl;
	cin>>ch;
	switch(ch)  {
	case 1:
	m2=addition(m1,c1);
	m2.display();
	cout<<endl;
	break;
	case 2:
	c2=addition(c1,m1);
	c2.display();
	cout<<endl;
	break;
}
}while(ch!=0);
	return 0;
	
}
























