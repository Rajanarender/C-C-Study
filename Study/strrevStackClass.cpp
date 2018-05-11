#include<iostream>
using namespace std;
/*-----------------------------------------------
Implementation of strrev with a stack using class
------------------------------------------------*/

#ifndef Max
#define MAX 7
#endif

class stack
{
	char st[MAX];
	int top;
	public:
	stack()
	{
		top =-1;
	}
	void push(char x)
	{
		st[++top]=x;
		if(top>=MAX)
		{
			cout<<"Stack Overflow"<<endl;
		}
	}

	char pop()
	{
		return st[top--];
		if(top<=-1)
		{
			cout<<"Stack Underflow"<<endl; 
		}
	}
};

int main()
{
	stack s;
	char str[]="Global";
	for(int i=0;str[i] != '\0';i++)
	{
		s.push(str[i]);
	}
	for(int i=0;str[i] != '\0';i++)
	{
		cout<<s.pop();
	}
	return 0;
}
