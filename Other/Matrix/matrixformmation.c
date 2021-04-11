

#include <stdio.h>

int main()
{int i , j , a[3][3]   ;
    for(i = 1 ; i <= 3 ; i ++)
    {
        for(j = 1 ; j <= 3 ; j++)
        {
            printf("Enter the element %d , %d for matrix A  = " , i , j);
            scanf("%d" , &a[i][j]);
        }
    }

     printf("The matrix A with the given element is below \n");
    for(i = 1 ; i <= 3 ; i ++)
    {
        for(j = 1 ; j <= 3 ; j++)
        {
            printf("%d \t " , a[i][j]);

        }
        printf("\n");
    }
    getch();




    return 0;
}
