#include<stdio.h>

int main()
{
char x[8];

char y[]="Rajanare";
int i;
for(i=0;y[i]!='\0';i++) 
strcat(x,y[i]);

printf("%s",x);
}
