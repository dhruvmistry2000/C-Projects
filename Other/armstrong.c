#include <stdio.h>
#include <math.h>
int main()
{
    int num ,a, rem, b = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    a = num;

    while (a != 0) {

        rem = a % 10;

       b = pow(rem , 3 ) + b ;


      a /= 10;
    }

    if (b == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
