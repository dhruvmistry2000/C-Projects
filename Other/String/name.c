#include<string.h>
#include <stdio.h>


int main()
{char name[20], ch , student[20] ;
int i = 0 , j , n  , len , k  ;


    printf("Enter your name :- ");
    while(ch != '\n')
    {
        ch = getchar();
        name[i] = ch ;
        if ( ch != '\n')
        {
         i++ ;
        }
        if (ch != ' ')
        {
         k++ ;
        }

    }
    name[i] = '\0';
    len = strlen(name);
    printf("name : %s \n" , name);
    printf("The lenght of name is =  %d" ,i );
    printf("\n%d" , k );
    return 0;
}
