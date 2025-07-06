#include <iostream>
#include <cstdlib>
using namespace std;

struct Queue{
	int size;
	int front;
	int back;
	int* array;
};


int isEmpty(Queue q)
{
	if(q.front==q.back)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull(Queue q)
{
	if(q.back==q.size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void Enqueue(Queue &q,int x)
{
	if(isFull(q))
	{
		cout<<"queue overflow"<<endl;
	}
	else
	{
		q.back++;
		q.array[q.back]=x;
	}
}

int Dequeue(Queue &q)
{
	if(isEmpty(q))
	{
		cout<<"queue underflow"<<endl;
		return 1;
	}
	else
	{
		q.front++;
		int x=q.array[q.front];
		return x;
	}
}

void display(Queue q)
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
	Queue Q;
	Q.size=20;
	Q.front=Q.back=-1;
	Q.array=(int*)malloc(Q.size*sizeof(int));
	
	
	//inserting few elements in Queue

	Enqueue(Q,11);
	Enqueue(Q,13);
	Enqueue(Q,20);
	Enqueue(Q,25);
	Enqueue(Q,27);
	Enqueue(Q,29);
	Enqueue(Q,35);
	Enqueue(Q,90);
	
	cout<<"elements inserted in queue"<<endl;	
	
	display(Q);
	
	cout<<endl;
	
	cout<<"Removed elements"<<endl;
    for (int i=0;i<=5;i++)
	{
		cout<<Dequeue(Q)<<endl;
	}
	
	cout<<endl;
	
	cout<<"elements remained in queue"<<endl;
	display(Q);
	

	
	return 0;
}
