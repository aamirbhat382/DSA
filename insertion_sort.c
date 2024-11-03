#include <stdio.h>

int main()
{
    int n;
    int arr[5] = {12, 3, 6 , 5, 1};
    n = 5;
    for (int i = 1; i < n; i++)
    {
        printf("FOR LOOP START\n");
        int current = arr[i];   // STEP's: 3, 6, 5, 1
        int j = i - 1;     // STEP's: 0, 1, 2, 3, 4
        printf("CURRENT = %d AND J = %d\n", current, j);
        while (arr[j] > current && j >= 0) 
        {
            printf("arr[j+1]= %d & arr[j] = %d\n", arr[j+1], arr[j]);
            arr[j + 1] = arr[j]; // STEP's: (1) 3 = 12 (2) 6 = 12 (3) 5 = 12 (4) 12 = 6 (5) 1 = 12 (6) 12 = 6 (7) 6 = 5  (8) 5=3
             printf("arr[j+1]= %d & arr[j] = %d\n", arr[j+1], arr[j]);

            j = j - 1; // 1 => -1, 2 => (0,-1), 3 => (1,0,-1), 4 => (2,1,0,-1)
            printf("J = %d\n", j);
        }
        printf("WHILE LOOP ENDED\n");
        arr[j+1] = current; // (1) 12 = 3 (2) 12  = 6 (3) 6=5 (4) 3 =1 
        printf("arr[j+1] =%d & current = %d\n", arr[j+1], current);
    }
    

    // for(int i=0; i<n; i++){
    //     printf("%d", arr[i]);
    //     printf(" ");
    // }
    return 0;
}

