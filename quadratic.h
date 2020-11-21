#include<math.h>
#define ENTER 13
void quad(float a,float b,float c,float r1,float r2,float dis);
struct value
{
 float v1,v2,v3,root1,root2,dis;
 char ch;



};


void Quadratic(void)
{


extern int i,j;

struct value val;
k:
system("cls");

setcolor(87);
gotoxy(41,2);
printf("Quadratic Expression");
setcolor(67);
for(i=21;i<=83;i++)
{
  gotoxy(i,3);
  printf(".");


}
for(i=21;i<=83;i++)
{
  gotoxy(i,28);
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

for(i=21;i<=83;i++)
{
  gotoxy(i,19);
  printf(".");


}


for(i=21;i<=83;i++)
{
  gotoxy(i,23);
  printf(".");


}
for(i=3;i<=28;i++)
{
  gotoxy(21,i);
  printf(".");


}
for(i=3;i<=28;i++)
{
  gotoxy(83,i);
  printf(".");


}
 gotoxy(24,5);
 setcolor(86);
 printf("Coff.  of square term..");
 setcolor(82);
  gotoxy(77,5);
 scanf("%f",&val.v1);


  gotoxy(24,9);
 setcolor(86);
 printf("Coff. of linear term..");
  gotoxy(77,9);
  setcolor(82);
 scanf("%f",&val.v2);


   gotoxy(24,13);
 setcolor(86);
 printf("Constant term..");
  gotoxy(77,13);
  setcolor(82);
 scanf("%f",&val.v3);

if(val.v1!=0)
{


 val.dis=(((val.v2)*(val.v2))-4*(val.v1)*(val.v3));


 if(val.dis>0)
 {
     val.root1=((-val.v2)+sqrt((val.dis)))/(2*(val.v1));
     val.root2=((-val.v2)-sqrt((val.dis)))/(2*(val.v1));


     gotoxy(24,17);
     printf("1st Root = %2.2f",val.root1);
     gotoxy(60,17);
     printf("2nd Root = %2.2f",val.root2);
   gotoxy(23,21);
   setcolor(87);
 printf("Expression: (%2.2f)x*x+(%2.2f)x+(%2.2f))=0 {in terms of \'x\'}",val.v1,val.v2,val.v3);
      setcolor(67);
    gotoxy(24,25);
   printf("Since Discriminant is positive i.e D = %2.2f",val.dis);
   gotoxy(24,27);
   printf("Roots will be Distinct and real ....");

 }
 else if(val.dis==0)
 {
    val.root1=(-val.v2)/(2*(val.v1));

     gotoxy(24,17);
     printf("1st Root = %2.2f",val.root1);
     gotoxy(60,17);
     printf("2nd Root = %2.2f",val.root1);

          gotoxy(23,21);
   setcolor(87);
  printf("Expression: (%2.2f)x*x+(%2.2f)x+(%2.2f))=0 {in terms of \'x\'}",val.v1,val.v2,val.v3);
    setcolor(67);
   gotoxy(24,25);
   printf("Since Discriminant is Zero i.e D = %2.2f",val.dis);
   gotoxy(24,27);
   printf("Roots will be equal with same sign ");
 }
 else
 {
     val.root1=(-val.v2)/(2*(val.v1));
          gotoxy(24,16);
     printf("1st Root = %2.2f + (%2.2f)i",val.root1,val.dis/(2*(val.v1)));

     gotoxy(24,18);
    printf("2nd Root = %2.2f - (%2.2f)i",val.root1,val.dis/(2*(val.v1)));

     gotoxy(58,17);
    printf("i= _/-1  (iota)");
       gotoxy(23,21);
   setcolor(87);
   printf("Expression: (%2.2f)x*x+(%2.2f)x+(%2.2f))=0 {in terms of \'x\'}",val.v1,val.v2,val.v3);
     setcolor(67);

   gotoxy(24,25);
   printf("Since Discriminant is Negative i.e D = %2.2f",val.dis);
   gotoxy(24,27);
   printf("Roots will be Imaginary and conjugate pair of each other");

 }
}else{


      val.root1=(-val.v3)/(val.v2);

       gotoxy(24,17);
     printf("Solution = %2.2f",val.root1);


       gotoxy(23,21);
   setcolor(87);
   printf("Expression : (%2.2f)x+(%2.2f))=0 {in terms of \'x\'(Linear)}",val.v2,val.v3);
     setcolor(67);

   gotoxy(24,25);
   printf("Since Coff. of square term is 0, so this Linear equation");
   gotoxy(24,27);
   printf("This not a Quadratic Equation");





}
 quad(val.v1,val.v2,val.v3,val.root1,val.root2,val.dis);

 read_gain:
     setcolor(109);
gotoxy(0,1);
printf("Esc: To exit");
gotoxy(0,3);
printf("Backspace: <-Go back ");
gotoxy(0,5);
printf("Enter: To continue");

{


val.ch=getch();
 if(val.ch==ENTER)
 {
     Quadratic();

 }else if(val.ch==ESC)
 {
      system("cls");
              system("color 72");
              gotoxy(40,12);
              printf("Thanks For Visiting Us..");
              if(kbhit())
              exit(0);

 }else if(val.ch==BKSP)
 {
     system("cls");
     menu();

 }else
 {

     printf("\a");
     goto read_gain;
 }
}


 }


