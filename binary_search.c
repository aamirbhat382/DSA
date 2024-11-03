#include <stdio.h>

int main()
{
    int arr[5] = {5, 6, 7, 8, 9};
    int key = 7;
    int low = 0, high = 4;
    int flag=1;
    while (low <= high)
    {
        int mid = low+ (high - low) / 2;
        if (arr[mid] == key)
        {
            printf("Element is At Index:%d\n", mid);
            flag=0;
            break;
        }
        else if (arr[mid]<key)
        {
            low = mid+1;
        }
        else
        {
            high =  mid-1;
        }
    }
    if(flag==1){

    printf("Element is not in Arrray\n");
    }
    return 0;
}