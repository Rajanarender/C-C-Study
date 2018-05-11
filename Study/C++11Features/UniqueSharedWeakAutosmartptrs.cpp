#include<iostream>
using namespace std;
#include<memory> //for smart ptrs
/**************************************************************************
unique_ptr
***************************************************************************/

int main()
{
	shared_ptr<int>s1(new int),s2;
	cout<<s1.use_count()<<endl; //1
	cout<<s2.use_count()<<endl; //0, no byte data

        s2=s1; //unique_ptr& operator=(const shared_ptr&) = delete 	
        shared_ptr<int>s3(s2); //shared_ptr(const shared_ptr&) = delete

	cout<<s1.use_count()<<endl; //3
	cout<<s2.use_count()<<endl; //3
	cout<<s3.use_count()<<endl; //3

	s1.reset();
	cout<<s1.use_count()<<endl; //0
	cout<<s2.use_count()<<endl; //2
	cout<<s3.use_count()<<endl; //2

	unique_ptr<int>u1,u2;
        //cout<<u1.use_count()<<endl; //Error since no reference count concept in unique_ptr

/*
        u2=u1;                 //Error since unique_ptr& operator=(const unique_ptr&) = delete;
	unique_ptr<int>u3(u1); //Error since unique_ptr(const unique_ptr&) = delete;
*/

	weak_ptr<int>w1; //TBD
	cout<<w1.use_count()<<endl; //TBD
}





