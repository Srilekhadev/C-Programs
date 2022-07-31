# include <stdio.h>
# include <conio.h>
# include <process.h>
void main()
{
	FILE *fp;
	fp=fopen("sample.txt","w");

	if(fp==NULL)
	{
		printf("\nError: File unable to create.");
		exit(1);
	 }
	 else
	 {
		printf("\nFile created successfully.");
	 }
	 fclose(fp);
	 getch();
}

