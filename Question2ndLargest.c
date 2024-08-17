// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int arr[7]={2,4,7,3,2,1,0};
//     int max=INT_MIN;
//     int smax=INT_MIN;   //smax is second largest
//     for(int i=0;i<=6;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     } 
//     //AFTER THIS MAX IS 7 and arr[i] is 8
//      for(int i=0;i<=6;i++){
//         if( arr[i]!=max && smax<arr[i]){
//             smax=arr[i];
//         }
//     }
//    printf("%d",smax);
//    return 0;
//  }

//finding smax in simngle pass
#include<stdio.h>
#include<limits.h>
int main(){
int arr[7]={1,2,3,4,5,6,7};
int max=INT_MIN;
int smax=INT_MIN;
for(int i=0;i<=6;i++){
    if(max<arr[i]){
        smax=max;  //smax is now previous max
        max=arr[i];  //max is now a new max
    }
}
    printf("%d",smax);
    return 0;
}