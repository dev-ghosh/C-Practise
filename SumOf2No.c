#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a;
    printf("enter first no :");
    scanf("%d",&a);
    int b;
    printf("enter second no :");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);

    return 0;
}