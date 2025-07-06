#include <iostream>
using namespace std;
int binary_search(int array[],int size,int element )
{
int mid,low=0,high=size-1;
while(low<=high)
{
mid=(low+high)/2;

    if(array[mid]==element)
    {
    	cout<<"the element "<<element<<" found at index "<<mid<<endl;
      return mid;
    }

    if(array[mid]<element)
     low=mid+1;
    else
     high=mid-1;	
}

cout<<"sorry element not found"<<endl;
}

int main()
{
int	A[]={12,13,14,15,16,17,18,19,20,22,25,26,27,29};
int size=sizeof(A)/sizeof(int)
binary_search(A,size,16);
return 0;
}
