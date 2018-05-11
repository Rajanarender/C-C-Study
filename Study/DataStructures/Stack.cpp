
/***************************************************************
Stack using Array,ptr
Stack using class
Stack using Single Linked list
Stack using Queues
Stack Operations are achieved in C++ using STL vector container class
*****************************************************************/

//Stack Implementation using class
#include<iostream>
using namespace std;

#define MAX 2 

class Stack
{
	int top;
	int st[MAX];

	public:
	Stack()
	{
		top = -1;
	}

	void push(int x) //It is like set function
	{
		if(top >= MAX-1) //since top starts from 0th INDEX
		{
			cout<<"Stack Overflow\n";
		}

		st[++top] = x; //pre-increment top as ++top,to make top = 0
	}

	int pop() //It is like get function
	{
		if(top <= -1)
		{
			cout<<"Stack Underflow\n";
		}
		return st[top--]; //post-decrement top,since we need the last value also
	}
};

int main()
{
	Stack s;
	s.push(2);
	s.push(4);
        s.push(3);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
}

/********************************************
Stack implementation using Single Linked List
********************************************/

struct node
{
	int data;
	struct node *next;
};

void push(struct node *top, int newdata)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data = newdata;
	newnode->next = top;
	top = newnode;
}

int pop(struct node *top)
{
	struct node *temp = top;
	top = top->next; //Preserve the top
        int x = temp->data; //Preserve the temp->data before freeing the temp
	temp->next = NULL; //V.V.Imp step
	free(temp);
        return x;
}

int main()
{
	struct node *top = NULL;
	push(top,5);
	push(top,7);
	cout<<pop(top);
	cout<<pop(top);
}






