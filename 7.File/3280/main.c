#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pokemon_
{
    int id;
    char name[30];
};

typedef struct Pokemon_ Pokemon;

int main()
{
    int desires, c = 0, s, e;
    scanf("%d", &desires);
    Pokemon pokemons[desires];

    char name[20];
    while (scanf(" %[^\n]", name) != EOF)
    {
        if (name[strlen(name) - 4] == '.')
        {
            FILE *f = fopen(name, "r");
            int id;
            char pokemon[30];
            while (fscanf(f, "%d %s", &id, pokemon) != EOF)
            {
                Pokemon curr;
                strcpy(curr.name, pokemon);
                curr.id = id;

                pokemons[c] = curr;
                // printf("c: %d\n", c);
                c++;
            }
            fclose(f);
        }
        else
        {
            char *p = strtok(name, " ");
            s = atoi(p);
            p = strtok(NULL, " ");
            e = atoi(p);
        }
    }

    for (int i = 0; i < desires - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < desires; j++)
        {
            if (pokemons[j].id < pokemons[min].id)
                min = j;
        }
        Pokemon temp = pokemons[i];
        pokemons[i] = pokemons[min];
        pokemons[min] = temp;
    }

    int found = 0;
    for (int i = 0; i < desires; i++)
    {
        Pokemon curr = pokemons[i];
        if (curr.id >= s && curr.id <= e)
        {
            printf("%d %s\n", curr.id, curr.name);
            found = 1;
        }
    }

    if (!found)
        printf("None\n");

    return 0;
}
