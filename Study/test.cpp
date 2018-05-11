#include<iostream>
using namespace std;

class base
{
	public:
		static int x;
};

int base::x=10;
/*
class derived:public base
{
	public:
		int func( int m)
		{
			return m;
		}
};
*/
int main()
{
        //cout<<(base::x);
	//derived d;
	//cout<<d.func(base::x);
	return 0;
}





