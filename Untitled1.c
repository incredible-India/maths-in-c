#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include"welcome.h"
#include"quadratic.h"
#include"historyi.h"
#include<stdlib.h>
#include"cla.h"
#include"calc.h"

void welcome(void);
void setcolor(int);
void gotoxy(int,int);

int i,j;
int main(int a,char *p[])

{
 void (*o)(void);

 o=welcome;
 o();

getch();




}





void gotoxy(int a,int b)
{

COORD x;
x.X=a;
x.Y=b;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);



}

void setcolor(int ForgC)
{
     WORD wColor;


     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
