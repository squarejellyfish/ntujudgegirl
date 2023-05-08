#include <stdio.h>
#include <stdlib.h>

struct Pokemon_ {
    char name[100];
    int lv;
    int hp;
};

typedef struct Pokemon_ Pokemon;

int main(int argc, char *argv[])
{
    Pokemon pokemons[3];
    for (int i = 0; i < 3; i++) {
        scanf(" %s", pokemons[i].name);
        scanf("%d", &pokemons[i].lv);
        scanf("%d", &pokemons[i].hp);
    } 
    int n;
    scanf("%d", &n);

    int found = 0;
    for (int i = 0; i < 3; i++) {
        if (pokemons[i].lv >= n) {
            Pokemon curr = pokemons[i];
            found = 1;
            printf("Name: %s\n", curr.name);
            printf("Lv: %d\n", curr.lv);
            printf("HP: %d\n\n", curr.hp);
        }
    }
    if (!found) printf("not found\n");

    return EXIT_SUCCESS;
}
