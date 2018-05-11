#include<iostream>
using namespace std;

/*
void func(char *d, const char *s,int bytes) //source string src should be made constant so that its value cannot be modified while copying
{
    int i = 0;
    while(*s && i<bytes)
    {
        *d++ = *s++;// Optimized code
        //*d =*s;
        //s++;
        //d++;
        i++;
    }
    *d= '\0'; //V.V.Important step
}


int main()
{
    //const char *src ="GlobalEdge"; we cannot modify const
    char src[] ="GlobalEdge";
    char des[11];
    func(des,src,3);
    cout<<des;
}

*/

int func(char *m, char *n, int bytes)
{
        int i =0;
	//while(*m && *n && *m == *n) //Checking character by character till NULL character
	while(*m && *n  && *m == *n && i<bytes) //Checking character by character till NULL character
	{
		m++;
		n++;
                i++;
	}

	if(*m =='\0' && *n=='\0') //'\0' NULL character check condition,Doubt
	{
		return 0;
	}
	else
	{
		return(*m-*n);//ASCII value difference
	}
}

int main()
{
    char x[] = "RaJA";//ASCII value for [a to z]= 97 to 122
    char y[] = "RaJ";//ASCII value for [A to Z]= 65 to 90
    cout<<func(x,y,3)<<endl;
} 



