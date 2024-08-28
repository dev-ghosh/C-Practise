#include<stdio.h>
int main(){
    struct pokemon{  //user defined data type
        int hp;
        int speed;
        int attack; 
        char tier; // S,A,B,C,D
    };
    struct pokemon pikachu;
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';

    printf("%d \n",pikachu.attack); 

    struct pokemon charizard;
    charizard.attack=130;
    charizard.hp=50;
    charizard.speed=190;
    charizard.tier='S';

    printf("%d \n",charizard.hp);

     struct pokemon mewtwo;
    mewtwo.attack=180;
    mewtwo.hp=60;
    mewtwo.speed=170;
    mewtwo.tier='G';

    printf("%c",mewtwo.tier);
    return 0;
}