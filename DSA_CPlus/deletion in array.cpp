#include<iostream>
using namespace std;
void display(int array[],int n)
{
	//code for traversal
	for(int i=0;i<=n;i++)
	cout<<"element no."<<i+1<<":"<<array[i]<<endl;
}

void ind_deletion(int array[],int size,int index)
{
	//code for deletion
  for(int i=index;i<size-1;i++)	
  array[i]=array[i+1];
}

int main()
{
	int A[100]={54,78,90,60,36,37};
	
	cout<<"before deletion"<<endl;
	display(A,5);
	
	ind_deletion(A,6,3);
	cout<<endl;
	cout<<"after deletion"<<endl;
	display(A,4);
	
	return 0;
}
