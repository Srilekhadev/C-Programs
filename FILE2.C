# include <stdio.h>
# include <conio.h>
# include <process.h>
void main()
{
	char ch;
	FILE *fp;
	fp=fopen("myfile.txt","r");
	if(fp==NULL)
	{
		printf("\nError: file unable to open.");
		exit(1);
	 }

	 while( (ch=fgetc(fp))!=EOF)
	 {
		printf("%c",ch);
	  }
	  fclose(fp);
	  getch();
}