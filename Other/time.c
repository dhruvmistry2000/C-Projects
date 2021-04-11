#include<stdio.h>
#include<time.h>

int main()
{ 
  int i ;
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

  time_t a;   // not a primitive datatype
    time(&a);

    for ( i = 0; i <= 100; i++)
    {
      printf("\nThis program has been written at (date and time): %s", ctime(&a) );
      a++ ;
    }
    

   

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");


    return 0;
}