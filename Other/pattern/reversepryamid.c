#include <stdio.h>
int main() {
   float r , a = 1 , b , i , j ;
   printf("Enter the number of row : ");
   scanf("%f", &r);
   for (i = 0; i < r; i++) {
      for (b = 1; b <= r - i; b++)
         printf("  ");
      for (j = 0; j <= i; j++) {


         printf("*  ");
      }
      printf("\n");
   }
    for (i = r-2; i >=0 ; i--) {
      for (b = 1; b <= r - i; b++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            a = 1;
         else
            a = a * (i - j + 1) / j ;
         printf("*  ");
      }
      printf("\n");
   }
   return 0;
}
