#include<stdio.h>
int main(){
    int n;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){   //j used coz i is already used once
            printf("%d ",j);     //here also j
        }
        printf("\n");
        
    }
    return 0;
}