

#include<stdio.h>

int main ()
{

int i, j, a[10][10], b[10][10], c[10][10] , r , t ;
printf("Enter number of Rows = ");
scanf("%d" , &r);
printf("Enter number of Column = ");
scanf("%d" , &t);



printf ("Enter values for Matrix A \n ");
 for (i = 1; i <= r; i++)

    {
        for (j = 1; j <= t; j++)

	{
	    printf ("Enter the element %d , %d   = ", i, j);

         scanf ("%d", &a[i][j]);

}

}


printf ("The matrix A with the given element is below \n");

for (i = 1; i <= r ; i++)

    {

      for (j = 1; j <= t; j++)

	{

printf ("%d\t", a[i][j]);


}

       printf ("\n");


}

printf ("Enter values for Matrix  B \ n ");


for (i = 1; i <= r; i++)

    {

      for (j = 1; j <= t; j++)

	{

      printf ("Enter the element %d , %d for matrix B  = ", i, j);

    scanf ("%d", &b[i][j]);

}

}


printf ("The matrix B with the given element is below \n");

for (i = 1; i <= r; i++)

    {
        for (j = 1; j <= t; j++)

	{

       printf ("%d\t", b[i][j]);


}

printf ("\n");

}




for (i = 1; i <= r; i++)

    {
        for (j = 1; j <= t; j++)

	{

       c[i][j] = a[i][j] + b[i][j];

}

}


printf ("The matrix t after addtion of matrix A and B is  \n");

for (i = 1; i <= r; i++)

    {
        for (j = 1; j <= t; j++)

	{
	    printf ("%d\t", c[i][j]);


}

printf ("\n");

}



return 0;

}


