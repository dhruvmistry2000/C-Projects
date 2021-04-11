#include <stdio.h>
#include <math.h>
#include <conio.h>

float squr(float num);      // Declaration of squareroot function
float croot(float num);     // Declaration of cuberoot function
float sum(float num);       // Declaration of summing function
float fact(float num);      // Declaration of fatorial function
float power(float num);     // Declaration of Power function
float lg(float num);        // Declaration of Log function
float expo(float num);      // Declaration of exponent function
int digi(int num);          // Declaring digit function
int odd_even(int num);      // Declaring odd even function
int prime(int num);         // Declaring prime number function
int palindrome(int num);    // Declaring palindrome function
int armstrong_num(int num); // Declaring armstrong function

int main()
{
  printf("\n\n\n\t\t\t\tWelcome to Dhruv's Scientific Calculator press any key to continue ");
  getch();
  float num, ans;
  int a, digit;
  ;

label1:
  printf("\n\n\n\n");
  printf("Enter the number =  ");
  scanf("%f", &num);

label2:
  printf("\n\n\nThe following operations can be performed with the number :-  ");
  printf("\n1) Squareroot");
  printf("\n2) Cuberoot ");
  printf("\n3) Sum of numbers till %0.0f", num);
  printf("\n4)Factorial of %0.0f", num);
  printf("\n5)Power raise to %0.0f", num);
  printf("\n6)Natural log of %0.0f", num);
  printf("\n7) e^ %0.0f", num);
  printf("\n8)To know nature of number ");

  printf("\n\n\nEnter the operation you want to perform (Enter the number )  =  ");
  scanf("%d", &a);

  printf("\n\n\n");

  if (a == 1)
  {
    squr(num);
    ans = squr(num);
    printf("The square root of %0.0f is %0.2f", num, ans);
  }
  else if (a == 2)
  {
    croot(num);
    ans = croot(num);
    printf("The cube root of %0.0f id %0.2f", num, ans);
  }

  else if (a == 3)
  {
    sum(num);
    ans = sum(num);
    printf("The sum of numbers till %0.0f is %0.0f", num, ans);
  }

  else if (a == 4)
  {
    fact(num);
    ans = fact(num);
    printf("The factorial of %0.0f is %0.0f", num, ans);
  }

  else if (a == 5)
  {
    power(num);
  }

  else if (a == 6)
  {
    lg(num);
    ans = lg(num);
    printf("The natural log of %0.0f is %0.2f", num, ans);
  }

  else if (a == 7)
  {
    expo(num);
    ans = expo(num);
    printf("e^%0.0f = %0.2f", num, ans);
  }

  else if (a == 8)
  {
    printf("The following are the properties of the entered number :-  ");

    digi(num); // Calling digit function
    digit = digi(num);
    printf("\nIt is a %d digit number ", digit);

    odd_even(num); // calling odd even function

    prime(num); // calling prime nmber function

    palindrome(num); // calling palindrom function

    armstrong_num(num); // calling armstrong function
  }

  else
  {
    printf("Enter correct option number ");
  }

  int var, con;

  printf("\n\n\n\n");

  printf("\n\nDo you want to continue((y for yes and n for no) =  ");
  printf("\n1) Yes");
  printf("\n2)No");
label3:
  printf("\n\nEnter the option you want = ");
  scanf("%d", &con);

  if (con == 1)
  {
    printf("\n\nDo you want to continue with\n");
    printf("\n1) Same variable");
    printf("\n2) Different Variable ");
  label4:
    printf("\n\nEnter the option you want = ");
    scanf("%d", &var);

    if (var == 1)
    {
      goto label2;
    }
    else if (var == 2)
    {
      goto label1;
    }
    else
    {
      goto label4;
      ;
    }
  }

  else if (con == 2)
  {
    printf("\n\n\n\t\t\t\t THANK YOU FOR USING THE CALCULATOR\n\n\n");
  }

  else
  {
    goto label3;
  }

  return 0;
}

float squr(float num) // Square function
{
  float Sq;
  Sq = sqrt(num);

  return Sq;
}

float croot(float num) // Cuberoot function
{
  float Cb;
  Cb = cbrt(num);

  return Cb;
}

float sum(float num) // Summing function
{
  int i, sum;
  sum = 0;

  for (i = 0; i <= num; i++)
  {
    sum = sum + i;
  }

  return sum;
}

float fact(float num) // Factorial function
{
  float mul;
  int i;
  mul = 1;

  for (i = 0; i <= num; i++)
  {
    mul = mul * i;
  }

  return mul;
}

float power(float num) //power function
{
  float raise, ans;
  printf("The the power you want =  ");
  scanf("%f", &raise);

  ans = pow(num, raise);

  printf("%0.0f ^ %0.2f is %0.2f", num, raise, ans);

  return ans;
}

float lg(float num) //log function
{
  float ans;
  ans = log(num);

  return ans;
}

float expo(float num) // exponent function

{
  float ex;
  ex = exp(num);

  return ex;
}

int digi(int num) //Function for finding numbr of digits
{
  int digit, count;
  count = 0;

  while (num != 0)
  {
    num = num / 10;
    ++count;
  }

  return count;
}

int odd_even(int num) // Function for checking the number is either odd or even
{
  int ans;

  if (num % 2 == 0)
  {
    printf("\nThe number is Even ");
  }
  else
  {
    printf("\nThe number is odd");
  }

  return 0;
}

int prime(int num) // function for finding the number is prime or not
{

  int i, b = 0;

  for (i = 2; i <= num / 2; ++i)
  {

    if ((num % i) == 0)
    {
      b == 1;
      break;
    }
  }

  if (b == 0)
  {

    printf("\nA prime number ");
  }

  else
  {
    printf("\nNot a prime number ");
  }

  return num;
}

int palindrome(int num) //function for checking plaindrom condition
{
  int r, sum, temp;
  sum = 0;
  r = 0;
  temp = num;

  while (num > 0)
  {
    r = num % 10;
    sum = (sum * 10) + r;
    num = num / 10;
  }

  if (temp == sum)
  {
    printf("\nPalindrome number ");
  }
  else if (num != sum)
  {
    printf("\nNot Palinfrome number");
  }

  return 0;
}

int armstrong_num(int num) //function for checking  armstrong number condition
{
  int a, rem, b;
  a = num;

  while (a != 0)
  {

    rem = a % 10;

    b = pow(rem, 3) + b;

    a /= 10;
  }

  if (b == num)
    printf("\n%d is an Armstrong number.", num);
  else
    printf("\n%d is not an Armstrong number.", num);

  return 0;
}