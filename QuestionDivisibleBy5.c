#include<stdio.h>
 int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%5==0){ 
        printf("DIVISIBLE BY 5");
    }
    else{
        printf("NOT DIVISIBLE BY 5");
    }
    return 0;
    }