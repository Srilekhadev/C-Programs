# include <stdio.h>
# include <conio.h>
# include <process.h>
# include <string.h>

void main()
{
	char name[15],res[5],ans;
	int rn,m1,m2,tot;
	float avg;

	FILE *fp;
	fp=fopen("stud.txt","w");
	if(fp==NULL)
	{
		printf("\nError:file unable to create.");
		exit(1);
	 }

	 do
	 {
		printf("\nEnter name,rn,m1,m2 :");
		scanf("%s%d%d%d",name,&rn,&m1,&m2);
		tot=m1+m2;
		avg=tot/2.0;
		if(m1>=35 && m2>=35)
		 strcpy(res,"pass");
		else
		  strcpy(res,"fail");

 fprintf(fp,"%s\n%d\n%d\n%d\n%d\n%f\n%s\n",
								 name,rn,m1,m2,tot,avg,res);

		 printf("\nWant to continue [y/n] :");
		 fflush(stdin); /* clears key board buffer */
		 scanf("%c",&ans);
	  }while (ans=='y' || ans=='Y');

	  fclose(fp);
	  getch();
}