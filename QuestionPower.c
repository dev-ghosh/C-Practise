//method1 through for loop
// #include<stdio.h>
// int power(int a,int b){
//     int x=1;
//     for(int i=1;i<=b;i++){
//         x=x*a;
//     }
//     return x;
// }
// int main(){
//     int a;
//     printf("enter base :");
//     scanf("%d",&a);
//     int b;
//     printf("enter power :");
//     scanf("%d",&b);
//     int p= power(a,b);
//     printf("%d raised to power %d is %d",a,b,p);
//     return 0;
// }
//method 2 through recursion
#include<stdio.h>
int power(int a,int b){
   if(b==0) return 1;
   int recAns=a*power(a,b-1);
   return recAns;
}
int main(){
    int a;
    printf("enter base :");
    scanf("%d",&a);
    int b;
    printf("enter power :");
    scanf("%d",&b);
    int p= power(a,b);
    printf("%d raised to power %d is %d",a,b,p);
    return 0;
}