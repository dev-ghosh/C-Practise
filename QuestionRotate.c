#include<stdio.h>
int main(){
int n;
printf("enter rows/columns :");
scanf("%d",&n);
printf("enter no of elements\n");
int arr[n][n];
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
      scanf("%d",&arr[i][j]);
  }
} 
//input
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){    //major change j<=i
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d ",arr[i][j]);   
}
}
printf("\n");
//rotate
for(int i=0;i<n;i++){
    int j=0;
    int k=n-1;
    while(j<k){
        //swap arr[i][j] and arr[i][k]
        int temp=arr[i][j];
        arr[i][j]=arr[i][k];
        arr[i][k]=temp;
        j++;
        k--;
    }
}
printf("\n");
//output
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d ",arr[i][j]);
        
}
printf("\n");
}
return 0;
}