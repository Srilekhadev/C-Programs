# include <stdio.h>
# include <conio.h>
# include <process.h>
void main()
{
	char ch;
	FILE *fp;
	int noa=0,nod=0,nos=0,not=0,nol=0,noss=0;
	fp=fopen("myfile.txt","r");
	if(fp==NULL)
	{
		printf("\nError: file unable to open.");
		exit(1);
	 }

	 while( (ch=fgetc(fp))!=EOF)
	 {
		if( (ch>='A' && ch<='Z') || (ch>='a' && ch<='z') )
			noa++;
		else if( ch>='0' && ch<='9')
			nod++;
		else if( ch==' ')
			nos++;
		else if( ch=='\t')
			not++;
		else if( ch=='\n')
			nol++;
		else
			noss++;

	  }
	  printf("\nnoa=%d \n nod=%d\n nos=%d \n not=%d\n nol=%d\n noss=%d",noa,nod,nos,not,nol,noss);
	  fclose(fp);
	  getch();
}