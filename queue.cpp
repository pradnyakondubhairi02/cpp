#include<iostream>
using namespace std;

class CQ
{
    int front ,rear;
    public: 
        CQ()
        {
             front=rear=-1;
        }

    int enqueue(int[],int,int);
    int dequeue(int[],int);
    int isfull(int[],int);
    int isempty(int[],int);
    void display(int[],int);
};


int CQ::enqueue(int queue[],int x,int n)
{
    if(front==-1)
    {
        front++;
    }
    rear=(rear+1)%n;
    queue[rear]=x;
    
    return 0;
}

int CQ::dequeue(int queue[],int n)
{
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

void CQ::display(int queue[],int n){
    int i;   
    for( i=front ;i!=rear;i=(i+1)%n){
        cout<<queue[i]<<"\t";
    }
    cout<<queue[i];
}

int CQ::isfull(int queue[],int n){

    if ((rear+1)%n==front){
    	cout<<"q is full";
        return 0; 
    }
    else{
    	cout<<"not full";
        return -1;
    }
}

int CQ::isempty(int queue[],int n){

    if( (front==-1) && (rear==-1 )){
        return 0;
    }
    else{
    	cout<<"not empty";
        return -1;
    }
}


int main(){
	
    int n,x,dlt,ch;
    int queue[20];
    CQ P;
    cout<<"Enter no. of elements:";
    cin>>n;

    do{

        cout<<"\nEnter your choice:"<<endl;
        cout<<"1.Insert elements \n2.Display  \n3.delete element \n4.check full cond. \n5.check empty cond. ";
        cin>>ch;

    switch(ch){

        case(1):
          
          cout<<"Enter the elements to be inserted:";

             cin>>x;
             P.enqueue(queue,x,n);
        

          break;

        case(2):
           cout<<"\nEntered elements are:"<<"\t";
           P.display(queue,n);
           break;

        case(3):
        	dlt=P.dequeue(queue,n);
           
            break;
            
        case (4):
        	P.isfull(queue,n);
        	break;
            
		case (5):
			   P.isempty(queue,n);
//              cout<<"\nDeleted element is:"<<endl;
//              cout<<dlt<<endl;
            break;

        default:
            cout<<"No such case"<<endl;

}
    }while(ch!=5);

    return 0;
}
