#include<iostream>
using namespace std;

struct class 
{
    string name;
    int rollno;
    float SGPA;
};

int a;
float j;

struct Class A[15];

void input(int p){

   cout<<"students name:";
   cin>>A[p].name;
   cout<<"Roll no.:";
   cin>>A[p].rollno;
   cout<<"SGPA:";
   cin>>A[p].SGPA;
}

void display(int q){
   
    cout<<"\n\nstudents name:"<<"\t"<<A[q].name<<endl;
    cout<<"Roll no.:"<<"\t"<<A[q].rollno<<endl;
    cout<<"SGPA:"<<"\t\t"<<A[q].SGPA<<endl;
}

void search(){
    cout<<"\n\nEnter SGPA of student you want to search:";
    cin>>j;
    int f=0;             

    for(int i=0;i<a;i++){
        
        if(A[i].SGPA==j){
            cout<<"\nName:"<<"\t\t"<<A[i].name<<"\nRoll no:"<<"\t"<<A[i].rollno<<endl;
            f=1;
        }
    }

    if(f==0){
        cout<<"Record not found"<<endl;

    }
}


void bubble_sort(struct Class A[15],int a){
     for (int i=1 ; i<a; i++){

         for (int j=0; j<a-i; j++){

             if (A[j].rollno > A[j+1].rollno){

                struct Class temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

             }                   
         }                              
     }

    for(int i=0;i<a;i++){
        display(i);
    }

    
}

void bin_search1(struct Class A[15],int a){

    int low=0;
    int high=a-1;
    
    int start_index;
    int end_index;
    float target;
    cout<<"\n\nEnter SGPA of student you want to search:";
    cin>>target;
   
   
    while(low<=high){              
        
        int mid=(low+high)/2;

        if(A[mid].SGPA==target){
            start_index=mid;
            high=mid-1;
        }

        else if(A[mid].SGPA>target){
            high=mid-1;
        }

        else{
            low=mid+1;
        }

        
    }

    low=0;
    high=a-1;
        

    while(low<=high){
        
        int mid=(low+high)/2;

        if(A[mid].SGPA==target){
            end_index=mid;
            low=mid+1;
        }

        else if(A[mid].SGPA>target){
            high=mid-1;
        }

        else{
           low=mid+1; 
        }

        
    }
    if(start_index != -1 && end_index != -1){

        for(int j=start_index; j<=end_index; j++){
            cout<<"\nName:"<<"\t\t"<<A[j].name<<"\nRoll no:"<<"\t"<<A[j].rollno<<endl;
        }
    }

    else{
        cout<<"Record not found";
    }

}

void bin_search2(struct Class A[15],int a){

    int low=0;
    int high=a-1;
    
    int start_index;
    int end_index;
    string target;
    cout<<"\n\nEnter Name of student you want to search:";
    cin>>target;
   
    while(low<=high){              
        
        int mid=(low+high)/2;

        if(A[mid].name==target){
            start_index=mid;
            high=mid-1;
        }

        else if(A[mid].name>target){
            high=mid-1;
        }

        else{
            low=mid+1;
        }

        
    }

    low=0;
    high=a-1;
        

    while(low<=high){
        
        int mid=(low+high)/2;

        if(A[mid].name==target){
            end_index=mid;
            low=mid+1;
        }

        else if(A[mid].name>target){
            high=mid-1;
        }

        else{
           low=mid+1; 
        }

        
    }
    if(start_index != -1 && end_index != -1){

        for(int j=start_index; j<=end_index; j++){
            cout<<"\nRoll no:"<<"\t"<<A[j].rollno<<"\nSGPA:"<<"\t\t"<<A[j].SGPA<<endl;
        }
    }

    else{
        cout<<"Record not found";
    }

}


void Insertion_sort(struct Class A[15],int a){

    for(int i=1; i<=a-1; i++){             
        

        struct Class temp=A[i];

         int j=i-1;

         while(j>=0 && temp.name<A[j].name){

            A[j+1]=A[j];
            j--;
         }


        A[j+1]=temp;

    }



    for(int i=0; i<a ; i++){
        display(i);
    }
}
            
int partition(struct Class A[15],int l ,int h)  {

float pivot = A[l].SGPA;
    
    int i=l+1;
    int j=h;
    
    do{
        while(A[i].SGPA<=pivot){
           i++;
        }

        while(A[j].SGPA>pivot){
           j--;
        }

        if(i<j){
        

            struct Class temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }

    } while (i<j);

    

    struct Class temp=A[l];
    A[l]=A[j];
    A[j]=temp;

    return j;
    
}

void Quick_sort(struct Class A[15],int l, int h){

    if(l<h){
        int pi= partition(A,l,h);
        Quick_sort(A,l,pi-1);
        Quick_sort(A,pi+1,h);
    }
}






int main(){
    int c;
    cout<<"\n\nenter no. of records:";
    cin>>a;
   
        do{

                cout<<"\nEnter Your choice:"<<endl;
                cout<<"1.Enter Record: \n2.Display Record: \n3.Bubble sort  \n4.Insertion sort \n5.Binary Search According to name \n6.Quick sort  \n7.Linear Search  \n8.Binary Search According to SGPA"<<endl;
                cin>>c;
        

                switch(c){

                   case(1):
                 
                     for(int i=0;i<a;i++){
                        input(i);
                     }
                     break;

                   case(2):
                     for(int i=0;i<a;i++){
                         display(i);
                     }
                 
                     break;

                   case(3):
                     bubble_sort(A,a);
                     break;

                   case(4):       
                     Insertion_sort(A,a);  //name `sort
                     break;

                   case(5):
                     bin_search2(A,a);    //name serch
                     break;
                
                   case(6):
                     Quick_sort(A,0,a-1);          //sgpa
                     for(int i=a-1;i>=0;i--){
                         display(i);
                     }

                     break;

                   case(7):
                     search();
                     break;

                   case(8):
                     bin_search1(A,a);     //sgpa
                     break;
                     

                   default:
                     cout<<"No such Case"<<endl;
    
                }

        }while(c!=8);      
        

    return 0;

}
