#include<stdio.h>
int main(){
    int n;
printf("enter a no:");
scanf("%d",&n);
int nsp=n/2;
int nst=1;
int ml=n/2+1; //ml is middle line
for(int i=1;i<=n;i++){
    for(int j=1;j<=nsp;j++){  //spaces
    printf("   ");
    }
    for(int k=1;k<=nst;k++){  //stars
    printf(" * ");
    }
    if(i<ml){  //upper half:star inc space dec
        nsp--;
        nst+=2;
    } 
    else{     //lower half:space inc star dec
        nsp++;
        nst-=2;
    }
    //a+=5 means a=a+5
    //a-=4 means a=a-4
    //a*=5 means a=a/5
    printf("\n");
}
    return 0;
}