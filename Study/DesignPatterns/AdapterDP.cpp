#include <iostream>
#include <string>
using namespace std;

class Target
{
	public:
		virtual string operation() = 0;
};

class Adapter : public Target
{
	Adaptee &adaptee;
	public:
	Adapter(Adaptee &a) : adaptee(a) {}
	string operation()
	{
		return adaptee.method1() + adaptee.method2();
	}
};

class Adaptee
{
	public:
		string method1() { return "Adapter"; }
		string method2() { return "pattern"; }
};


void f(Target &t) //Local function
{
	cout << t.operation();
}

int main()
{
	Adaptee adaptee;
	// adaptation
	Adapter adapter(adaptee);
	// Adapter is also Target
	f(adapter);
	return 0;
}
