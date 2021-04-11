#include <stdio.h>

int main()
{int a  , b  , c  , d = 1;

    printf("Enter a number :- ");
    scanf("%d" , &a);
    b = 0 ;
   for(b = 1; b <=a ; b++)
   {
       for(c = a ; c >= b ; c--)
       {
           printf(" %d ", d++);
       }
       printf("\n");
   }

    return 0;
}
