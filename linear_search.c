#include<stdio.h>

int main(){
    int arr[5]= {5,4,3,2,1};
    int key = 3;
    int flag=0;

    for(int i=0; i<5;i++){
        if(arr[i]==key){
            printf("Element is At Index: %d", i);
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element is Not in the Array");
    }
}