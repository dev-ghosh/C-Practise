#include<stdio.h>
int main(){
int arr[5][5];
for(int i=0;i<=4;i++){
    for(int j=0;j<=4;j++){
        scanf("%d",&arr[i][j]);
    }
}
printf("\n");
for(int i=0;i<=4;i++){
    for(int j=0;j<=4;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
    return 0;
}