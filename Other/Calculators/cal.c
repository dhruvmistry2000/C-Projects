#include <stdio.h>
#include<string.h>


int main()
{
    int a , b  ;
float c ;
char op ;
printf("Enter the operator ( +,-,*,/) = ");
op = getchar() ;

printf("Enter a number = ");
scanf("%d" , &a);

printf("Enter another  number = ");
scanf("%d" , &b);


if(op == '+')
{
   c = a + b ;
}
else if(op == '-')
{
   c = a - b ;
}

else if(op == '*')
{
   c = a * b ;
}

else if(op == '/')
{
   c = a / b ;
}

printf("%d %c %d = %0.0f" , a , op ,  b , c  );


    return 0;
}
