//in terms of rows and columns
#include<stdio.h>
int main(){
int n;
printf("enter no fo rows :");     //no of rows=no of lines
scanf("%d",&n);
int m;
printf("enter no of columns :");  //no of columns=stars in each line
scanf("%d",&m);
for(int i=1;i<=n;i++){
    for(int i=1;i<=m;i++){
        printf("*");
    }
    printf("\n");               //used to print enter after each line
}
    return 0;
}