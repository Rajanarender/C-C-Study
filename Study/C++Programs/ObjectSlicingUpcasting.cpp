#include<iostream>
using namespace std;

/********************************************************
Object Slicing:
This occurs when derived class object is converted to base class object,
features of derived gets lost,making derived behave like base
Upcasting leads to Object Slicing

Solution:
To avoid this,use dynamic_cast

Derived d;
base b = d; //This leads to object slicing
base &b= d; //use base reference
base &b= dynamic_cast<base &b>(d);//dynamic casting


NOTE: 
Conversion of base to derived is not possible,lower byte data to higher byte data
Downcasting is not possible,It leads to Error
********************************************************/
class Base
{
	public:
		virtual void func1()
		{
			cout<<"I am in Base\n";
		}
};

class Derived: public Base
{
       public:
	virtual void func1()
	{
		cout<<"I am in Derived\n";
	}
};

/*
   void func(Base obj)
   {
   obj.func1();
   }
 */ //func(d);


int main()
{
        Derived d;
        //Base b = d; //Direct conversion of Derived to Base will slice off derived class features
                    // It will call base func()
        //Base &b  = d;//It will call derived func()
        Base &b =dynamic_cast<Base&>(d); // It will call derived func()
        b.func1();
 
        //Conversion of base to derived is not possible,lower byte data to higher byte data
        //d=b;
        //Derived &d =b;
        //Derived &d =dynamic_cast<Derived&>(b); // It will call derived func()
}


