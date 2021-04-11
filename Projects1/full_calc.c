#include <stdio.h>
#include <conio.h>
#include <math.h>

void scientific();
void basic();
float squr(float num);       // Declaration of squareroot function
float croot(float num);      // Declaration of cuberoot function
float sum(float num);        // Declaration of summing function
float fact(float num);       // Declaration of fatorial function
float power(float num);      // Declaration of Power function
float lg(float num);         // Declaration of Log function
float expo(float num);       // Declaration of exponent function
int digi(int num);           // Declaring digit function
int odd_even(int num);       // Declaring odd even function
int prime(int num);          // Declaring prime number function
int palindrome(int num);     // Declaring palindrome function
int armstrong_num(int num);  // Declaring armstrong function
float add(int a, int b);     // Declaration Of addition function
float sub(int a, int b);     //Declaration Of substraction Function
float multi(int a, int b);   //  Declaration Of multipliction Function
float div(float a, float b); // Declaration Of division function

int main()
{
label1:

      printf("1)Basic Calculator\n");
      printf("2) Scientific Calculator \n");
      int choice;
      printf("Enter the choice you want :-   ");
      scanf("%d", &choice);

      if (choice == 1)
      {
            basic();
      }
      else
      {
            scientific();
      }
      int con;
label2:
      printf("Do you want to do any other operation");
      printf("\n1)Yes");
      printf("\n2)No");
      printf("\nChoice:- ");
      scanf("%d", &con);

      if (con == 1)
      {
            goto label1;
      }
      else if (con >= 3)
      {
            goto label2;
      }
      else
      {
            printf("  THANK YOU FOR USING THE CALCULATOR!!!!!!");
      }

      return 0;
}

void basic()
{
      printf("\n\n\n\t\t\t\tWelcome to Dhruv's Calculator");
      printf(" \n\t\t\tPress any key to continue ");
      getch();
      float a, b;
      float c;
      int op;
      printf("\n1)Add");
      printf("\n2)Subtract");
      printf("\n3)Multiplication ");
      printf("\n4)Division ");

      // Scanning Operator
      printf("\nSelect  the operator ( +,-,*,/) = ");
      scanf("%d", &op);

      // Scanning Numbers
      printf("Enter a number = ");
      scanf("%f", &a);

      printf("Enter another  number = ");
      scanf("%f", &b);

      if (op == 1)
      {
            add(a, b); // calling the addition function
      }

      else if (op == 2)
      {
            sub(a, b); // calling the subtraction  function
      }

      else if (op == 3)
      {
            multi(a, b); // calling the Multiplication  function
      }

      else if (op == 4)
      {
            div(a, b); // calling the division  function
      }
}

void scientific()
{
      printf("\n\n\n\t\t\t\tWelcome to Dhruv's Scientific Calculator ");
      printf(" \n\t\t\tPress any key to continue ");
      getch();
      float num, ans;
      int a, digit;
      ;

      printf("\n\n\n\n");
      printf("Enter the number =  ");
      scanf("%f", &num);

label1:
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
            goto label1;
      }
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
// Addion function
float add(int a, int b)
{
      float c;
      c = a + b;

      printf("The addtion of 2 number is %0.0f ", c);

      return c;
}

// Substraction function
float sub(int a, int b)
{
      float c;
      c = a - b;

      printf("The difference  of 2 number is %0.0f ", c);

      return c;
}

// Multiplcation Function
float multi(int a, int b)
{
      float c;
      c = a * b;

      printf("The multiplication  of 2 number is %0.0f ", c);

      return c;
}

// Division Function
float div(float a, float b)
{
      float c;

      c = a / b;

      printf("The division  of 2 number is %2.2f ", c);

      return c;
}
