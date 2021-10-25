#include<iostream>
using namespace std;
int main()
{
   int n,arr[n],i;
   cout<<"enter the no of items :"<<endl;
   cin>>n;
   cout<<"enter the items :"<<endl;
   for(i=0;i<n;i++)  {
   	cin>>arr[i];
   }
   cout<<"reversed array is:"<<endl;
   for(i=(n-1);i>=0;i--)   {
   	cout<<arr[i]<<"\t";
   }
    return 0;
}
