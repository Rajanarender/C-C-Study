#include<stdio.h>
#include<string.h>

void func(int num,char *buf,int b)
{
	int rem=0;
	while(num>0)
	{
		rem = num%b;
		if(rem >=10 && rem <=15) //Hexadecimal format check
		{
			*buf = rem+'A'-10; //10 ='A',11 ='B',12='C',13='D',14='E',15='F'
			buf++;
		}
		else
		{
			*buf = rem +'0';//(Adding ASCII value)
			buf++;
		}
		num = num/b;
	}
	*buf = '\0'; //V.V.Important step
	char *start =buf; //Reverse the base
	char *end=buf+strlen(buf)-1;
	while(start<end)
	{
		char temp = *start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
}

int main()
{
	char buf[1024];
	//itoa(x,buf,24); // Convert integer to array or string
	func(16,buf,2); //base like 10,2,8,16
	printf("%s\n",buf);
}
