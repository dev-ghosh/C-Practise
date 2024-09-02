#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef union pokemon{ //only one member can be used in union at a timr 
        int hp;
        int attack;
        int speed;
        int tier;
        char name[15];
    }pokemon; 

int main(){
    pokemon pikachu;
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"pikachu");
    
    printf("%d\n",&pikachu.hp);
    printf("%d\n",&pikachu.attack);
    printf("%d\n",&pikachu.speed);
    printf("%c\n",&pikachu.tier);
    printf("%s\n",&pikachu.name);//the thing at the last will only be valid

    return 0;
}