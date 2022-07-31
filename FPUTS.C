# include <stdio.h>
# include <conio.h>
# include <process.h>
void main()
{
	char line[80];
	FILE *fp;
	fp=fopen("apex.txt","w");
	if(fp==NULL)
	{
		printf("\nError: file unable to create.");
		exit(1);
	 }
	 printf("\nType text..\n");
	 while( gets(line)!=NULL)
	 {
		fputs(line,fp);
		fputc('\n',fp);
	  }
	  fclose(fp);
	  printf("\n1 file created.");
	  getch();
}