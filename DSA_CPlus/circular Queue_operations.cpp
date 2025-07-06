#include <iostream>
#include <cstdlib>
using namespace std;

struct CircularQueue {
	int size;
	int front;
	int back;
	int *array;
};

int isEmpty(CircularQueue q)
{
	if(q.back==q.front)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull(CircularQueue q)
{
 if((q.back+1)%q.size==q.front)	 //circular increment of back//next of back ==front
  {  
  return 1;
  }
  else
  {
  	return 0;
  }
}

void Enqueue(CircularQueue &q,int x)
{
	if(isFull(q))
	{
		cout<<"queue overflow"<<endl;
	}
	else
	{
		q.back=(q.back+1)%q.size;              //circular increment in back
		q.array[q.back]=x;
	}
}

int Dequeue(CircularQueue &q)
{
	if(isEmpty(q))
	{
		cout<<"queue underflow"<<endl;
	}
	else
	{
		q.front=(q.front+1)%q.size;          //circular increment in front
		int x=q.array[q.front];
		return x;
	}
}

void display(CircularQueue q)
{
	if(isEmpty(q))
	{
		cout<<"queue is empty"<<endl;
	}
	else
	{
		for(int i=q.front+1;i<=q.back;i++)
		{
			cout<<"element:"<<q.array[i]<<endl;
		}
	}
}

int main()
{
	CircularQueue s;
	s.size=9;
	s.front=s.back=0;
	s.array=(int*)malloc(s.size*sizeof(int));
	
	
	//inserting few elements in Queue

	Enqueue(s,11);
	Enqueue(s,13);
	Enqueue(s,20);
	Enqueue(s,25);
	Enqueue(s,27);
	Enqueue(s,29);
	Enqueue(s,35);
	Enqueue(s,90);
	
	cout<<"elements inserted in queue"<<endl;	
	
	display(s);
	
	cout<<endl;
	
	cout<<"Removed elements"<<endl;
    for (int i=1;i<=5;i++)
	{
		cout<<Dequeue(s)<<endl;
	}
	
	cout<<endl;
	
	cout<<"elements remained in queue"<<endl;
	display(s);
	

	return 0;
}
