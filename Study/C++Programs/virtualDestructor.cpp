#include<iostream>
using namespace std;

/************************************************************
When the base ptr points to Derived class and try to delete 
this base ptr,only the base class destructor is called and base object is deleted but the derived object remains existed. This may lead to Memroy leak.
To avoid this,to delete the derived object make the base class destructor virtual.This would call both derived as well as base destructor to delete both the objects.

*************************************************************/

class Base
{
	public: //Mandatory
	virtual	~Base()
		{
			cout<<"In Base\n";
		}
};

class Derived:public Base //Mandatory public inheritance
{
	private: //Can be any specifier[public,protected,private]
		~Derived()
		{
			cout<<"In Derived\n";
		}

};

int main()
{
	Base *ptr = new Derived();
	delete ptr;
}
