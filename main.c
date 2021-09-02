#include <windows.h>
#include<stdio.h>

void Password();
void main_menu(void);
void add_new_member(void);
void remove_member(void);
void modify_member(void);
void search_member(void);
void view_member(void);
void payment(void);

COORD coord = {0, 0};
void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

char password[10]={"1"};
int main()

{
      Password();
      getch();
      return 0;

}
void main_menu()
{
    system("cls");
    system("COLOR 0B");
    int i;
    gotoxy(30,3);
    printf("MAIN MENU");
    gotoxy(30,4);
    printf("_________");
    gotoxy(25,6);
    printf("1. Add New Member ");
    gotoxy(25,8);
    printf("2. Remove Member");
    gotoxy(25,10);
    printf("3. Search Member");
    gotoxy(25,12);
    printf("4. View All Member");
    gotoxy(25,14);
    printf("5. Modify Member");
    gotoxy(25,16);
    printf("6. Payment");
    gotoxy(25,18);
    printf("7. Exit");
    gotoxy(25,20);
    printf("Enter Number:");
    switch(getch())
    {
        case '1':
        add_new_member();
        break;
        case '2':
        remove_member();
        break;
        case '3':
        search_member();
        break;
        case '4':
        view_member();
        break;
        case '5':
        modify_member();
        break;
        case '6':
        payment();
        break;
        case '7':
        {
        system("cls");
        gotoxy(16,3);
        printf("Thank You");
        gotoxy(10,7);
        exit(0);
        }
        default:
        {
        gotoxy(25,22);
        printf("Wrong Option Selected");
        gotoxy(25,23);
        printf("Please Enter Right Option");
        if(getch())
        main_menu();
        }
    }
}
void Password(void)
{

   system("cls");
   char ch,pass[10];
   int i=0;
   gotoxy(15,4);
   printf("Welcome To Gym Management Software");
   gotoxy(15,8);
   printf("Enter Password:");

   while(ch!=13)
   {
	ch=getch();
	if(ch!=13 && ch!=8){
	putch('*');
	pass[i] = ch;
	i++;
	}
   }
   pass[i] = '\0';
   if(strcmp(pass,password)==0)
   {

	gotoxy(15,12);
	printf("Password Verified");
	gotoxy(15,16);
	printf("Press Enter to Continue");
	getch();
	main_menu();
   }
   else
   {
	 gotoxy(15,16);
	 printf("\t \xB2\xB2\xB2 Wrong Password \xB2\xB2\xB2");
	 getch();
	 Password();
   }
}
void add_new_member(void)
{
    system("cls");
    printf( "add_new_member");
}
void remove_member(void)
{
    system("cls");
    printf("remove_member");
}
void modify_member(void)
{
    system("cls");
    printf("modify_member");
}
void search_member(void)
{
    system("cls");
    printf("search_member");
}
void payment(void)
{
    system("cls");
    printf(" payment");
}
void view_member(void)
{
    system("cls");
    printf(" view_member");
}
