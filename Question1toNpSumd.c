// #include<stdio.h>            //method1
// void sum(int n,int s){
//     if(n==0){
//         printf("%d",s);
//         return ;
//     }
//     sum(n-1,s+n);
//     return ;
// }
// int main(){
//     int n;
//     printf("enter a no :");
//     scanf("%d",&n);
//     sum(n,0);

//     return 0;
// }
#include<stdio.h>
int sum(int n){
    if(n==1  || n==0) return 1;   //this is base case
    int recAns =n+sum(n-1);
    return recAns;
}
int main(){
    int n;
    printf("enter a n no :");
    scanf("%d",&n);
    int fact = sum(n);
    printf("%d",fact);

    return 0;
}