#include <iostream>
//#include<bits/stdc++.h>
#include <math.h>
using namespace std;
void primefactor()    {
	int n,i;
	if(n%2==0)   {
		cout<<2<<" ";
		n=n/2;
	}
	for(i=3;i<=sqrt(n);i=i+2)   {
		while(n%i==0)   {
			cout<<i<<" ";
			n=n/i;
		}
	
	}
	if(n>2)  {
		cout<<n<<" ";
	}
}
int main()   {
	int n;
	cout<<"enter the number";
	cin>>n;
	primefactor();
	return 0;
	
}
