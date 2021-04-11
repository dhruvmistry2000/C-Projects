#include <stdio.h>
int main() 
{
   float r , a = 1 , b , i , j ;
   printf("Enter the number of row : ");
   scanf("%f", &r);

   
   for (i = 0; i < r; i++)
 {
      for (b = 1; b <= r - i; b++)
        {
         printf("  ");
        }

      for (j = 0; j <= i; j++)
      {
            printf("%4.0f", a++);
      }
      printf("\n");
}
   return 0;
}
