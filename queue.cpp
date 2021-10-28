#include <iostream>
using namespace std;
class CQ {
	int rear;
	int front;
	
	public:
		CQ()   {
			rear=-1;
			front=-1;
		}
		void enqueue(int[],int,int);
		void dequeue(int[],int);
		void display(int[],int n);
		void isempty();
		void isfull(int[],int);
};
void CQ::enqueue(int queue[],int x,int n){
	cout<<"enter the item in queue:"<<endl;
	cin>>x;
    if(front==-1)  {
    	front++;
	}
	rear=(rear+1)%n;
	queue[rear]=x;
	
	if((rear +1)%n==front)   {
		cout<<"q isfull";
	}
	
}
void CQ::dequeue(int queue[],int n)   {
	int dlt;
	if(rear==-1 && front==-1)   {
		cout<<"queue isempty"<<endl;
	}
	
	else {
		dlt=queue[front];
	
		cout<<"dlelted item is:"<<dlt<<endl;
		
	}
	front=(front+1)%n;
	
}
void CQ::isempty()    {
	if(rear==-1 && front==-1)   {
		cout<<"queue is empty:"<<endl;
	}
	else {
		cout<<"no,queue is not empty:"<<endl;
	}
}

void CQ::isfull(int queue[],int n)   {
	if((rear+1)%n==front)   {
		cout<<"queueu is full:"<<endl;
	}
	else {
		cout<<"no,queue is not fullll"<<endl;
	}
}
void CQ::display(int queue[],int n)   {
	int i;
	cout<<"all enetred items in queue are:"<<endl;
	for( i=front;i!=rear;i=(i+1)%n )  {
		cout<<queue[i]<<"\t";
	}
	cout<<queue[i];
}

int main()   {
	int ch,n,x;
	int queue[20];
	CQ p;
	cout<<"how many items u want to enter in q:";
	cin>>n;
	do{
	cout<<"enter your choice:"<<endl;
	cout<<"\n1.enqueue \n2.dequeue \n3.isempty   \n4.isfull \n5.display:"<<endl;
	cin>>ch;
	switch(ch)   {
		case 1:
			p.enqueue(queue,x,n);
			break;
		case 2:
			p.dequeue(queue,n);
			break;
		case 3:
			p.isempty();
			break;
		case 4:
			p.isfull(queue,n);
			break;
		case 5:
			p.display(queue,n);
			break;
		default:
			cout<<"invlid!";
	}
}while(ch!=0);
}
 
