#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return;
}
int main (){
    int n;
    printf("enter a no:");
    scanf("%d",&n);
    int r;
    printf("enter a no:");
    scanf("%d",&r);
    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);

    int ncr=nfact/(rfact*nrfact);
        return 0;
}