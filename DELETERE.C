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
	FILE *fp1,*fp2;
	clrscr();
	fp1=fopen("stud.dbf","rb");
	if(fp1==NULL)
	{
		printf("\nError:file unable to open.");
		exit(1);
	 }
	 fp2=fopen("temp.dbf","wb");
	 if(fp2==NULL)
	 {
		printf("\nError:file unable to create.");
		exit(1);
	 }
	 printf("\nEnter rn to delete :");
	 scanf("%d",&n);

	 while(fread(&s,sizeof(s),1,fp1)==1)
	 {
		if(n==s.rn)
		{
		  found=1;
		}
		else
		{
			fwrite(&s,sizeof(s),1,fp2);
		}
	 }

	 fclose(fp1);
	 fclose(fp2);
	 remove("stud.dbf");
	 rename("temp.dbf","stud.dbf");
	 if(found==1)
		printf("\n record deleted.");
	 else
		printf("\n record not found");

	  getch();
}