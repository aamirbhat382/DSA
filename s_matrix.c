#include <stdio.h>

int main()
{

    int i, j; 
    int count = 0, flag = 1;
    int arr[2][2];
printf("Enter The Elements for Spherical Matrix\n");
    while (flag == 1)
    {
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("Enter Elements\n");
                scanf("%d",&arr[i][j]);
                if(arr[i][j]==0){
                    count++;
                }
            }
        }
            if(count>2){
                flag=0;
                break;
            }else{
            printf("Please Enter All Values Again\n");
            }
        
    }


printf("The Spherical Matrix is:\n");
     for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
               printf("%d", arr[i][j]);
               printf(" ");
               
                }
                printf("\n");
            }
        
    return 0;
}
