#include <stdio.h>
float  add(int a  , int  b );// Declaration Of addition function
float  sub (int a  , int  b );//Declaration Of substraction Function
float multi (int a  , int  b );//  Declaration Of multipliction Function
float  div (float  a  , float   b ); // Declaration Of division function


int main()
{

      float  a , b  ;
      float c ;
      char op ;
      
      // Scanning Operator 
             printf("Enter the operator ( +,-,*,/) = ");
            op = getchar() ;
      
      // Scanning Numbers 
              printf("Enter a number = ");
            scanf("%f" , &a);

             printf("Enter another  number = ");
             scanf("%f" , &b);


      if(op == '+')
            {
                   add(a , b ) ;                 // calling the addition function 
            }
            
      else if(op == '-')
            {
                  sub(a , b );                 // calling the subtraction  function 
            }

      else if(op == '*')
            {
                   multi( a  , b ) ;            // calling the Multiplication  function 
            }

            else if(op == '/')
            {
                  div(a , b) ;                    // calling the division  function 
            }

       return  c  ;
}

// Addion function 
float  add(int a  , int  b )
{ 
      float c ;
      c = a + b ;

      printf("The addtion of 2 number is %0.0f " , c );

      return c ;
}

// Substraction function 
float  sub (int a  , int  b )
{
       float c ;
      c = a - b ;

      printf("The difference  of 2 number is %0.0f " , c );

      return c ;
}

// Multiplcation Function 
float multi (int a  , int  b )
{ 
      float c ;
      c = a  *  b ;

      printf("The multiplication  of 2 number is %0.0f " , c );

      return c ;
}

 // Division Function 
float  div (float  a  , float   b )
{ 
      float c ;

      c = a / b ;

      printf("The division  of 2 number is %2.2f " , c );

      return c ;
}
