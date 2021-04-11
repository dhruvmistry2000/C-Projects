#include <stdio.h>

int main()
{
  char str[1000];
  int i, Ucount, Scount, Pcount, Dcount;
  Ucount = 0;
  Scount = 0;
  Pcount = 0;
  Dcount = 0;

  printf("Enter a string =  ");
  fgets(str, sizeof(str), stdin);

  for (i = 0; i <= sizeof(str); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      Scount = Scount + 1;
    }
  }
  for (i = 0; i <= sizeof(str); i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      Ucount++;
    }
  }
  for (i = 0; i <= sizeof(str); i++)
  {
    if (str[i] >= '1' && str[i] <= '9')
    {
      Dcount++;
    }
  }
  //          for(i = 0 ; i <= sizeof(str) ; i++)
  //          {

  //        }

  printf("\n\n\n\n");
  printf("\nNumber of Digits =  %d", Dcount);
  printf("\nNumber of upper case letter = %d ", Ucount);
  printf("\nNumber of lower  case letter = %d ", Scount);
  //printf("\nNumber of special character  = %d ", Pcount );

  return 0;
}
