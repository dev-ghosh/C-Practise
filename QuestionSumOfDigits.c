#include<stdio.h>
int main(){
int n;
printf("enter a no :");
scanf("%d",&n);
int sum=0;
int lastdigit=0;
while(n!=0){
    lastdigit=n%10;
    sum=sum+lastdigit;
}
printf("the sum of the digits are %d",sum);
return 0;
}
      