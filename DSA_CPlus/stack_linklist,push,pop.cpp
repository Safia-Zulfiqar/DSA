#include <iostream>           //push,pop,isempty,isfull stacktop and bottom
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
 
 int peek(struct node* top,int position)
 {
 	struct node* ptr=top;
 	for(int i=1;i<position && ptr!=NULL;i++)           
	 //i starting from 1 and position satrt from zero
	 //final value of i must be less than position so that it returns data of next node i.e positioned node
 	{
 		ptr=ptr->next;
	 }
	 if(ptr==NULL)
	 {
	 	cout<<"invalid position"<<endl;
	 	return 1;
	 }
	 else
	 {
	 	return ptr->data;
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
	
	cout<<"the required value at position 3 is:"<<peek(top,3)<<endl;
	
	return 0;
}
