 //if not easily understabale with pointers using than look at the code in DSA assignment codes Q#14
#include <iostream>
#include <cstdlib>                       
#include <cstring>
using namespace std;

struct stack{
	int size;
	int top;
	char* array;
};
 

int isEmpty(stack* a)
{
	if(a->top==-1)
	{
		return 1;
	}
	else
	   return 0;
}

int isFull(stack* a)
{
	if(a->top==a->size-1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

 void push(stack* a,char x)
 {
 	if (isFull(a))
 	{ 
 	cout<<"stack overflow"<<endl;
	 }
	 else
	 {
	 	a->top++;
	 	a->array[a->top]=x;
	 }
	
 }
  
  char pop(stack* a)
  {
  	if(isEmpty(a))
  	{
  		cout<<"stack underflow"<<endl;
  		return -1;
	  }
	 else 
	 {
	 	char x=a->array[a->top];
	 	a->top--;
	 	return x;
	 }
  }
  
  char stackTop(stack* a)
 {   
	   return a->array[a->top];
 }
  
   int precedence(char ch)
 {
 	if(ch=='*' || ch=='/')
 	{ 
	 return 3;
	 }
	 else
	 if(ch=='+' || ch=='-')
	 {
	 	return 2;
	 }
	 else 
	 return 0;
 }
 
 int isOperator(char ch)
 {
 	if(ch=='+' || ch=='-'|| ch=='*'|| ch=='/')
 	{
 		return 1;
	 }
	 else
	 {
	 	return 0;
	 }
 }
 
 
 char* infix_TO_postfix(char* infix)
 {
 	 struct stack* s=(struct stack*)malloc(sizeof(struct stack));
	s->size=10;
	s->top=-1;
	s->array=(char*)malloc(s->size*sizeof(char));
	char* postfix=(char*)malloc((strlen(infix) +1)*sizeof(char));
	int i=0;      //for scanning infix
	int j=0;       //for filling prefix
	while(infix[i] !='\0')
	{
		if(!isOperator(infix[i]))
		{
			postfix[j]=infix[i];
			j++;
			i++;
		}
		else{
		
	    while(!isEmpty(s)&&precedence(infix[i])<=precedence(stackTop(s)))
		{
			postfix[j]=pop(s);
		 	j++;
		 }
		 
		 push(s,infix[i]);
		 i++;
	     }
	}
    
		 while(!isEmpty(s))
		 {
		 	postfix[j]=pop(s);
		 	j++;
		 }
		 
		 postfix[j]='\0';
		 return postfix;
	
 }
 
int main ()
{
	char*  infix="x-y/z-k*d";
	cout<<"our postfix expression is:"<<infix_TO_postfix(infix)<<endl;
	return 0;
}
