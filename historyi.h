void quad(float a,float b,float c,float r1,float r2,float dis)

{

SYSTEMTIME k;
GetSystemTime(&k);
FILE *p;
p=fopen("History.dat","a");
fprintf(p,"--------------------------------------------------\n");
fprintf(p,"%d\\ %d\\ %d\n",k.wDay,k.wMonth,k.wYear);
fprintf(p,"===================================================\n");
fprintf(p,"coff. of square term is %f\n",a);
fprintf(p,"coff. of linear term is %f\n",b);
fprintf(p,"coff. of constant term is %f\n",c);
fprintf(p,"\n");
fprintf(p,"the Discriminant is %f\n",dis);
fprintf(p,"the roots are  are %f and %f",r1,r2);
fprintf(p,"\n=========================================================\n");
fprintf(p,"\n\t\tTHE END..\n");
fprintf(p,"\n=========================================================\n");
fclose(p);



}

void facto(int a,int b)
{
    FILE *p;
p=fopen("History.dat","a");
   time_t T;
   time(&T);
   fprintf(p,"\n========================================================\n");
   fprintf(p,"%s\n",ctime(&T));

   fprintf(p,"\nthe factorial of %d is (%d!)       %d",a,a,b);
    fprintf(p,"\n=========================================================\n");
fprintf(p,"\n\t\tTHE END..\n");
fprintf(p,"\n=========================================================\n");
fclose(p);

}
void calcu(float a,float b,float d,char c)
{
       FILE *p;
p=fopen("History.dat","a");
   SYSTEMTIME k;
GetSystemTime(&k);

fprintf(p,"--------------------------------------------------\n");
fprintf(p,"%d\\ %d\\ %d\n",k.wDay,k.wMonth,k.wYear);
fprintf(p,"===================================================\n");

 fprintf(p,"\n%2.2f %c %2.2f =%2.3f",a,c,b,d);
     fprintf(p,"\n=========================================================\n");
fprintf(p,"\n\t\tTHE END..\n");
fprintf(p,"\n=========================================================\n");
fclose(p);


}
void res(float a,float b,float c)
{
        FILE *p;
p=fopen("History.dat","a");
   time_t T;
   time(&T);
   fprintf(p,"\n========================================================\n");
   fprintf(p,"%s\n",ctime(&T));

   fprintf(p,"\n");
   fprintf(p,"\n  the vertical force is %2.2f\n the horizontal force is %2.2f \n resultant is %f",
           a,b,c);

         fprintf(p,"\n=========================================================\n");
fprintf(p,"\n\t\tTHE END..\n");
fprintf(p,"\n=========================================================\n");
fclose(p);





}

void resi(float a,float b,float c)
{
        FILE *p;
p=fopen("History.dat","a");
   time_t T;
   time(&T);
   fprintf(p,"\n============== ==========================================\n");
   fprintf(p,"%s\n",ctime(&T));

   fprintf(p,"\n");
   fprintf(p,"\n  the vertical or horizontal force is %202f\n the resultant force is %2.2f \n vertical or horizontal force is %2.2f",a,b,c);

         fprintf(p,"\n=========================================================\n");
fprintf(p,"\n\t\tTHE END..\n");
fprintf(p,"\n=========================================================\n");
fclose(p);





}
void read_history(void)
{
char ch;
            FILE *p;
p=fopen("History.dat","r");

system("cls");

if(p==NULL)
{
    system("cls");
    system("color 73");
    gotoxy(40,12);
    printf("File Has been Deleted Plz Try again");
    getch();
    system("cls");
    menu();


}
ch=fgetc(p);
    while(!feof(p))
    {

        printf("%c",ch);
        ch=fgetc(p);


    }
    fclose(p);

getch();
menu();
}


void delete_file(void)

{




if(remove("History.dat")==0)
{

      system("cls");
    system("color 73");
    gotoxy(40,12);
    printf("File Has been Deleted Successfully !!!!!!!!");
    getch();
    system("cls");
    menu();

}else
{
      system("cls");
    system("color 73");
    gotoxy(40,12);
    printf("(File has already been deleted !!!!!)");
    getch();
    system("cls");
    menu();
}

getch();
menu();

}
