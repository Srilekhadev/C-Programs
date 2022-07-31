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

	fp=fopen(argv[1],"w");
	if(fp==NULL)
	{
		printf("\nError : file unable to create.");
		exit(1);
	 }

	 while( (ch=getchar() )!=EOF)
	 {
		fputc(ch,fp);
	  }
	  fclose(fp);
	  printf("\n\t 1 file created.");
}





