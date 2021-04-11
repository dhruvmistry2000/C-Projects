#include<math.h>
#include<stdio.h>
#include<stdlib.h>
float a_mean;
float g_mean;
float h_mean;
float st_dev;
 float  sum1=0 , sum2=1 , sum3=1 ;
float data[100];
int n ; 
 
int  i;
int  main()
{

    printf("Enter the number of values you want =  ");
    scanf("%d" , &n );


    printf("Enter  integer \n");
    for(i=1 ; i<= n ; i++)
    {
        scanf("%f",&data[i]);


        sum1 = sum1+ data[i] ;
  
       a_mean=( sum1) /5 ;

        sum2 =  sum2 * data[i] ;
  
      g_mean=pow(sum2,1/5);
   
        sum3=sum3 + (1/data[i]);
    
       h_mean=5/sum3;
    }
    printf("Arithmetic mean %0.2f\n",a_mean);
    printf("Geometric mean %0.2f\n",g_mean);
    printf("Harmonic mean %0.2f\n",h_mean);

    return 0 ;
   
}