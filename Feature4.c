#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{ 
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
    //int* x=address of integer value
    pokemon* x=&pikachu;
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",&pikachu.name);

    printf("%p",x);

    return 0;
}