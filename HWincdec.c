void increasing (int n){
    if(n==0) return;
    printf("%d\n",n);
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