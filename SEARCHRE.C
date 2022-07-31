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
	int n,found=0;
	struct student s;
	FILE *fp;
	clrscr();
	fp=fopen("stud.dbf","rb");
	if(fp==NULL)
	{
		printf("\nError:file unable to open.");
		exit(1);
	 }
	 printf("\n Enter rn to search :");
	 scanf("%d",&n);

	 printf("\n\t\t Student Details\n");
	 while(fread(&s,sizeof(s),1,fp)==1)
	 {
		if(n==s.rn)
		{
printf("\n%-15s%-4d%-4d%-4d%-4d%-4d%-5s",
			  s.name,s.rn,s.m1,s.m2,s.tot,s.avg,s.res);
			  found=1;
		 }
	  }

	  if(found==0)
		 printf("\n record not found.");

	  fclose(fp);
	  getch();
}