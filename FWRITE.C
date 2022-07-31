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
	struct student s;
	char ans;
	FILE *fp;
	fp=fopen("stud.dbf","wb");
	if(fp==NULL)
	{
		printf("\nError: file unable to create.");
		exit(1);
	 }

	 do
	 {
		printf("\nEnter name,rn,m1,m2 :");
		scanf("%s%d%d%d",s.name,&s.rn,&s.m1,&s.m2);
		s.tot=s.m1+s.m2;
		s.avg=s.tot/2;
		if(s.m1>=35 && s.m2>=35)
			strcpy(s.res,"Pass");
		else
			strcpy(s.res,"Fail");

		 fwrite(&s,sizeof(s),1,fp);

		 printf("\n 1 record added.");
		 printf("\nWant to add more records [y/n] :");
		 fflush(stdin);
		 scanf("%c",&ans);
	  }while(ans=='y' || ans=='Y');
	  fclose(fp);
	  getch();
 }


