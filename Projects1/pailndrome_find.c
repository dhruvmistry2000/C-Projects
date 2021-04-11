#include <stdio.h>
#include <conio.h>

int palin(int num); // Declaration of the palindrome checking Function

int main()
{
  printf("A palindromic number  is a number  that remains the same when its digits are reversed. In other words, it has reflectional symmetry across a vertical axis.Example 1 ,11,101 , 111 etc..... "); // Basic info about Palindrome number
  printf("\n\nPress any key to continue.");
  getch();

  int num, pali, temp1;
  printf("\n\nEnter a number to find its nearest palindrome number =   ");
  scanf("%d", &num);
  temp1 = num;

label1:
  printf("\nChecking the palindrome condition for %d.........", num);
  palin(num);
  pali = palin(num);

  if (pali != num)
  {
    printf("\n%d is not a palaindrome ", num);
    num = num + 1;
    goto label1;
  }
  else
  {
    printf("\n %d is a palindrome", num);

    printf("\n\n\nThe nearest palindrome number to %d  is %d", temp1, pali);
  }

  return 0;
}

int palin(int num) // The palindrome checking Function
{
  int rem, sum, temp;

  sum = 0;
  rem = 0;
  temp = num;
  //printf("\nChecking the palindrome condition for %d........." , num );
  while (num > 0)
  {
    rem = num % 10;
    sum = (sum * 10) + rem;
    num = num / 10;
  }

  return sum;
}