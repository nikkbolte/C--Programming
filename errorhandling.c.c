#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("hackerrank.c","a");
	if(ferror(fp))
	{
		printf("error has occured\n");
	}
	else
	 {
	 	
		while(!feof)
		{
			ch=fgetc(fp);
			printf("%c",ch);
			ch=fgetc(fp);
		}
		perror(fp);
		fclose(fp);
	}
}
