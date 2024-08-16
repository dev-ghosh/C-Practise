#include<stdio.h>
int main(){ 
    // basics
    // int arr[5]={2,4,6,8,1};
    // arr[4]=100; //now becomes 2,4,6,8,100
    // arr[1]=1;   //becomes 2,1,6,8,100
    // printf("%d",arr[2]);

    //printing output
    // int arr[5]={2,4,6,8,1};
    // for(int i=0;i<=4;i++){     // or in short for(int i=0;i<=4;i++) printf("%d",arr[i]);
    //     printf("%d",arr[i]);
    // }

    //inputing a no
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("enter element no %d : \n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        printf("%d",arr[i]);
    }
    return 0;
}