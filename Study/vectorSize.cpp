#include<iostream>
using namespace std;

#include<vector>

/************************
vector Memory allocation
************************/

vector<int> v;
vector<int>::iterator it;
int main()
{
	v.push_back(1);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(2);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(3);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(4);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(5);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(6);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(7);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(8);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(9);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(10);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(11);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(12);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(13);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(14);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(15);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(16);
        cout<<v.size()<<","<<v.capacity()<<'\n';
	v.push_back(17);
        cout<<v.size()<<","<<v.capacity()<<'\n';
/*
	for(it=v.begin();it !=v.end();it++)
	{
		cout<<v.back();
		v.pop_back();
		if(v.empty() == true)
		{
			break;
		}
	}
*/


	return 0;
}
