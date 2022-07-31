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
	struct student s;
	int n,found,recsize;
	FILE *fp;
	clrscr();
	fp=fopen("stud.dbf","rb+");
	if(fp==NULL)
	{
		printf("\nError:file unable to open.");
		exit(1);
	 }
	 recsize=sizeof(s);

	 printf("\nEnter rn to modify :");
	 scanf("%d",&n);

	 while( fread(&s,sizeof(s),1,fp) ==1)
	 {
		if(n==s.rn)
		{
		printf("\nEnter name,rn,m1,m2 :");
		scanf("%s%d%d%d",s.name,&s.rn,&s.m1,&s.m2);
		s.tot=s.m1+s.m2;
		s.avg=s.tot/2;
		if(s.m1>=35 && s.m2>=35)
		  strcpy(s.res,"pass");
		else
		  strcpy(s.res,"fail");

		  fseek(fp,-recsize,1);
		  fwrite(&s,sizeof(s),1,fp);
		  found=1;
		  printf("\n record modified");
		  break;
		}
	 }


	  fclose(fp);
	  if(found==0)
		 printf("\n record not found");


	  getch();
}

