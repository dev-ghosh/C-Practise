// #include<stdio.h>      //method1 by taking x as new variable
// void increasing(int x,int n){
//     if(x>n) return;
//     printf("%d\n",x);
//     increasing(x+1,n);
//     return;
// }
// int main(){
//     int n;
//     printf("enter a non :");
//     scanf("%d",&n);
//     increasing(1,n);

//     return 0;
// }

#include<stdio.h>
void increasing (int n){
    if(n==0) return; //base case
    increasing(n-1);  //call
    printf("%d\n",n);  //code
    return;
}
int main(){
    int n;
    printf("enter a no :");
    scanf("%d",&n);
    increasing(n);
    return 0;
}