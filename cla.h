void res(float,float,float);
void resi(float ,float ,float );
void resultant(void)
{

    extern int i,j;
    char ch;
    float vertical,horizontal;
    readiii:
        system("cls");
    readi:
    gotoxy(40,10);
    printf("1: Calculate Resultant Force......");
    gotoxy(40,12);
    printf("2: Calculate  Vertical or Horizontal......");
      setcolor(44);
      gotoxy(5,26);
      printf("Ecs : ");
        setcolor(45);
            gotoxy(11,26);
      printf("To Exit");
          setcolor(44);
      gotoxy(80,26);
      printf("Backspace: ");
        setcolor(45);
            gotoxy(92,26);
      printf("<-- Go back");


    ch=getch();
    if(ch=='1')
    {
        system("cls");

        gotoxy(40,10);
        printf("Enter the Vertival force..\t");
        scanf("%f",&vertical);

        gotoxy(40,12);
        printf("Enter the Horizontal force....\t");
        scanf("%f",&horizontal);
        setcolor(87);
        gotoxy(40,14);
        printf("The Resultant is ....%2.2f",sqrt((horizontal*horizontal)+
                                                 (vertical*vertical)));


                res(vertical,horizontal,sqrt((horizontal*horizontal)+
                                     (vertical*vertical)));

        readii_A:
        setcolor(44);
      gotoxy(5,26);
      printf("Ecs : ");
        setcolor(45);
            gotoxy(11,26);
      printf("To Exit");
          setcolor(44);
      gotoxy(80,26);
      printf("Backspace: ");
        setcolor(45);
            gotoxy(92,26);
      printf("<-- Go back");
         {
             char c;
             c=getch();
             if(c==ESC )
          {
              system("cls");
              system("color 72");
              gotoxy(40,12);
              printf("Thanks For Visiting Us..");
              if(kbhit())
              exit(0);



    }else if(c==BKSP)
 {
     system("cls");
     goto readiii;
         }

         else
         {
             printf("\a");
             goto readii_A;

         }








    }}else if(ch=='2')
    {



     system("cls");

        gotoxy(40,10);
        printf("Enter the Vertical or Horizontal force..\t"
               );
        scanf("%f",&vertical);

        gotoxy(40,12);
        printf("Enter the Resultant force....\t");
        scanf("%f",&horizontal);
        setcolor(87);
        gotoxy(40,14);
        printf("The Vertical or Horizontal is ....%2.2f",sqrt((horizontal*horizontal)-
                                                              (vertical*vertical)));

  resi(vertical,horizontal,sqrt((horizontal*horizontal)-
                                     (vertical*vertical)));



        readii_B:
        setcolor(44);
      gotoxy(5,26);
      printf("Ecs : ");
        setcolor(45);
            gotoxy(11,26);
      printf("To Exit");
          setcolor(44);
      gotoxy(80,26);
      printf("Backspace: ");
        setcolor(45);
            gotoxy(92,26);
      printf("<-- Go back");
         {
             char cw;
             cw=getch();
             if(cw==ESC )
          {
              system("cls");
              system("color 72");
              gotoxy(40,12);
              printf("Thanks For Visiting Us..");
              if(kbhit())
              exit(0);



    }else if(cw==BKSP)
 {
     system("cls");
     goto readiii;
         }

         else
         {
             printf("\a");
             goto readii_B;

         }








    }




    } else if(ch==ESC )
          {
              system("cls");
              system("color 72");
              gotoxy(40,12);
              printf("Thanks For Visiting Us..");
              if(kbhit())
              exit(0);



    }else if(ch==BKSP)
 {
     system("cls");
     menu();
 }

    else
    {
        printf("\a");
        goto readi;
    }






}



