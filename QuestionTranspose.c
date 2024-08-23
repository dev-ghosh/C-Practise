#include<stdio.h>
int main(){
    int r;
    printf("rows : ");
    scanf("%d",&r);
    int c;
    printf("columns : ");
    scanf("%d",&c);
int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       scanf("%d",&arr[i][j]);
    }
}
// 1 2 3
// 4 5 6
// needed 1 4
//        2 5
//        3 6
printf("\n");
for(int i=0;i<c;i++){    //c an r interchanged
    for(int j=0;j<r;j++){
        printf("%d ",arr[j][i]);  //i and j interchanged
    }
    printf("\n");
}
    return 0;
}