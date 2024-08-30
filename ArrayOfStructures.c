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

    pokemon arr[3]; //arr[0],arr[1],arr[2] 3 pokemon total
    
    strcpy(arr[0].name,"charizard");
    arr[0].attack=100;
    arr[0].hp=70;
    arr[0].tier='s';

    strcpy(arr[1].name,"pikachu");
    arr[1].attack=150;
    arr[1].hp=60;
    arr[1].tier='h';

    strcpy(arr[2].name,"mewtwo");
    arr[2].attack=180;
    arr[2].hp=60;
    arr[2].tier='k';

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("attack : %d\n",arr[i].attack);
        printf("hp : %d\n",arr[i].hp);
        printf("tier : %c\n",arr[i].tier);
    }
    return 0;
}