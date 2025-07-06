#include <iostream>
#include <cstdlib>                             //code of insertion at the end of linklist
using namespace std;

struct node{
	int data;
	struct node* next;
};

void display(struct node* ptr)
{
	while(ptr != NULL)
	{
		cout<<"element:"<<ptr->data<<endl;
		ptr=ptr->next;
	}
}

struct node* insertion_at_end(struct node* head,int data)
{
	struct node* p;
	p=(struct node*)malloc(sizeof(struct node));
	
	struct node* ptr=head;
	
	while(ptr->next!=NULL)
	{
	  ptr=ptr->next;
	}
	
	p->data=data;
	p->next=NULL;
	ptr->next=p;
	
	return head;
}

int main()
{
	struct node* head;
	struct node* second;
	struct node* third;
	struct node* fourth;
	
	//dynamic memory allocation
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	
	//linking nodes
	head->data=67;
	head->next=second;
	
	second->data=37;
	second->next=third;
	
	third->data=24;
	third->next=fourth;
	
	fourth->data=54;
	fourth->next=NULL;


    cout<<"Before insertion"<<endl;	
	display(head);
	
	cout<<endl;
	insertion_at_end(head,100);
	
	cout<<"After insertion at the end of linklist"<<endl;
	display(head);
	
//releasing dynamic memory	
	free(head);
	free(second);
	free(third);
	free(fourth);
	
	
	
	
	
	
	return 0;
}
