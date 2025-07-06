#include <iostream>                 
#include <cstdlib>
using namespace std;

struct stack
{
	int size;
	int top;
	int* array;
};

int isEmpty(stack a)
{
	if(a.top==-1)
	{
		cout<<"the stack is empty"<<endl;
		return 1;
	}
	else
	{
		cout<<"the stack is not empty"<<endl;
		return 0;
	}
}

int isFull(stack a)
{
	if(a.top==a.size-1)
	{
		cout<<"the stack is full"<<endl;
		return 1;
	}
	else
	cout<<"the stack is not full"<<endl;
	return 0;
}



int main ()
{
	stack s;
	s.size=6;
	s.top=-1;
	s.array=(int*)malloc(s.size*sizeof(int));
	
	//pushing elements in stack
	s.array[0]=7;
	s.top++;
	
	s.array[1]=8;
	s.top++;
	
	s.array[2]=9;
	s.top++;
	
	s.array[3]=10;
	s.top++;
	
	s.array[4]=11;
	s.top++;
	
	s.array[5]=12;
	s.top++;
	
	//checking that stack is empty or full
	
//	isEmpty(s);
    isFull(s);
	return 0;
}

