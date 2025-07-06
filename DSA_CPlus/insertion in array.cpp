#include <iostream>
using namespace std;
void display(int array[],int n)
{
//code for traversal	
for (int i=0;i<=n;i++)
	{
		cout<<"element no."<<i+1<<":"<<array[i]<<endl;
	}
}
//code for insertion
int ind_insertion(int array[],int size,int capacity,int index,int element)
{
	if(size>=capacity)
	{
		cout<<"array is full ,isertion can't possible"<<endl;
		return -1;
	}
	else
	for(int i=size-1;i>=index;i--)
	{
	array[i+1]=array[i]	;
	}
	array[index]=element;
	return size+1;
}

int main()
{
	//this is unsorted insertion
	int A[100]={24,54,67,89,56};
	int size=5;
	int capacity=100;
	
	cout<<"before insertion"<<endl;
	display(A,size);
	
	cout<<endl;
	
	ind_insertion(A,size,capacity,3,34);
	
	cout<<"After insertion"<<endl;
	display(A,size);
		
return 0;
}
