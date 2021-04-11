#include <stdio.h>
#include <string.h>
char to_upper(char str[20]);
char to_lower(char str[20]);

int main()
{
  char str[20], ans[20];
  int a;

  printf("Enter a string =   ");
  fgets(str, 20, stdin);

  printf("The string is =  ");
  puts(str);

  printf("1) All  letters in lower \n");
  printf("2) All letters in  upper\n");

  printf("\nSelect the option you want from above \n");
  scanf("%d", &a);

  if (a == 1)
  {
    to_lower(str[20]);
    //ans[20] = to_lower(str[20]);

    //  printf("The string in lower case is \n ");
    //puts(ans);
  }
  else if (a == 2)
  {
    to_upper(str[20]);
    // ans[20] = to_upper(str[20]);

    // printf("The string in upper case is \n ");
    //puts(ans);
  }
  else
  {
    printf("Enter either 1 or 2 ");
  }

  return 0;
}

char to_upper(char str[20])
{
  char up[20];
  int i, len;
  len = strlen(str[20]);
  for (i = 0; i <= len; i++)
  {
    if (str[i] > 'a' && str[i] < 'z')
    {
      up[i] = str[i] - 32;
    }
    else
    {
      up[i] = str[i];
    }
  }

  printf("The string is =  \n");
  puts(up);

  return up[20];
}

char to_lower(char str[20])
{
  char low[20];
  int i, len;
  len = strlen(str[20]);
  for (i = 0; i <= len; i++)
  {
    if (str[i] > 'A' && str[i] < 'Z')
    {
      low[i] = str[i] + 32;
    }
    else
    {
      low[i] = str[i];
    }
  }
  printf("The string is =  \n");
  puts(low);

  return low[20];
}
