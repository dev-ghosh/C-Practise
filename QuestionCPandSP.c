#include<stdio.h>
int main(){
    int cp;
    printf("cost price:");
    scanf("%d",&cp);
    int sp;
    printf("selling price:");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    if(cp>sp){
        printf("loss");
    }
    if(cp=sp){
        printf("no profit,no loss");
    }
    return 0;
    }
    
