#include <stdio.h>
int main()
{
    int arr[5] = {9, 11, 2, 3, 4};
    int target = 20;
    int subArr[2] = {0, 0};
    int val = 0;
    for (int i = 0; i < 5; i++)
    {
        if (val == target)
        {
            break;
        }
        else if (val > target)
        {
            subArr[0] = i;
            subArr[1] = 0;
            val = val - arr[i - 2];
            printf("%d\n", i);
        }
        else if (arr[i] > target)
        {
            continue;
        }
        val += arr[i];
        if (subArr[0] != 0)
        {
            subArr[1] = i + 1;
        }
        else
        {

            subArr[0] = i + 1;
        }
    }
    if (val < target)
    {
        printf("Sorry! Can not find");
    }
    else
    {

        printf("%d\t %d\t %d\t", val, subArr[0], subArr[1]);
    }
    return 0;
}
