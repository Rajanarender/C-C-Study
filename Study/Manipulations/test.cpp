//#include<iostream>
//using namespace std;
#include<stdio.h>


static char *substr='\0';
char* func(char *x)
{
	while(*x)
	{
		if(*x =='G')
		{
			while(*x != ' ' || *x!= '\0')
			{
				*substr++=*x++;
			}
			*substr='\0';
		}
		x++;
	}
	return substr;
}

int main()
{
	char x[]="Raja is a Good boy";
        printf("%s",func(x));
	//cout<<func(x);
}
