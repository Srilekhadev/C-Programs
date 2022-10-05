# include <stdio.h>
# include <conio.h>
# include <process.h>
void main()
{
	FILE *fp;
	char ch;
	clrscr();
	fp=fopen("myfile.txt","w");
	if(fp==NULL)
	{
		printf("\nError : file unable to create.");
		exit(1);
	}
	printf("\nType text..[Ctrl+Z to terminate..]\n");
	while( (ch=getchar() ) !=EOF)
	{
		fputc(ch,fp);
	}

	printf("\n1 file created.");
	fclose(fp);
	getch();
}