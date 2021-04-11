

#include <stdio.h>

int main()
{int a ;
int b = 1  , c;

printf("Enter number of rows = ");
scanf("%d" , &a );


for(b = 0 ; b <= a ; b++ )
{
    for(c = 1 ; c <= b ; c++)
    {
        printf("*");

    }
    printf("\n");
}

for(b = a ; b >= 0 ; b-- )
{
    for(c = 1 ; c <= b ; c++)
    {
        printf("*" );

    }
    printf("\n");
}

    return 0;
}

