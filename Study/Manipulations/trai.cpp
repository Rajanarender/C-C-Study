#include<stdio.h>
#include<pthread.h>

int main()
{
	int m=10;
	const int *x=&m;
	x++;
	int &y=m; //here any change made in y will reflect in m also
	y++;
	cout<<*x<<endl;
	cout<<y<<endl;
}



