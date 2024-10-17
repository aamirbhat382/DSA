#include <stdio.h>

int main()
{

    int i, j;
    int A[2][2];
    int B[2][2];
    int C[2][2];

    printf("Enter The Elements Of Array A\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter The Element for Array A\n");
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter The Elements Of Array B\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter The Element for Array B\n");
            scanf("%d", &B[i][j]);
        }
    }

    printf("Array A\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", A[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    
    printf("Array B\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", B[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    printf("SUM OF ARRAY A & B IS:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d", C[i][j]);
            printf(" ");
        }
        printf("\n");
    }
   
    return 0;
}