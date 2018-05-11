#include<stdio.h>

/************************************************************************
rewind(fp) -Used to change the fptr position to the beginning of file
eof(fp) -END OF FILE
*************************************************************************/

int main()
{
	FILE *fp;
	fp = fopen("filesizec.txt","w");
	if(!fp) //if(fp==NULL)
	{
		printf("File doesnot Exist,Please create it\n");
	}
	fprintf(fp,"Global Edge"); //Writting into the file

        //while(!feof(fp))
        //{
        //}

	fclose(fp);

	fp = fopen("filesizec.txt","rb"); //read,binary mode
	int start = ftell(fp);
	fseek(fp,0,SEEK_END); //SEEK_SET for beginning,SEEK_CUR for current,SEEK_END for end
	int end = ftell(fp);
	fclose(fp);
	printf("size of filesizec.txt is %d Bytes\n",(end-start));

}
