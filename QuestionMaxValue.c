// #include<stdio.h>
// int main(){
//     int arr[7]={2,4,7,3,2,1,0};
//     int max=arr[0]; //small no stored
//     for(int i=0;i<=6;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }


#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={2,4,7,3,2,1,0};
    int max=INT_MIN; //small no stored
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}