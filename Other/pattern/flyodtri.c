#include <stdio.h>

int main()
{int a  , b  , c  , d = 1;

    printf("Enter a number :- ");
    scanf("%d" , &a);
    
   for(b = 1; b <=a ; b++)
   {
       for(c = 1 ; c <= b ; c++)
       {
           printf(" %d ", d);
           d++ ;

       }
       printf("\n");
   }

    return 0;
}
