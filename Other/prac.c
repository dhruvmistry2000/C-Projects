#include "stdio.h"

int main()
{
          int arr[100], n, odd[100], even[100], i = 0, om = 0, em = 0, oc = 0, ec = 0, j;

          printf("Enter the size of array = ");
          scanf("%d", &n);

          for (i = 0; i < n; i++)

          {
                    printf("Enter array element %d =  ", (i + 1));
                    scanf("%d ", &arr[i]);
          }
          j = 0;
          for (i = 0; i < n; i++)
          {
                    if (arr[i] % 2 == 0)
                    {
                              even[j] = arr[i];
                              ec++;
                              j++;
                    }
          }
          j = 0;
          for (i = 0; i < n; i++)
          {
                    if (arr[i] % 2 != 0)
                    {
                              odd[j] = arr[i];
                              oc++;
                              j++;
                    }
          }

          printf("\nEVEN numbers are ");
          for (i = 0; i < ec; i++)
          {
                    printf("%d ", even[i]);
                    if (em < even[i])
                    {
                              em = even[i];
                    }
          }

          printf("\nODD numbers are ");
          for (i = 0; i < oc; i++)
          {
                    printf("%d ", odd[i]);
                    if (om < odd[i])
                    {
                              om = odd[i];
                    }
          }
          printf("\nThe maximum number in Even list is %d", em);
          printf("\nThe maximum number in odd list is %d", om);

          return 0;
}