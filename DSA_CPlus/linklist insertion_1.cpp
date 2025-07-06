#include<iostream>               //code for insertion at beginning in linklist
#include<cstdlib>
using namespace std;

struct node
     {
	 int data;
	 struct node* next;
     };

void display(struct node* ptr)
{
     while(ptr!= NULL)
     {
	     cout<<"element:"<<ptr->data<<endl;
	     ptr=ptr->next;
     }
}

struct node* insert_at_first(struct node* head,int data)
  {
  	struct node* p;
	p=(struct node*)malloc(sizeof(struct node));
  	
  	p->data=data;
  	p->next=head;
  	
  	return p;
  	
  }  


int main()
{
	 struct node* head;
	 struct node* second;
	 struct node* third;
	 struct node* fourth;
	
	//memory allocation in heap
	 head=(struct node*)malloc(sizeof(struct node));
	 second=(struct node*)malloc(sizeof(struct node));
	 third=(struct node*)malloc(sizeof(struct node));
	 fourth=(struct node*)malloc(sizeof(struct node));
	
	//lingking nodes one by one
	 head->data=45;
	 head->next=second;
	
	 second->data=56;
	 second->next=third;
	
	 third->data=78;
	 third->next=fourth;
	
	 fourth->data=65;
	 fourth->next=NULL;
	 
	 cout<<"Before insertion in linked list"<<endl;
	 display(head);
	 cout<<endl;
	 head=insert_at_first(head,97);
	 
	 cout<<"After insertion at the start of linklist"<<endl;
	 display(head);
	 
	 free(head);
	 free(second);
	 free(third);
	 free(fourth);
	
	
	return 0;
}
