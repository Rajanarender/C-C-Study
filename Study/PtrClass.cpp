/*******************************************
Implement copy constructor using int pointer
*******************************************/
#include<iostream>
using namespace std;

class Base
{
	int *s;
	public:
	Base()
	{
		s=new int;
	}

	Base( int *p)
	{
		s=new int; //or (s=new int(*p))
		*s =*p;
	}

	~Base()
	{
		delete s;
	}

	Base(const Base &a)
	{
		s=new int;   //(or) s =new int(*a.s) 
		*s =*(a.s);
	}

        Base& operator=(const Base &obj)
        {
              if(this != &obj)
               {
                  this->s=new int;  //(or) this->s=new int(*obj.s);
                  *this->s=*(obj.s);
               }
               return *this;
        }

	void display()
	{
		cout<<*s<<endl;
	}
};

int main()
{
	int m=5;
	int *ptr=&m;
	Base x(&m),y(x),z; //x(ptr)
        z=x;
	x.display();
	y.display();
        z.display();
	return 0;
}
