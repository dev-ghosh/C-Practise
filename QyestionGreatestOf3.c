#include <stdio.h>
int main()
{
    int a;
    printf("enter 1st number :");
    scanf("%d",&a);
     int b;
     printf("enter 2st number :");
    scanf("%d",&b);
     int c;
     printf("enter 3st number :");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greatest",a);
    }
     if(b>a && b>c){
        printf("%d is greatest",b);
    }
     if(c>a && c>b){
        printf("%d is greatest",c);
    }

     return 0;
}