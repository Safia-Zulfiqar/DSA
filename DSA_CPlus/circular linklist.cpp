#include <iostream>   //code for constructing ,traversing,and inserting a node in circular linklist
#include <cstdlib>
using namespace std;

struct node{
	int data;
	struct node* next;
};

void display(struct node* ptr)
{
	struct node* head=ptr;
	do
	{
		cout<<"element:"<<ptr->data<<endl;
		ptr=ptr->next;
	}
	while(ptr != head);
}

struct node* insertion(struct node* head,int data)
{
	struct node* p=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=head;
	while(ptr->next != head)
	{
		ptr=ptr->next;
    }
        ptr->next=p;
		p->next =head;
		p->data=data;
	
	return p;
}

int main()
{
	struct node* head;
	struct node* second;
	struct node* third;
	struct node* fourth;
	
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc (sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	
	head->data=4;
	head->next=second;
	
	second->data=3;
	second->next=third;
	
	third->data=6;
	third->next=fourth;
	
	fourth->data=2;
	fourth->next=head;
	
	cout<<"before insertion"<<endl;
	display(head);
	
	cout<<endl;
	head=insertion(head,7);
	
	cout<<"after insertion"<<endl;
	display(head);
	
	
	
	free(head);
	free(second);
	free(third);
	free(fourth);
	
	return 0;
}
