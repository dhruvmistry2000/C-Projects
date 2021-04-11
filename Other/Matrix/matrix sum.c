

#include <stdio.h>

int main ()
{

int i, j, a[3][3], b[3][3], c[3][3];

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

printf ("Enter values for Matrix  B \ n ");

for (i = 1; i <= 3; i++)

    {

      for (j = 1; j <= 3; j++)

	{

      printf ("Enter the element %d , %d for matrix B  = ", i, j);

    scanf ("%d", &b[i][j]);

}

}


printf ("The matrix B with the given element is below \n");

for (i = 1; i <= 3; i++)

    {
        for (j = 1; j <= 3; j++)

	{

       printf ("%d\t", b[i][j]);


}

printf ("\n");

}




for (i = 1; i <= 3; i++)

    {
        for (j = 1; j <= 3; j++)

	{

       c[i][j] = a[i][j] + b[i][j];

}

}


printf ("The matrix C after addtion of matrix A and B is  \n");

for (i = 1; i <= 3; i++)

    {
        for (j = 1; j <= 3; j++)

	{
	    printf ("%d\t", c[i][j]);


}

printf ("\n");

}


return 0;

}


