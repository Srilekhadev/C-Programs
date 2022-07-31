




# include <stdio.h>
# include <conio.h>
# include <process.h>
void main(int argc,char *argv[])
{
	char ch;
	FILE *fp;
	if(argc!=2)
	{
		printf("\n Invalid no. of args.");
		exit(1);
	}

	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("\nError : file unable to open");
		exit(1);
	 }

	 while( (ch=fgetc(fp))!=EOF)
	 {
		printf("%c",ch);
	 }
	  fclose(fp);
}


