#include<stdio.h>

int main()
{
          struct day
          {
                    int date;
                    char  mon[10];
                    int year ;

          };

          struct     day d1  =  {19 , "March" , 2001};
          struct day d2 = {10 , "November" , 1971 };
          struct day d3;
          printf("Enter day = ");
          scanf("%d" , &d3.date);
          printf("Enter month  = ");
          scanf("%s" , &d3.mon);
          printf("Enter day = ");
          scanf("%d" , &d3.year );




          printf("\t\t\t\t\t\t%d  -%s - %d \n", d1.date , d1.mon , d1.year);
          printf("\t\t\t\t\t\t%d  -%s - %d\n ", d2.date , d2.mon , d2.year);
          printf("\t\t\t\t\t\t%d  -%s - %d \n", d3.date , d3.mon , d3.year);
          

          return 0 ;

}