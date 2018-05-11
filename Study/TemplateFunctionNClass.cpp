#include<iostream>
using namespace std;

/**********************
template function

syntax is similar to casting types in C++
**********************/

// One function works for all data types.
template <typename T>
T myMax(T x, T y)
{
	return (x > y)? x : y;
}

int main()
{
	cout << myMax<int>(3, 7) << endl;  // Call myMax for int
	cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double
	cout << myMax<char>('g', 'e') << endl;   // call myMax for char
	return 0;
}

/**********************
template class
**********************/
// Class template with two parameters
template<class T1, class T2>
class Test
{
	T1 a;
	T2 b;
	public:
	Test(T1 x, T2 y)
	{
		a = x;
		b = y;
	}

	void show()
	{
		cout << a << " and " << b << endl;
	}
};

int main()
{
	Test <float, int> test1 (1.23, 123);
	Test <int, char> test2 (100, 'W');     
	test1.show();
	test2.show();
	return 0;
}
