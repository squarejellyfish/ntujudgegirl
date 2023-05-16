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
    Pokemon mons[2];

    for (int i = 0; i < 2; i++) {
        scanf(" %s", mons[i].name);
        scanf("%d", &mons[i].lv);
        scanf("%d", &mons[i].hp);
    }

    for (int i = 0; i < 2; i++) {
        printf("Name: %s\n", mons[i].name);
        printf("Lv: %d\n", mons[i].lv);
        printf("HP: %d\n", mons[i].hp);
        puts("");
    }

    return EXIT_SUCCESS;
}
