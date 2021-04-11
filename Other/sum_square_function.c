#include <stdio.h>
#include <math.h>

// Square adding function
float sum(float a)
{
  float sum;
  int i;
  sum = 0;

  for (i = 0; i <= a; i++)
  {
    sum = sum + (i * i);
  }

  return sum;
}

int main()
{
  int a;
  float sum1;

  printf("Enter a number =  ");
  scanf("%d", &a);

  // Calling the function and  storing its value in a variable

  sum1 = sum(a);

  printf("The sum of square of numbers till %d is %0.0f ", a, sum1);

  return 0;
}
