#define ENTER 13
#define TAB 9
#define BKSP 8
#define ESC 27
void delete_file(void);
void read_history(void);
void calculator(void);
void setcolor(int);
void Quadratic(void);
void resultant(void);
void gotoxy(int,int);
void menu(void);
void factore(void);
void welcome(void)
{
    extern int i,j;


    for(i=20;i<=85;i++)
    {
        gotoxy(i,8);
        setcolor(83);
        printf("/");

        gotoxy(i,20);
        setcolor(83);

        printf("/");


    }


    gotoxy(25,12);
    setcolor(82);
    printf("Welcome To             Group Of Coders!!!");

       gotoxy(36,12);
    setcolor(86);int factore(int a)
{
    if(a==1)
    return 1;
    else
    return (a*factore(a-1));




}
    printf("Mathematics");

    gotoxy(25,14);
    setcolor(87);
    printf("A Group Directed By Coders....");





        setcolor(44);
        gotoxy(25,5);
        printf("+");
         gotoxy(40,5);
         setcolor(82);
        printf("-");
            gotoxy(55,5);
            setcolor(84);
        printf("*");
            gotoxy(75,5);
            setcolor(87);
        printf("/");
        setcolor(70);
            gotoxy(75,5);  gotoxy(40,10);
    setcolor(66);
        printf("%");

     Sleep(1200);
     menu();


}

void menu(void)
{
    extern int i,j;
    read:
    system("cls");

    gotoxy(40,6);
    setcolor(65);
    printf("1: Quadratic Equation..");
    gotoxy(40,8);
    setcolor(66);
    printf("2: Find Resultant,Vertical or Horizontal Forces...");
      gotoxy(40,10);
    setcolor(67);
    printf("3: Simple Calculator..");

          gotoxy(40,12);
    setcolor(68);
    printf("4: Factorial Series (up to.. 15)");

            gotoxy(40,14);
    setcolor(69);
    printf("5: See The History..");

            gotoxy(40,16);
    setcolor(70);
    printf("6: Delete The History...");


    for(j=0;j<=104;j++)
    {
        gotoxy(j,25);
        setcolor(72);
        printf("-");

    }

      setcolor(44);
      gotoxy(45,26);
      printf("Ecs : ");
      setcolor(45);
            gotoxy(51,26);
      printf("To Exit");


      {
          char ch;

          ch=getch();
          if(ch==ESC )
          {
              system("cls");
              system("color 72");
              gotoxy(40,12);
              printf("Thanks For Visiting Us..");
              if(kbhit())
              exit(0);

          }else if(ch=='1')
          {
           Quadratic();
          }else if(ch=='2')
          {
               resultant();
          }
          else if(ch=='3')
          {
               calculator();
          }else if(ch=='4')
          {


              factore();
          }     else if(ch=='5')
          {


              read_history();
          }

          else if(ch=='6')
          {


             delete_file();
          }
          else
          {printf("\a");
            goto read;
          }


      }
}
