
#include <stdio.h>

int main()
{
    int  i   , sum  = 0;
int a ;

    printf("Enter a number :");
    scanf("\n %d" , &a);
    for (i = 1 ; i <= a ; i++)
    {
      sum = sum + i ;
      if (i < a ){
          printf("%d + " , i);
      }
      else{
          printf("%d = " , i);
      }
    }
printf(" %d "  , sum );
    return 0;
}
