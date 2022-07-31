# include <stdio.h>
# include <conio.h>
# include <process.h>
void main()
{
	FILE *fp;
	fp=fopen("sample.txt","w");

	if(fp==NULL)
	{
		printf("\nError : file unable to create.");
		exit(1);
	}
	else
	{
		printf("\nfile created successfully.");
	}
	fclose(fp);
	getch();
}