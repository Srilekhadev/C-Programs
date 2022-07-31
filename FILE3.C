# include <stdio.h>
# include <conio.h>
# include <process.h>
void main()
{
	char ch;
	FILE *fp1,*fp2;
	fp1=fopen("myfile.txt","r");
	if(fp1==NULL)
	{
		printf("\nError: file unable to open.");
		exit(1);
	 }

	 fp2=fopen("dup.txt","w");
	 if(fp2==NULL)
	 {
		printf("\nError: file unable to create.");
		exit(1);
	 }

	 while( (ch=fgetc(fp1))!=EOF)
	 {
		fputc(ch,fp2);
	  }
	  fclose(fp1);
	  fclose(fp2);
	  printf("\n 1 file copied.");
	  getch();
}