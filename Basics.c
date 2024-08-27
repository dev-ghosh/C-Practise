#include<stdio.h>
int main(){
    // char arr[5]={'a','s','d','f','h'};
    // printf("%c",arr[2]);
    char arr[]="hi my name is dev\0";
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}