#include<iostream>                             //code for deleting node at the end
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

struct node* deletion_at_end(struct node* head)
{
	struct node* ptr=head;
	struct node* q=head->next;
	
	while(q->next != NULL)
	{
		q=q->next;
		ptr=ptr->next;
		
	}
	
	ptr->next=NULL;
	free(q);
	
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
	
	cout<<"Before deletion"<<endl;
	display(head);
	
	cout<<endl;
	deletion_at_end(head);
	
	cout<<"After deletion at the end of linklist"<<endl;
	display(head);
	
	free(head);
	free(second);
	free(third);
	free(fourth);
	
	return 0;
	
}
