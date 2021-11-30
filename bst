#include <iostream>
using namespace std;

class bst  
{
	int data;
	bst*left;
	bst*right;
	
	public:
		bst*create(int);
		bst*insertion(bst*);
		int search(bst*,int);
		void inorder(bst*);
};

bst*bst::create(int x) 
{
	bst*newnode=new bst;
	newnode->data=x;
	newnode->right=NULL;
	newnode->left=NULL;
	return newnode;
}



int bst::search(bst* root,int a) 
{
	bst*ptr;
	ptr=root;
	if(a==ptr->data)   {
	    return 1;	
	}
	
	else {
		
		while(ptr!=NULL)  {
			if(ptr->data>a)   {
				ptr=ptr->left;
			}
			else if(ptr->data < a)   {
				ptr=ptr->right;
			} 
			else {
				return 1;
			}  
		}
		if(ptr==NULL)   {
			return 0;
		}
	}
}

bst*bst::insertion(bst*root) {
	int y;
	cout<<"enter the value:";
	cin>>y;
	bst*node;
	bst*curr,*temp;
	node=create(y);
	
	if(root==NULL)  {
		root=node;
	}
	else {
		curr=root;
		int p=search(curr,y);
		
		if(p==0)  {
			
		  while(curr!=NULL)  {
		  	
		  	temp=curr;
		  	if(curr->data<y)   {
		  		curr=curr->right;
			}
			else {
			  	curr=curr->left;
			}
		  }	
		  
		  if(temp->data < y){
		  	temp->right=node;
		  }
		  else {
		  	temp->left=node;
		  	
		  }
		}
		
		else{
			cout<<"element is already present";
			return root;
		}
	}
    return root;	
	
}
void bst::inorder(bst*root)  
{
//	bst*ptr;
		if(root==NULL)  {
		 return; 
	}
	                              
	else
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}

int main(){
	bst obj;
	int ch;
	bst*root=NULL;
	
	do  {
		cout<<"enter your choice:";
		cout<<"\n1.insert element  \n2.search  \n3.inorder \n4.exit";
		cin>>ch;
		
		switch(ch)   {
			case 1:
				root=obj.insertion(root);
				break;
			case 2:
				int key,a;
				cout<<"enter the element to be searched";
				cin>>key;
				a=obj.search(root,key);
				
				if(a==0)   {
					cout<<"element not found";
				}
				else {
					cout<<"element found";
				}
				break;
			case 3:
				obj.inorder(root);
				break;
				
		}
	}while(ch!=0);
	
}
