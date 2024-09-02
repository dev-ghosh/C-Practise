#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        int tier;
        char name[15];
    }pokemon;


    typedef struct legendarypokemon{
        pokemon normal; //normal is all the above 5
        char ability[60];
    } legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp=150;

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialattack=800;
    strcpy(arceus.legend.ability,"turns anyone to stine");
    arceus.legend.normal.attack=700;
    return 0;
}