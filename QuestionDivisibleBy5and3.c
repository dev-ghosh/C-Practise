#include<stdio.h>
int main(){
    int x;
    printf("enter a number ;");
    scanf("%d",&x);
    if(x%5==0 && x%3==0){
        printf("no is divisible by both 5 and 3");
    }
    else{
        printf("not is not divisible by 5 and 3");
    }
    return 0;
}
