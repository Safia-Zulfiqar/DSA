#include <iostream>           //code for deleting a node with the given value/key
#include <cstdlib>
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

struct node* DeletingNodeOfGiven_key(struct node* head ,int value)
{
	struct node* ptr=head;
	struct node* q=head->next;
	
	if(head->data==value)
	{
		head=ptr->next;                     // if condition check for the data in head
		free(ptr);
		return head;
	}
	
	while(q->next != NULL && q->data !=value)
	{
		q=q->next;
		ptr=ptr->next;
	}
	
	if(q->data==value)
	{
	ptr->next=q->next;
	free(q);
    }
	
	return head;
}


int main()
{
	struct node* head;
	struct node* second;
	struct node* third;
	struct node* fourth;
	
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	
	head->data=47;
	head->next=second;
	
	second->data=88;
	second->next=third;
	
	third->data=90;
	third->next=fourth;
	
	fourth->data=96;
	fourth->next=NULL;
	
	cout<<"Beore deletion"<<endl;
	display(head);
	
	cout<<endl;
	head=DeletingNodeOfGiven_key(head,47);
	 
	cout<<"After deletion of node with specifed key/value"<<endl;
	display(head);
	
	free(head);
	free(second);
	free(third);
	free(fourth);
	
	
	return 0;
}
