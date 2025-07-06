#include <iostream>            //implementing push and pop,peek ,peekTop function
#include <cstdlib>
using namespace std;

struct stack{
	int size;
	int top;
	int* array;
};

int isEmpty(stack a)
{
	if(a.top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int isFull(stack a)
{ 
 if(a.top==a.size-1)
 {
 	return 1;
 }
 else
 {
 	return 0;
 }

}

	void push(stack& a,int x)          
	//using & operator would modify the original stack in main,
 //otherwise it will create a copy and change it
	{
		if(isFull(a))
		{
			cout<<"stack overflow"<<endl;
		}
		else
		{
			a.top++;
			a.array[a.top]=x;
		}
	}
	
	int pop(stack& a)
	{
		if(isEmpty(a))
		{
			cout<<"the stack is underflow"<<endl;
		}
		else
		{
			int x=a.array[a.top];
			a.top--;
			return x;
			
		}
	}
  
  int peek(stack a,int position)
    {
  	  int array_index=a.top-position+1;                
	//using this formula helps to search specified element in constant time O(1),
	//otherwise for using for loop it will have time complixity O(n)
  	  if(array_index<0||array_index>a.top)
  	   {
  	  	cout<<"invalid position"<<endl;
		}
	 else
	 {
	   return a.array[array_index];	
	 }
	 }
	 
	 
	 
     int peekTop(stack a)
    {
    	if(isEmpty(a))
    	{
    		cout<<"the stake is empty"<<endl;
		}
		else
		{
			return a.array[a.top];
		}
	}	
	
	

int main()
{
	stack s;
	s.size=23;
	s.top=-1;
	s.array=(int*)malloc(s.size*sizeof(int));
	
 push(s,35);
 push(s,38);                            //pushing the elements //loop can also be used for
 push(s,40);
 push(s,55);
 push(s,87);
 push(s,95);
 push(s,85);
 /*if(isEmpty(s))
 {
  cout<<"stack is empty"<<endl;
 }
 else
 {
 	cout<<"the stack is not empty"<<endl;
 }
 
cout<<"these are the values popped from the stack"<<endl;
 cout<<pop(s)<<endl;
  cout<<pop(s)<<endl;              
   cout<<pop(s)<<endl;
    cout<<pop(s)<<endl;
     cout<<pop(s)<<endl;
 */
 
cout<<"the value required at 5 position  is:"<<peek(s,5)<<endl;  //this is for single specified value


cout<<endl;

for(int i=1;i<=s.top+1;i++)
{
cout<<"the value required at position "<<i<<" is:"<<peek(s,i)<<endl;	//for all elements
}

cout<<"the value at the top is:"<<peekTop(s)<<endl;         


	return 0;
	
}
