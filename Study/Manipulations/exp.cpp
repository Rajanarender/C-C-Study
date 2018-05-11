#include<iostream>
using namespace std;

/*
int func(char *m)
{

	char *x = m;
	while(*m)
	{
		m++;
	}
	return m-x;

        if(*m == '\0')
        return 0;
        //return 1+func(m++); //Leads to Segmentation fault
        return 1 + func(m+1); //We are Adding +1 to the result to calculate length
}
*/

/*
void func(char *d,char *s)
{
	while(*s)
	{
		*d++ = *s++;
	}
	*d = '\0';

	//if(*s == NULL) //Error,NULL should be used only for arithmetic operations
	if(*s != '\0')
         {
	//*d++=*s++;
	//func(d,s);
         *d=*s;
	//func(d++,s++); //Segmentation fault
          func(d+1,s+1);
         }
         else
	*d = '\0'; //V.V.Imp step
}
*/


void funccat(char *d, char *s)
{
/*
	while(*d)
	{
		d++;
	}

	while(*s)
	{
		*d++=*s++;
	}
	*d='\0';
*/

	if(*d)
	{
		funccat(d+1,s);
	}

	if(*s)
	{
		*d=*s;
		funccat(d+1,s+1);
	}
	else
		*d= '\0';

}

int funccmp(char *m,char *n)
{
/*
	while(*m && *n && *m==*n)
	{
		m++;
		n++;
	}
	if(*m==*n)
		return 0;
	else
		return *m-*n;//ASCII values difference
*/


 return funccmp(m+1,n+1);



}

int main()
{
 	char x[]="Global";
        //cout<<func(x)<<endl;
        char y[] ="Edge";
	//funccat(x,y);
        //cout<<x<<endl;
         cout<<funccmp(x,y)<<endl;
        
}


