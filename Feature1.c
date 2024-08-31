//copying one struc into another 
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        int tier;
        char name[15];
    }pokemon;
    
    pokemon a,b,c;
    a.attack=100;
    a.hp=90;
    a.tier='s';
    a.speed=90;
    strcpy(a.name,"blaster");

    // b.attack=a.attack;
    // b.hp=a.hp;
    // b.speed=a.speed;
    // b.tier=a.tier;
    //instead of writing so many lines we cam type

    b=a; //b is a now
    b.attack=200;
    printf("%d",a.attack);
    //no change in a will be there it is just a copy
    return 0;
}