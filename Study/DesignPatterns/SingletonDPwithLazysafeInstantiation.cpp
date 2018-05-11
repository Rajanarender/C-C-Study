#include<iostream>
using namespace std;
#include<pthread.h> //Thread free Singleton

/*********************************************
Singleton implementation dynamically:
We use static ptr to achieve this
Calling the constructor from static function
ptr=new Sgtn();
**********************************************/

//Cons,Des,copy cons,assignment operator should be private to achieve this
class Sgtn
{
	Sgtn();
       ~Sgtn();
	Sgtn(const Sgtn &);
	Sgtn& operator=(const Sgtn &);
	static Sgtn *ptr;
        public: 
	static Sgtn *getinstnce();//should be public,then only we can access from main()
};

pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;
Sgtn* Sgtn:: ptr = NULL;
Sgtn* Sgtn:: getinstnce()
{
	pthread_mutex_lock(&m);
	if(ptr == NULL)
	{
		ptr = new Sgtn(); //Constructor call dynamically
		return ptr;
	}
	else
	{
		cout<<"Only one instance can be created"<<endl;
		return ptr;
	}
	pthread_mutex_unlock(&m);
}


int main()
{
	Sgtn *ptr1,*ptr2;
	ptr1=Sgtn::getinstnce();
	ptr2=Sgtn::getinstnce();
	return 0;
}

/*********************************************
Lazy and Safe Instantiation of Singleton Implementation:
=======================================
Singleton implementation statically:
We use static object to achieve this
Calling the constructor from static function
static Sgtn obj();
**********************************************/

class Sgtn
{
	Sgtn()
        {
         cout<<"Only one instance can be created"<<endl;
        }
       ~Sgtn();
	Sgtn(const Sgtn &);
	Sgtn& operator=(const Sgtn &);
	//static Sgtn *ptr;
        public: 
	static Sgtn& getinstnce();//should be public,then only we can access from main()
};

//Sgtn* Sgtn:: ptr = NULL;
Sgtn& Sgtn:: getinstnce() //Reference return type
{
        static Sgtn obj(); //obj should be static,since static func used static variables only
                         //Calls the constructor statically
        return obj;
}


int main()
{
	//Sgtn a,b; //Error,since this calls constructor which is private
	Sgtn &a=Sgtn::getinstnce(); //using Reference will not call constructor directly
	Sgtn &b=Sgtn::getinstnce();
	return 0;
}
