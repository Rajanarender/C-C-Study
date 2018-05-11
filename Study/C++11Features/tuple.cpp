#include<iostream>
using namespace std;
#include<tuple> //for tuple

int main()
{
	//tuple<int,double,char>t(100,2.5,'B');
                    //(or)
	auto t = make_tuple(100,2.5,'B'); //auto takes the data type from rvalue

	cout<<get<0>(t)<<endl;
	cout<<get<1>(t)<<endl;
	cout<<get<2>(t)<<endl;
}
