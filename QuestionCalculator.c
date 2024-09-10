#include<stdio.h>
int main(){
    int a; //a and b operand
    scanf("%d",&a);
    char ch; //+,-,*,/ (operator)
    scanf("%c",&ch);
    int b;
    scanf("%d",&b);
    // by if else 
    // if(ch=='+')
    // printf("%d",a+b);
    // if(ch=='-')
    // printf("%d",a-b);
    // if(ch=='*')
    // printf("%d",a*b);
    // if(ch=='/')
    // printf("%f",(float)a/b); //for decimal so typecast

    //by switch
    switch(ch){
        case'+':
        printf("%d",a+b);
        break;
        case'-':
        printf("%d",a-b);
        break;
        case'*':
        printf("%d",a*b);
        break;
        case'/':
        printf("%f",(float)a/b);
        break;
        default:
        printf("invalid");
    }
    return 0;
}