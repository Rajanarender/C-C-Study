#include<stdio.h>

/*
struct solid
{
	int x;
        static char y;
};

int main()
{
	struct solid sd;
	//sd.x=10;
	sd ={.x =10,.y='A'};//structure intialization similar to Array
	printf("%d\n",sd.x);
}

*/

/*
//Example of segmentation fault using CLI
typedef struct _example
{
	int x;
        char *y;
}Example;


int main(int argc,char*argv[])
{
	Example em;
	em.x=atoi(argv[1]); //Example of Segmentation fault
        em.y =argv[2];
	printf("%d,%s\n",em.x,em.y);
return 0;
}
*/
//Note: We are trying to access the index,that does not have content will lead to Segmentation fault

//Using enum as return type
typedef enum _Attend
{
	ERROR1 =1,//Default value starts from 0
	ERROR2 
}Attend;

Attend func(int p1)
{

	if(p1 ==1)
		return ERROR1;
	else
		return ERROR2;
}

int main()
{
	printf("%d\n",func(0));
        return 0;

}













