#include <stdio.h>

int main()
{
    int arr[5] = {21,18,15,12,9};
    int i, j ,n=5;

    int swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
            if (swapped == 0)
                break;
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}