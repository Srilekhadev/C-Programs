# include <stdio.h>
# include <conio.h>
# include <process.h>
# include <string.h>
struct student
{
	char name[15];
	int rn,m1,m2,tot,avg;
	char res[5];
};

void main()
{
	FILE *fp;
	struct student s;

	fp=fopen("stud.dbf","rb");
	if(fp==NULL)
	{
		printf("\nError:file unable to open.");
		exit(1);
	 }
	 printf("\n\t\t Students Records\n");
	 printf("\nName\t   Rn  M1  M2  Tot  Avg  Res\n");
	printf("\n===============================================");
	 while( fread( &s,sizeof(s),1,fp)==1)
	 {
		printf("\n%-15s%-4d%-4d%-4d%-4d%-4d%-5s",s.name,s.rn,s.m1,
												s.m2,s.tot,s.avg,s.res);
	  }

	  fclose(fp);
	  getch();
}
