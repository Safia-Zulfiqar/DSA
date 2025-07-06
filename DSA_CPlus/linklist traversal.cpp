#include <iostream>
#include <cstdlib>
using namespace std;


struct node
   {
	int data;
	struct node* next;
   };
   
void display(struct node* ptr)
{
	while(ptr != NULL)
	{
	cout<<"ELEMENT:"<<ptr->data<<endl;
	ptr=ptr->next;
	}
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
	
	//linking nodes one by one
	
	head->data=23;
	head->next=second;
	
	second->data=56;
	second->next=third;
	
	third->data=46;
	third->next=fourth;
	
	fourth->data=37;
	fourth->next=NULL;
	
	
	display(head);
	
	free(head);
	free(second);
	free(third);                     //releasing the allocated dynamic memory
	free(fourth);
	
	return 0;
}
