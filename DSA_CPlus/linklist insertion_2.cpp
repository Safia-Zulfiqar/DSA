#include <iostream>                      //code for insertion of node at index or in b/w nodes
#include <cstdlib>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

//traversal
void display(struct node* ptr)
{
	while(ptr != NULL)
	{
		cout<<"element:"<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
//insertion
struct node* insertion_at_index(struct node* head,int data,int index)
{
	struct node* p;
	p=(struct node*)malloc(sizeof(struct node));
	
	struct node* ptr=head;
	for(int i=0;i!=index-1;i++)
	{
		ptr=ptr->next;
	}
	
	p->data=data;
	p->next=ptr->next;
	ptr->next=p;
	
	return head;
	
}

int main ()
{
	struct node* head;
	struct node* second;
	struct node* third;
	struct node* fourth;
	
	// dynamic memory allocation in heap
	head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    
    
    //linking nodes
    head->data=36;
    head->next=second;
    
    second->data=56;
    second->next=third;
    
    third->data=67;
    third->next=fourth;
    
    fourth->data=96;
    fourth->next=NULL;
    
    cout<<"Before insertion"<<endl;
    display(head);
    
    cout<<endl;
    
    insertion_at_index(head,100,3);
    
    cout<<"After insertion at the specified index"<<endl;
    display(head);
    
    
    //Releasing the dynamically allocated memory
    free(head);
    free(second);
    free(third);
    free(fourth);
    
return 0;	
}
