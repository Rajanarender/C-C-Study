#include<stdio.h>
#include<string.h>

/*
void func(char *des,char *src,int bytes)
{
	int i=0;
	while(*src&& i < bytes)
	{
		*des++=*src++;
		i++;
	}

	*des='\0';

}
*/

void func(char d[], char s[], int bytes)
{
    int i = 0;
    while(s[i] && i<bytes)
    {
        d[i] = s[i];
        i++;
    }
    //d[i]='\0';
}

int main()
{
	char s[]="Raja";
	char d[]="Narender";
	//strncpy(d,s,3); //Rajender,It will override n also have the remaining data of destination string
        func(d,s,3);
        printf("%s\n",d);
}








