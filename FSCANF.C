# include <stdio.h>
# include <conio.h>
# include <process.h>
# include <string.h>

void main()
{
	char name[15],res[5];
	int rn,m1,m2,tot;
	float avg;

	FILE *fp;
	clrscr();
	fp=fopen("stud.txt","r");
	if(fp==NULL)
	{
		printf("\nError:file unable to open.");
		exit(1);
	 }

	 printf("\n\t\t Student Details\n");
	 printf("\nName\t      Rn  M1  M2  Tot  Avg    Res");
	 printf("\n============================================");

	 while ( fscanf(fp,"%s%d%d%d%d%f%s",
			name,&rn,&m1,&m2,&tot,&avg,res) !=EOF)
	 {
		printf("\n%-15s%-4d%-4d%-4d%-4d%-8.2f%-5s",
name,rn,m1,m2,tot,avg,res);
	 }

	  fclose(fp);
	  getch();
}