#include<stdio.h>

int main(){
int a[10][10] , b[10][10] , d[10][10] ;  // Arrays
int  r , c , i , j , k , sum ;  // other useful varaibles


printf("enter the number of row=");// for sacnning number of row
scanf("%d",&r);
printf("enter the number of column="); // for scanning number of column
scanf("%d",&c);



printf(" First matrix  \n"); // taking values of first matrix
for(i=1;i <= r; i++)
{
for(j=1;j <= c; j++)
{   printf("Enter the element %d , %d =  " , i , j);
scanf("%d",&a[i][j]);
}
}


printf("Matris A is \n"); // displaying first row
for(i=1;i <= r; i++)
{
for(j=1;j <= c; j++)
{   printf("%d \t " , a[i][j]);

}
printf("\n");
}



printf(" Second matrix \n"); // taking values for second matrix
for(i = 1 ;i <= r; i++)
{
for(j = 1;j <= c; j++)
{  printf("Enter the element %d , %d =  " , i , j );
scanf("%d",&b[i][j]);
}
}

printf("Matris B  is \n"); // displaying second matrix
for(i = 1 ;i <= r; i++)
{
for(j = 1;j <= c; j++)
{  printf("%d \t  " , b[i][j]);

}
printf("\n");
}



printf("Multiplication of the matrix=\n"); // Multiplying both the matrix
for(i = 1;i<= r; i++)
{
for(j = 0;j <= c; j++)
{
sum  = 0;
for(k = 1; k <= c; k++)
{
sum += a[i][k] * b[k][j] ;
}
d[i][j] = sum ;
}
}

for(i = 1; i <= r; i++) // displaying the multiplied matrix
{
for(j = 1 ; j <= c; j++)
{
printf("%d\t", d[i][j] );
}
printf("\n");
}
return 0;
}
