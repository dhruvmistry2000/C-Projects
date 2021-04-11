#include<stdio.h>
#include<math.h>

int digi(int num );// Declaring digit function 
int odd_even(int num );// Declaring odd even function 
int prime (int num  );// Declaring prime number function 
int palindrome(int num);// Declaring palindrome function 
int armstrong_num(int num);// Declaring armstrong function 


int main()
{
          int num, digit , primes   ;
          
          printf("Enter a number =    ");
          scanf("%d", &num);

          printf("The following are the properties of the entered number :-  ");
          
          digi(num);// Calling digit function 
          digit = digi(num );
          printf("\nIt is a %d digit number " , digit );

          odd_even(num );// calling odd even function

          prime(num);// calling prime nmber function 

          palindrome(num);// calling palindrom function 

          armstrong_num(num);// calling armstrong function 



          return 0 ;
}

int digi(int num )//Function for finding numbr of digits 
{
          int digit , count ;
          count = 0 ;

          while(num != 0)
          {
                    num = num / 10 ;
                    ++count ;

          }
 

          return  count ;

}

int odd_even(int num )// Function for checking the number is either odd or even 
{
          int ans ;

          if(num%2 == 0)
          {
                    printf("\nThe number is Even ");

          }
          else
          {
                    printf("\nThe number is odd");

          }

          return 0 ;
}

int prime (int num  ) // function for finding the number is prime or not
{

    int i  , b = 0 ;

    for (i = 2 ; i <= num /2 ; ++i)
{

        if ((num % i) == 0)
        {
            b == 1;
            break;
        }

}


            if(b == 0)
{

        printf("\nA prime number ");
}

        else
{
            printf("\nNot a prime number " );
}

    return num   ;
}

int palindrome(int num)//function for checking plaindrom condition 
{  
           int r , sum , temp    ;
           sum = 0 ;
           r = 0 ;
           temp = num ;

          while(num > 0 )
   {
          r = num  % 10;
          sum  = ( sum * 10 ) + r;
          num  = num  / 10;
   }


if (temp  == sum )
{
printf("\nPalindrome number ");
}
else if (num != sum )
{
printf("\nNot Palinfrome number");
}

return 0 ;

}

int armstrong_num(int num)//function for checking  armstrong number condition 
{   int a , rem , b ;
           a = num;

    while (a != 0) {

        rem = a % 10;

       b = pow(rem , 3 ) + b ;

      a /= 10;
    }

    if (b == num)
        printf("\n%d is an Armstrong number.", num);
    else
        printf("\n%d is not an Armstrong number.", num);

    return 0;

}