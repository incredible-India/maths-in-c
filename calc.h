float add(float,float);
void swag(char);
float subs(float,float);
void calcu(float ,float ,float ,char );
float multi(float,float);
void reminder(float,float);
float percent(float a, float b);
void facto(int ,int );
void calculator()
{


    char ch;

 read6:
    system("cls");

    setcolor(10);

    gotoxy(40,5);

    printf("\"+\" For Addition");

   gotoxy(40,7);
    setcolor(11);

    printf("\"-\" For Subtraction");

    gotoxy(40,9);

    setcolor(12);

    printf("\"*\" For Multiplication");

    gotoxy(40,11);

    setcolor(13);

    printf("\"/\" For the Division");

    gotoxy(40,13);

    setcolor(14);

    printf("\"%%\" For Percentage");

         setcolor(44);

      gotoxy(45,26);

      printf("Ecs : ");
      setcolor(45);

            gotoxy(51,26);

      printf("To Exit");


           setcolor(46);

      gotoxy(45,24);

      printf("BACKSPACE : ");
      setcolor(45);

            gotoxy(57,24);

            setcolor(47);
            printf("<- Go Back");



    ch=getch();

    if(ch=='+')
    {

     swag(ch);

    }else if(ch=='-')
    {

     swag(ch);

    }else if(ch=='*')

    {

     swag(ch);

    }else if(ch=='/')
    {

     swag(ch);

    }else if(ch=='%')
    {

     swag(ch);

    }else if(ch==BKSP)
    {
        system("cls");
        menu();

    }else if(ch==ESC)
    {
            system("cls");
              system("color 72");
              gotoxy(40,12);
              printf("Thanks For Visiting Us..");
              if(kbhit())
              exit(0);


    }else
    {
     printf("\a");
        goto read6;
    }




}



void swag(char c)
{
  extern int i, j;
      float a,b,ans;
      system("cls");
    for(i=21;i<=83;i++)
{
  gotoxy(i,3);
  printf(".");


}
for(i=21;i<=83;i++)
{
  gotoxy(i,7);
  printf(".");


}

for(i=21;i<=83;i++)
{
  gotoxy(i,11);
  printf(".");


}
for(i=21;i<=83;i++)
{
  gotoxy(i,15);
  printf(".");


}

         setcolor(44);

      gotoxy(45,26);

      printf("Ecs : ");
      setcolor(45);

            gotoxy(51,26);

      printf("To Exit");


           setcolor(46);

      gotoxy(45,24);

      printf("BACKSPACE : ");
      setcolor(45);

            gotoxy(57,24);

            setcolor(47);
            printf("<- Go Back");
 gotoxy(24,5);
 setcolor(15);
 printf("Enter The First no.");
 setcolor(82);
  gotoxy(77,5);
 scanf("%f",&a);
  gotoxy(24,9);
 setcolor(17);
 printf("Enter The Second no..");
 setcolor(82);
  gotoxy(77,9);
 scanf("%f",&b);


 if(c=='+')
    {
        setcolor(87);
gotoxy(41,2);
printf("Addtion");
        ans=add(a,b);
   gotoxy(24,13);
 setcolor(78);
 printf("The Sum is");
  gotoxy(77,13);
  setcolor(12);
 printf("%2.2f",ans);
 }

 else if(c=='-')


 {
             setcolor(87);
gotoxy(41,2);
printf("Subtraction");
        ans=subs(a,b);
   gotoxy(24,13);
 setcolor(78);
 printf("The Subtraction is");
  gotoxy(77,13);
  setcolor(12);
 printf("%2.2f",ans);

 }else if(c=='*')
 {
                  setcolor(87);
gotoxy(41,2);
printf("Multiplication");
        ans=multi(a,b);
   gotoxy(24,13);
 setcolor(78);
 printf("The Multiplication is");
  gotoxy(77,13);
  setcolor(12);
 printf("%2.2f",ans);



 }else if(c=='/')
 {
                       setcolor(87);
gotoxy(41,2);
printf("Division");

   reminder(a,b);






 }else if(c=='%')
 {

                       setcolor(87);
gotoxy(41,2);
printf("Percentage");
        ans=percent(a,b);
   gotoxy(24,13);
 setcolor(78);
 printf("The Percentage is");
  gotoxy(77,13);
  setcolor(12);
 printf("%2.2f",ans);

 }
 else
 {
     printf("\a");
     system("cls");
     calculator();
 }
 calcu(a,b,ans,c);
raed14:
{
    char f;
    f=getch();
    if(f==ESC)
    {
        system("cls");
              system("color 72");
              gotoxy(40,12);
              printf("Thanks For Visiting Us..");
              if(kbhit())
              exit(0);
    }else if(f==BKSP)
    {

     system("cls");
     calculator();

    }else
    {
        printf("\a");
        goto raed14;
    }


}




}

float add(float a,float b)
{
  float adding;

  adding= a+b;

  return adding;





}

float subs(float a,float b)
{
float minusi;

   minusi =a-b;

   return minusi;

}


float multi(float a, float b)
{
 float multip;
 multip=a*b;
return multip;


}








void  reminder(float a ,float b)
{
 int  reminder;
 float vi;
 int k;

 if(b==0)
 {

     gotoxy(42,13);
 setcolor(78);
   printf("cannot divided by zero");
   getch();
    return ;
 }
  reminder=(int)a%(int)b;
  k=(int)a/(int)b;
  vi=a/b;
        gotoxy(24,13);
 setcolor(78);
 printf("The Full division is");
 gotoxy(77,13);
  setcolor(12);
  printf("%2.2f",vi);
  gotoxy(32,17);
  setcolor(150);
  printf("%d is the division coff. and the reminder is %d",k,reminder);



}

float percent(float a, float b)
{

float percentage;

percentage=((a/b)*100);

return percentage;






}

void factore(void)
{
    int a,b=1;
    extern int i ,j;
       system("cls");


         setcolor(44);

      gotoxy(45,26);

      printf("Ecs : ");
      setcolor(45);

            gotoxy(51,26);

      printf("To Exit");


           setcolor(46);

      gotoxy(45,24);

      printf("BACKSPACE : ");
      setcolor(45);

            gotoxy(57,24);

            setcolor(47);
            printf("<- Go Back");
    for(i=21;i<=83;i++)
{
  gotoxy(i,3);
  printf(".");


}
for(i=21;i<=83;i++)
{
  gotoxy(i,7);
  printf(".");


}

for(i=21;i<=83;i++)
{
  gotoxy(i,11);
  printf(".");


}
 gotoxy(24,5);
 setcolor(15);
 printf("Enter The  no..");
 setcolor(82);
  gotoxy(77,5);
 scanf("%d",&a);
 if(a>=16)
 {

  gotoxy(42,9);
 setcolor(17);
 printf("Number Is Too Long");


 }
 else{
for(i=0;i<a;i++)
{
    b=b*(i+1);
}


  gotoxy(24,9);
 setcolor(17);
 printf("The factorial of %d is (%d!)",a,a);
   gotoxy(77,9);
  setcolor(12);
 printf("%d",b);
  facto(a,b);

}
raed15:
{
    char f;
    f=getch();
    if(f==ESC)
    {
        system("cls");
              system("color 72");
              gotoxy(40,12);
              printf("Thanks For Visiting Us..");
              if(kbhit())
              exit(0);
    }else if(f==BKSP)
    {

     system("cls");
     menu();

    }else
    {
        printf("\a");
        goto raed15;
    }


}


}
