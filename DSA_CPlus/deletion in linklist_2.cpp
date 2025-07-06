#include<iostream>                           //code for deleting a node in b/w the nodes
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node* next;
};

void display(struct node* ptr)
{
	while(ptr!=NULL)
	{
		cout<<"element:"<<ptr->data<<endl;
		ptr=ptr->next;
	}
}

struct node* deletion_at_index(struct node* head,int index)
{  
     struct node* ptr=head;
     int i;
     while(i!=index-1)
     {
     	ptr=ptr->next;
     	i++;
	 }
     struct node* q=ptr->next;
     ptr->next=q->next;
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
	
	head->data=45;
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
	deletion_at_index(head,2);
	
	cout<<"After deletion at the specifed index"<<endl;
	display(head);
	
	free(head);
	free(second);
	free(third);
	free(fourth);
	
		return 0;
}
