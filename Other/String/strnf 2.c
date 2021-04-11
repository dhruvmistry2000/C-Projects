#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main()
{
   char name[30] , new[30];
   int len , c ;
   printf("Enter name :-  ");
   fgets(name , 30 , stdin);
   printf("Name is ");
   puts(name);

   len = strlen(name);
   printf("\nThe length of string is  %d ", len );
   strcpy(new , name );
  printf("\nThe copied string is "  );
  puts(new) ;
  c =  strlen(new);
  if (c == len )
  {
      printf("Both the string are same ");
  }

  else{
    printf("both the strings are not same ");
  }


  return 0 ;



}
