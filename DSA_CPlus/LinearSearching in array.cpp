#include <iostream>
using namespace std;
int linear_search( int array[],int size,int element)
{
	//code for linear searching
	for(int i=0;i<size;i++)
	{
		if(array[i]==element)
		{
		cout<<"the element "<<element<<" was found at index "<<i<<endl;
		return i;   //exit function after finding element
	    }
    }
	    
         cout<<"sorry,element not found"<<endl;   
		 return 0;
}


int main()
{
int A[]={34,56,74,83,49,20,17,56,47};
int size=9;

linear_search(A,size,83);

return 0;
}
