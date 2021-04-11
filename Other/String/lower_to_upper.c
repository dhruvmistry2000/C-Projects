#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    char str[20] , low[20] , hig[20] ;
    int i ;

    printf("Enter a string :-  ");
    fgets(str , 20 , stdin );
    printf("The string is  ");
    puts(str);
    for (i = 0 ; i < str[i] ; i++)
    {
        if(str[i] > 'a' && str[i] < 'z' )
        {
                hig[i] = str[i] - 32 ;

        }
        else

        {
            hig[i]  = str[i];
        }
        if(str[i] > 'A' && str[i] < 'Z')
        {
            low[i] = str[i] + 32 ;
        }
        else
        {
            low[i] = str[i] ;

        }



    }
    printf("The original string is ");
    puts(str);
    printf("The  string in lower case  is ");
    puts(low);
    printf("The  string in upper case is  ");
    puts(hig);


    return 0 ;





}
