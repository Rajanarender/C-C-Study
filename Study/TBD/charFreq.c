#include<stdio.h>


void func(char *s)
{
	char *s1=NULL;
	while(*s)
	{
		s1=s;
		while(*s1++)
		{
			if(s=*s1++)
			{
				count++;
			}
			else
                        {
                                printf("%s,%d",s1,count); 
				count = 0;
                   
		}

		s++;
	}

}
int main()
{
	char x[]="aababbc";
	func(x);
}
