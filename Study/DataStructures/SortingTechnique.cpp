#include<iostream>
using namespace std;

//Bubble sort
/********************************************
Bubble sort is repeatedly comparing one element with the next element and then swapping them,
if the lower index numbervalue > next following higher index numbervalue
No. of Passes(n) will be n-1
No. of iterations(p) will be n-1-i 
*******************************************/

void swap(int *a,int *b)
{
	int temp = *a;
	*a=*b;
	*b=temp;
}

void BubbleSort(int x[],int n)
{
	for(int i =0;i<n-1;i++) //This is called as Pass.Since we are advancing to j+1,we make i<n-1
	{
		for(int j=0;j<n-1-i;j++) //In each Iteration of i, One element of Array gets Sorted in Ascending oder,so j<n-1-i 
		{
			if(x[j]>x[j+1])  //here j+1, includes the next successive index
				swap(&x[j],&x[j+1]);
		}
	}
}
//Time Complexity is O(n2),nsquare

int main()
{
	int arr[]={5,1,4,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,n);
	cout<<"Sorted Array is:\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}

/******************************************************************
QuickSort:
Devide and Conquer Method
******************************************************************/

int partition(int arr[],int l,int r)
{
int pivot =

}

void QuickSort(int x[],int l,int r)
{
	if(l<r)
	{
		int pi=partition(x,l,r);
		QuickSort(x,l,pi-1); 
		QuickSort(x,pi+1,r);
	}
}




