#include <iostream>   //code for constructing and traversing doubly linklist
#include <cstdlib>
using namespace std;

struct node{
	int data;
	struct node* previous;
	struct node* next;
};

void display(struct node* head)
{
	struct node* ptr=head;
	struct node* p=NULL;
	
	cout<<"element in one direction"<<endl;
	while(ptr != NULL)
	{
		cout<<"element:"<<ptr->data<<endl;
		p=ptr;
		ptr=ptr->next;
	}
	
	cout<<endl;
	
	cout<<"element in opposite direction"<<endl;
	while(p!=NULL)
	{
		cout<<"element:"<<p->data<<endl;
		p=p->previous;
	}

	
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
	head->previous=NULL;
	head->next=second;
	
	second->data=65;
	second->previous=head;
	second->next=third;
	
	third->data=75;
	third->previous=second;
	third->next=fourth;
	
	fourth->data=85;
	fourth->previous=third;
	fourth->next=NULL;
	
	display(head);
	
	free(head);
	free(second);
	free(third);
	free(fourth);
	
	return 0;
}
