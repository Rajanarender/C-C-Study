#include<stdio.h>

/********************************************************
signed char/default type - [-128 to 127] i.e., [-128 to -1,0 to 127]
unsigned char - [0 to 255]
NOTE:s
********************************************************/

int main()
{
	char x = 127; //default signed
	//signed char x = 127;
	printf("%d\n",x); //127
	x=128;
	printf("%d\n",x); //-128
	x=129;
	printf("%d\n",x); //-127
	x=254;
	printf("%d\n",x); //-2
	x=255;
	printf("%d\n",x); //-1
	//x=256; //Error,Accepts only 0 to 255 
	//printf("%d\n",x);

	x=0;
	printf("%d\n",x); //0
       	//x=-129; //Error,Accepts only -128 to -1
	//printf("%d\n",x);
	x=-128;
	printf("%d\n",x); //-128
	x=-127;
	printf("%d\n",x); //-127
	x=-1;
	printf("%d\n",x); //-1
}
