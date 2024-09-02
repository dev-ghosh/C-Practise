#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{ //before int main
        int hp;
        int attack;
        int speed;
        int tier;
        char name[15];
    }pokemon; 
    void fun(pokemon p){
        printf("%d",p.hp);
        return ;
    }
int main(){
    pokemon pikachu;
    pikachu.hp=89;
    fun(pikachu);
    return 0;
}