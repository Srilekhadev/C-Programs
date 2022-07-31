# include <stdio.h>
# include <conio.h>
void main(int argc,char *argv[])
{
	int i;
	printf("\n No. of arguments = %d",argc);
	printf("\n Arguments values...\n");
	for(i=0;i<argc;i++)
	{
		printf("\n%s",argv[i]);
	}
	getch();
}
