#include <iostream> 
using namespace std;
void Quick_sort(int a[],int i,int j);
int partition(int a[],int i,int j);
int main()    {
	int a[10],n,i;
	cout<<"enter the no. of items :"<<endl;
	cin>>n;
	cout<<"enter the items :"<<endl;
	for(i=0;i<n;i++)    {
		cin>>a[i];
}
		Quick_sort(a,0,n-1);
		cout<<"array after sorting:";
		for(i=0;i<n;i++)   {
			cout<<a[i]<<endl;
			return 0;
		}
}
void Quick_sort(int a[],int l,int h)   {
	int j;
	if(l<u)  {
		j=partititon(a,l,u);
		Quick_sort(a,l,j-1);
		Quick_sort(a,j+1,u);
	}
}
int partition(int a[],int l,int h)  {
	int pi,i,j,temp;
	pi=a[l];
	i=l;
	j=u+1;
	 do{
        while(a[i]<=pivot){
           i++;
        }

        while(a[j]>pivot){
           j--;
        }

        if(i<j){
         a[i]=a[j];
            a[j]=temp;
        }

    } while (i<j);

    

    
    a[l]=a[j];
    a[j]=temp;
}while(i<j);
a[i]=a[j];
a[j]=pi;

    return j;
    
}


	

