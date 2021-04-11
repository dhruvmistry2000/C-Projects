

#ixinclude<stdio.h>


int main ()
{

int i, j, a[10][10], b[10][10], c[10][10] , r , t  , rb , tb ;
printf("Enter number of Rows  for A = ");
scanf("%d" , &r);

printf("Enter number of Column  for A  = ");
scanf("%d" , &t);

printf("Enter number of Rows  for B = ");
scanf("%d" , &rb );

printf("Enter number of Column  for B  = ");
scanf("%d" , &tb );


if((r = rb) && (t = tb))
{



printf ("Enter values for Matrix A \n "); // Taking matrix values for Matrix A
 for (i = 1; i <= r; i++)

    {
        for (j = 1; j <= t; j++)

	{
	    printf ("Enter the element %d , %d   = ", i, j);

         scanf ("%d", &a[i][j]);

}

}


printf ("The matrix A with the given element is below \n"); // displaying Matix A

for (i = 1; i <= r ; i++)

    {

      for (j = 1; j <= t; j++)

	    {
            printf ("%d\t", a[i][j]);
        }

       printf ("\n");
    }

printf ("Enter values for Matrix  B \n");// Taking values for matrix B


for (i = 1; i <= rb; i++)

    {

      for (j = 1; j <= tb; j++)

	    {

             printf ("Enter the element %d , %d for matrix B  = ", i, j);

            scanf ("%d", &b[i][j]);

        }

    }


printf ("The matrix B with the given element is below \n"); //Showing matrix  B

for (i = 1; i <= rb; i++)

    {
        for (j = 1; j <= tb; j++)

    	{

              printf ("%d\t", b[i][j]);    
        }

    printf ("\n");

    }




for (i = 1; i <= r; i++) // Addition of matrix

    {
        for (j = 1; j <= t; j++)

	{

       c[i][j] = a[i][j] + b[i][j];

}

}


printf ("The matrix t after addtion of matrix A and B is  \n"); // Displaying the added matrix

for (i = 1; i <= r; i++)

    {
        for (j = 1; j <= t; j++)

	{
	    printf ("%d\t", c[i][j]);


}

printf ("\n");

}
}
else
{
    printf("The matrices cannot be added due to the difference in number of Rows or Column");
}



return 0;

}


