# include <stdio.h>
# include <conio.h>
# include <process.h>
void main()
{
	char ch;
	FILE *fp;
	clrscr();
	fp=fopen("myfile.txt","w");
	if(fp==NULL)
	{
		printf("\nError: file unable to create.");
		exit(1);
	 }
	 printf("\nType text..\n");
	 while( (ch=getchar())!=EOF)
	 {
		fputc(ch,fp);
	  }
	  fclose(fp);
	  printf("\n1 file created.");
	  getch();
}