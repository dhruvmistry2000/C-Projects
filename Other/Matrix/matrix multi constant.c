


#include <stdio.h>

int main ()
{

int i, j, a[3][3];
int  op ;

printf ("Enter values for Matrix A \n ");
 for (i = 1; i <= 3; i++)

    {
        for (j = 1; j <= 3; j++)

	{
	    printf ("Enter the element %d , %d   = ", i, j);

         scanf ("%d", &a[i][j]);

}

}


printf ("The matrix A with the given element is below \n");

for (i = 1; i <= 3; i++)

    {

      for (j = 1; j <= 3; j++)

	{

printf ("%d\t", a[i][j]);


}

       printf ("\n");

}
printf("Enter the number you want the matrix to be multiplied with =    ");
scanf("%d" , &op);
for (i = 1; i <= 3; i++)

    {
        for (j = 1; j <= 3; j++)

	{
	    a[i][j] = op * a[i][j] ;

}

}
printf ("The matrix A after multiplying with %d is given below  \n" , op );

for (i = 1; i <= 3; i++)

    {

      for (j = 1; j <= 3; j++)

	{

printf ("%d\t", a[i][j]);


}

       printf ("\n");

}










return 0;

}


