#include<iostream>                               //code for deleting a node at beginning
#include<cstdlib>
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

struct node* deletion_at_first(struct node* head)
{
	struct node* ptr=head;
	head=ptr->next;
	free(ptr);
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
	head->data=47;
	head->next=second;
	
	second->data=88;
	second->next=third;
	
	third->data=90;
	third->next=fourth;
	
	fourth->data=96;
	fourth->next=NULL;
	
	cout<<"Before deletion"<<endl;
	display(head);
	
	cout<<endl;
	
	head=deletion_at_first(head);
	
	cout<<"After deletion at the start of linklist"<<endl;
	display(head);
	
	free(head);
	free(second);
	free(third);
	free(fourth);
	
	return 0;
}
