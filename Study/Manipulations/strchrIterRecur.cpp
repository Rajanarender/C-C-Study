#include<stdio.h>
#include<string.h>


//char* strchr(const char *string,int ch); //NOTE: 2nd parameter is integer
//strchr() returns the 1st occurrence of specified character in the given string
//strchr() returns the last occurrence of specified character in the given string

//NOTE: We get the complete substring starting from the character
 
**********************************
Iterative Method:
**********************************

Pointer Implementation:
=========================
char *func(char *m,int n)
{
	while(*m)
	{
		if(*m == n)
			return m;

		m++;
	}
	return NULL; //If the character/alphabet is not found in the string, then return NULL
}

**********************************
Recursive Method:
**********************************

Pointer Implementation:
=========================
char *func(char *m,int n)
{
	if(*m != '\0')
	{ 
		if(*m == n)
			return m;

		return func(m+1,n);
	}
	else
		return NULL;
}

int main()
{
	char *p=strchr("Global aEdge",97); //Using ASCII value,
	//Returns the pointer to the first occurence of character(ASCII value) in the source string

	//char *p=strchr("Global aEdge",'a'); //using alphabet
	printf("%s\n",p); // o/p: al aEdge

	char *q= strrchr("Global aEdge",97); //Reverse search 
	//char *p=strrchr("Global aEdge",'a'); //using alphabet
	printf("%s\n",q); // o/p: aEdge

	char x[] = "GlobalEdge";
	char *k = func(x,'d');
	printf("%s\n",k);

}
