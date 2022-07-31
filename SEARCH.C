# include <stdio.h>
# include <conio.h>
# include <process.h>
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
	fp=fopen("stud.dbf","rb");
	if(fp==NULL)
	{
		printf("\nError: file unable to open.");
		exit(1);
	 }

	 printf("\nEnter rn to searach :");
	 scanf("%d",&n);


	 printf("\n\t\tStudent Details");
	 printf("\nName\t    Rn  M1  M2 ToT Avg  Res");
	 printf("\n====================================================");
	 while(fread(&s,sizeof(s),1,fp)==1)
	 {
		if(s.rn==n)
		{
		printf("\n%-15s%-4d%-4d%-4d%-4d%-4d%-5s",s.name,s.rn,s.m1,s.m2,s.tot,s.avg,s.res);
		found=1;
		}
	 }
	 fclose(fp);
	 if(found==0)
		printf("\n record not found.");

	 getch();
}




