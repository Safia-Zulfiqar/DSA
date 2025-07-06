#include <iostream>
using namespace std;

 void display(int a[],int n)
{
	for(int i=0;i<=n;i++)
	{
		cout<<"element no"<<i<<":"<<a[i]<<endl;
	}
}

int main ()
{
	int array[100]={34,56, 67,78,45};
	
	display(array,4);
	
	return 0;
}
