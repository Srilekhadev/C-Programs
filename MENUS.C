# define P printf
# define S scanf
# define CP cprintf
# define G gotoxy


void about();
void studentsmenu();
void addstudent();

void title()
{
	clrscr();
	G(28,1);
	textcolor(3);
	CP("Hello World");
	G(28,2);
	P("--------------------------");
	G(36,3);
	textcolor(4);
	CP("Warangal");
	G(36,4);
	P("--------");
}

void mainmenu()
{
	int choice;
do
{
	title();
	textcolor(6);
	G(35,6);
	CP("MAin Menu");
	G(35,7);
	P("--------");
	P("\n\t\t\t\t");
	textcolor(7);
	CP("1. About Company");
	P("\n\t\t\t\t");
	CP("2. Students");
	P("\n\t\t\t\t");
	CP("3. Reports");
	P("\n\t\t\t\t");
	CP("4. Exit");
	P("\n\t\t\t\tEnter choice :");
	S("%d",&choice);

	switch(choice)
	{
		case 1:
			about();
			break;
		case 2:
			studentsmenu();
			break;
		case 3: break;
		case 4: return;
		default:
			P("\nInvalid choice..");
	}
	getch();

 }while(1);
}

void about()
{
 char ch;
 FILE *fp=fopen("about.txt","r");
 title();
 if(fp==NULL)
 {
	P("\nFile not found : about.txt");
	getch();
	return;
 }

 while( (ch=fgetc(fp)) != EOF)
 {
	P("%c",ch);
 }
 fclose(fp);
 getch();

}


void studentsmenu()
{

	int choice;
do
{
	title();
	textcolor(6);
	G(35,6);
	CP("Students Menu");
	G(35,7);
	P("-------------");
	P("\n\t\t\t\t");
	textcolor(7);
	CP("1. Add Student");
	P("\n\t\t\t\t");
	CP("2. search Student");
	P("\n\t\t\t\t");
	CP("3. Delete Student");
	P("\n\t\t\t\t");
	CP("4. Back to main menu");
	P("\n\t\t\t\tEnter choice :");
	S("%d",&choice);

	switch(choice)
	{
		case 1: addstudent();break;
		case 2: break;
		case 3: break;
		case 4: return;
		default:
			P("\nInvalid choice..");
	}
	getch();

 }while(1);


}











