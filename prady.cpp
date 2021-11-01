#include <iostream>
using namespace std;
struct fan   {
	string name;
	float quotient;
};
void getdata(struct fan f[],int n)   {
	for(int i=0;i<n;i++)   {
		cout<<"enter the name of fan:"<<endl;
		cin>>f[i].name;
		cout<<"enter the fan quotient:"<<endl;
		cin>>f[i].quotient;
	}
}
void display(struct fan f[],int T)   {
	for(int i=0;i<T;i++)  {
		cout<<"\n"<<f[i].name<<"\t"<<f[i].quotient<<endl;
	}
}
void sort(struct fan f[],int n)   {
   int i;
   for(i=0;i<n;i++)  {
   	int j=i-1;
   	struct fan temp=f[i];
   	while((j>=0)  && (temp.quotient>f[j].quotient))    {
   		  f[j+1]=f[j];
   		  j--;
	   }
	   if(temp.quotient==f[j].quotient)  {
	   	while((j>=0)  && (temp.name<f[j].name))   {
	   		f[j+1]=f[j];
	   		j--;
		   }
	   }
   	    f[j+1]=temp;
   }
	
}
int main()   {
	int n,T;
	cout<<"number of fans of ashutosh"<<endl;
	cin>>n;
	cout<<"number of fans ashutosh wants to meet";
	cin>>T;
	struct fan f[n];
	getdata(f,n);
	sort(f,n);
	display(f,T);
	return 0;
}
