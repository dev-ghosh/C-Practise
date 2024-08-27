#include<stdio.h>
#include<string.h>
int main(){
     char s1[]="physics wallah";
    // char* s2=s1;
    // s1[0]='M';
    // printf("%s",s2); //this is a shallow copy
    //now deep copy
    char s2[]="physics wallah"; //this is not same
    s2[0]='M';
    printf("%s\n",s1);
    printf("%s",s2);
    return 0;
}