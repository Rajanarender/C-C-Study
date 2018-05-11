#include<iostream>
using namespace std;

//Remove the duplicates
int arr[]={2,4,2,2,6,8,1,8,9};
int n=( sizeof(arr)/sizeof(arr[0]) );
int emptyarr[5];
int count = 0;

void func(int a[])
{
	int j=0;
	int k=0;
	for(int i=0;i< n;i++)
	{
		j=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				emptyarr[k]=a[j];
				k++;
				count++;
			}
		}
	}
}

int main()
{
	func(arr);
	for(int l=0;l< 5;l++)
	{
		cout<<emptyarr[l]<<endl;
	}
cout<<"duplicates count is:"<<count<<endl;
}






