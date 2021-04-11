#include<stdio.h>

int main() 
{
      int org[10][10] , trans[10][10] , i , j  , row , col ;

      printf("Enter dimensions for a square matrix :-\n ");
do
{
      printf(" Rows =   ");
      scanf("%d" ,&row) ;

       printf(" Columns =   ");
      scanf("%d" ,&col) ;
}
while(row != col );


for(i = 1 ; i <= row ; i++)
{
      for(j = 1 ; j <= col ; j++)
      {
            printf("Enter element %d , %d =  " , i  , j );
            scanf("%d" , &org[i][j]);

      }
}

printf("The matrix is =\n ");


for(i = 1 ; i <= row ; i++)
{
      for(j = 1 ; j <= col ; j++)
      {
            printf("%d\t  " , org[i][j] );
           
      }
      printf("\n");

}

for(i = 1 ; i <= row ; i++)
{
      for(j = 1 ; j <= col ; j++)
      {
             trans[j][i]  = org[i][j]  ;
            
      }
}
printf("The transpose of the matrix is =\n");


for(i = 1 ; i <= row ; i++)
{
      for(j = 1 ; j <= col ; j++)
      {
            printf(" %d\t  " , trans[i][j] );
           
      }
      printf("\n");

}

return 0 ;
}