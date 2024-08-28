#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        int noofpages;
        char name[50];
        float price;
    }a,b,c;

    a.price=477.6;
    a.noofpages=90;
    strcpy(a.name,"dev ghosh");

    printf("%d \n",a.noofpages);
    printf("%s \n",a.name);
    printf("%f",a.price);
    return 0;
}