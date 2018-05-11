#include<iostream>
using namespace std;

/********************************************************************
Abstract Factory Method:
We are defining/writing a interface class to create families of relevant objects
without specifying their concrete classes

Eg:
Cabs
OlaCabs-OlaShare,OlaMicro
UberCabs-UberShare[Pool],UberMicro[Go]
*******************************************************************/

class Drivers //Create a ptr object for this in main()
{
	public:
		virtual void display()=0;
};

class WindowDrivers:public Drivers
{
	public:
		void display()
		{
			cout<<"WindowDrivers\n";
		}
};

class AndroidDrivers:public Drivers
{
	public:
		void display()
		{
			cout<<"AndroidDrivers\n";
		}
};

class OS //Create a ptr object for this in main()
{
	public:
		virtual void display1()=0;
};

class WindowOS:public OS
{
	public:
		void display1()
		{
			cout<<"WindowOS\n";
		}
};

class AndroidOS:public OS
{
	public:
		void display1()
		{
			cout<<"AndroidOS\n";
		}
};

//Interface class creating families of relevant objects
class SmartPhones  //Create a ptr object for this in main()

{
	public:
		virtual Drivers* func() = 0;
		virtual OS* func1() = 0;
};

class WindowSmartPhones:public SmartPhones
{
	public:
		Drivers* func()
		{
			return new WindowDrivers;
		}
		OS* func1()
		{
			return new WindowOS;
		}
};

class AndroidSmartPhones:public SmartPhones
{
	public:
		Drivers* func()
		{
			return new AndroidDrivers;
		}
		OS* func1()
		{
			return new AndroidOS;
		}
};

int main()
{
	SmartPhones *S;
	Drivers *d;
	OS *o;
	S =new WindowSmartPhones;
	d = S->func();
	d->display();
	o = S->func1();
	o->display1();

	S =new AndroidSmartPhones;
	d = S->func();
	d->display();
	o = S->func1();
	o->display1();
}












