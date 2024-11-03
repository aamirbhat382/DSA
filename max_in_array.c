#include <stdio.h>
#include <conio.h>
int main()
{
  int arr[10] = {200, 2, 6, 8, 1, 0, 99, 5, 7, 10};

  // SORT ARRAY
  int n = 10;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {

      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%d \n", arr[i]);
  }
  int max = 0;
  for (int i = 0; i < 10; i++)
  {

    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  printf("%s", "Maxmum Number in An Array ");
  printf("%d", max);

  return 0;
}
