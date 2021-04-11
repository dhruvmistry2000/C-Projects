#include<stdio.h>
#include<conio.h>
#include<math.h>



float arm(float num );

int main()
{	
  		printf("\nAn Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself.");
		printf("\nFor example :-   371");
		printf("\n 3*3*3 + 7*7*7 + 1*1*1 = 371");
		printf("\nPress any Key to continue .....");
		getch();
	



	printf("\n\n\n\n\n");
          int num , ans , temp1 ;

          printf("Enter a number  :-  " );
          scanf("%d" , &num );
          temp1 = num ;

          label1:
	    printf("\nChecking armstrong condition for %d......" , num);
          arm(num);
          ans = arm(num);

          if(ans != num  )
          {         
		    printf("\n%d is not a armstrong number " , num ) ;
                    num++;
                    goto label1;
          }

	    printf("\n\n\n\n\nThe nearest armstrong number to %d is %d " , temp1 , num );

          



return 0 ;

}

float arm(float num)
{  
           int a , rem , sum  ;

          a = num;
          rem = 0 ;
          sum  = 0 ;

    while (a != 0) 
    {

        rem = a % 10;

       sum  = pow(rem , 3 ) + sum ;
       
      a /= 10;
    }

    return sum  ;
}