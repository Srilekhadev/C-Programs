
# include <stdio.h>
# include <conio.h>
# include <process.h>
void main()
{
	char line[80];
	FILE *fp;
	clrscr();
	fp=fopen("A.txt","r");
	if(fp==NULL)
	{
		printf("\nError: file unable to open.");
		exit(1);
	 }
	 while( fgets(line,79,fp)!=NULL)
	 {
	  printf("%s",line);
	 }

	  fclose(fp);
	  getch();
}