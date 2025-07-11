#include <iostream>             //opration,push,pop,isempty,isfull
#include <cstdlib>
using namespace std;

struct node{
	int data;
	struct node* next;
};

void displayOFlinklist(struct node* ptr)
{
	while(ptr!= NULL)
	{
	cout<<"ELEMENT:"<<ptr->data<<endl;
	ptr=ptr->next;
	}
}

int isEmpty(struct node* top)
{
	if(top==NULL)
	{
		return 1;
	}
	else
	return 0;
}

int isFull(struct node* top)
{
	//creating a node new node n but n is not going to construct (not possible) 1.e n=NULL then stack is full.
   struct node* n=(struct node*)malloc(sizeof(struct node));
   if(n==NULL)
   {
   	return 1;
   }
   else
   {
   	return 0;
   }
}

 struct node* push(struct node* &top,int x)
 {
 	if(isFull(top))
 	{
 		cout<<"stack overflow"<<endl;
	 }
	 else
	 {
	 	struct node* n=(struct node*)malloc(sizeof(struct node));
	 	n->data=x;
	 	n->next=top;
	 	top=n;
	 	return top;
	 }
 }
 
 int  pop(struct node* &top)
 {
 	if(isEmpty(top))
 	{
 	cout<<"stack underflow"<<endl;
	 }
	 
	 else
	 {
	 	struct node* n=top;
	 	top=top->next;
	 	int x=n->data;
	 	free(n);
	 	return x;
	 	
	 }
 	
 }
 
 

int main()
{
	struct node * top=NULL;
	top=push(top,68);
	top=push(top,45);
	top=push(top,54);
	top=push(top,23);
	top=push(top,35);
	top=push(top,64);
	top=push(top,36);
	cout<<"before popping"<<endl;
	displayOFlinklist(top);
	cout<<endl;
	cout<<"the popped value is:"<<pop(top)<<endl;
	cout<<endl;
	cout<<"after popping"<<endl;
	displayOFlinklist(top);
	
	return 0;
}
