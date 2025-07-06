#include <iostream>
using namespace std;
int main ()
{
	int A[10];
	cout<<"enter 10 elements"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>A[i];
	}
	
//finding the largest element
 int largest=A[10];
 for(int i=0;i<10;i++)
 {
 	if(A[i]>largest)
 	 largest=A[i];
 }
 cout<<"The largest value is:"<<largest<<endl;
return 0;
}
