#include<iostream>
using namespace std;
#include<string.h>

//NOTE: Always Do Deep Copy in constructor,copy constructor,Assignment operator
//To avoid Dangling ptr,which in turn leads to Segmentation Fault

class String
{
	int l;
	char *s;

	public:
	String()
	{
		l=0;
		//s=new char[8]; s3 object gets memory allocation in Assignment operator,so no need here
	}

	~String()
	{
		delete [] s;
	}

	String(char *p)
	{
		l=strlen(p);
		s = new char[l+1];//Deep Copy
		//s = new char[strlen(p)+1];
		strcpy(s,p);
	}

	String(const String &obj)
	{
		l=obj.l;
		s = new char[l+1];
                //s = new char[obj.l+1];
		strcpy(s,obj.s);
	}

	String& operator=(const String &obj)
	{
		if(this !=&obj) //Self Assignment Check Condition
		{
			this->l=obj.l;
			this->s = new char[l+1];
			strcpy(this->s,obj.s);
		}
		return *this;
	}

	void display()
	{
		cout<<s<<endl;
	}

};

int main()
{
        char x[] = "Global";
        //char *x = new char;
	String s1(x),s2=s1,s3;
	s3=s2;
	s1.display();
	s2.display();
	s3.display();
        //delete x; //if new is used
	return 0;
}


/*********************
Case 1: Ptr is int type
*********************/
/*
class Ptr
{

	char *s;
	public:
	Ptr()
	{
		s=new char;
	}

	~Ptr()
	{
		delete s;
	}

	Ptr(char *p)
	{
		s=new char(p);
		//s=new char();
		//*s = *p;
	}

	Ptr(const A &obj)
	{
		s=new char(obj.s)
	        s=new char();
		*s=*obj.s;
	}

	Ptr& operator=(const A &obj)
	{
		if(this != &obj)
		{
			this->s = *obj.s;
		}


	}

};

int main()
{
char x = 'A';
char *pt= x;
Ptr p1(pt),p2=p1,p3;
p3=p1;
p1.display();
p2.display();
p3.display();
}

*/

/*********************
Case 1: Ptr is char type
*********************/
/*
class Ptr
{

	char *s;
	public:
	Ptr()
	{
		s=new char;
	}

	~Ptr()
	{
		delete s;
	}

	Ptr(char *p)
	{
		s=new char(p);
		//s=new char();
		//*s = *p;
	}

	Ptr(const A &obj)
	{
		s=new char(obj.s)
	        s=new char();
		*s=*obj.s;
	}

	Ptr& operator=(const A &obj)
	{
		if(this != &obj)
		{
			this->s = *obj.s;
		}


	}

};

int main()
{
char x = 'A';
char *pt= x;
Ptr p1(pt),p2=p1,p3;
p3=p1;
p1.display();
p2.display();
p3.display();
}
*/
