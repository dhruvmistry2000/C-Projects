#include<stdio.h>

int main()
{
      int row , col , mat[10][10]  , i  , j ;
      int flag ;


      printf("Enter the dimensions of matrix (Should be a square matrix ) =  ");
      scanf("%d  %d " , &row , &col );


      for (i = 1 ; i <= row ; i++)
      {
            for(j = 1
             ; j <= col ; j++)
            {
                  printf("Enter the element %d , %d  =   " , i ,  j );
                  scanf("%d " , &mat[i][j]);
             }
      }

      printf("The matrix is \n");


      for (i = 1 ; i <= row ; i++)
      {
            for(j = 1 ; j <= col ; j++)
            {
                  printf("%d\t" , mat[i][j]);

            }
            printf("\n");

      }

      for(i = 1 ; i <= row ; i++)
      {
            for(j = 1 ; j <= col ; j++)
            {
                  if(mat[i][j] != 1 &&  mat[j][i] != 0)
                  {
                        flag = 0 ;
                        break ;
                        
                  }
            }
      }
  

  if(flag == 0  )
  {
        printf("The matrix  is a Identity mtrix ");
  }
  else
  {
        printf("The matrix  is not a identity matrix ");
        
  }
      
      return 0 ;
}