#include <stdio.h>
#include <stdlib.h>

struct Area_
{
    char name;
    int cases[12];
};

typedef struct Area_ Area;

int main()
{
    char name[30];
    scanf("%s", name);

    FILE *f = fopen(name, "r");
    fscanf(f, "%s", name);
    char region;
    int year, month, c = 0;
    Area areas[100];
    while (fscanf(f, " %c,%d,%d", &region, &year, &month) != EOF)
    {
        int found = 0;
        for (int i = 0; i < c; i++)
        {
            if (areas[i].name == region)
            {
                areas[i].cases[month - 1]++;
                found = 1;
            }
        }

        if (!found)
        {
            areas[c].name = region;
            for (int i = 0; i < 12; i++)
            {
                areas[c].cases[i] = 0;
            }
            areas[c].cases[month - 1]++;
            c++;
        }
    }
    fclose(f);

    printf("Area Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    for (int i = 0; i < c - 1; i++) {
        int min = i;
        for (int j = i + 1; j < c; j++) {
            if (areas[j].name < areas[min].name) {
                min = j;
            }        
        }
        Area temp = areas[i];
        areas[i] = areas[min];
        areas[min] = temp;
    }

    for (int i = 0; i < c; i++)
    {
        Area curr = areas[i];
        printf("%4c ", curr.name);
        for (int j = 0; j < 12; j++)
        {
            printf("%3d%c", curr.cases[j], " \n"[j == 11]);
        }
    }

    return 0;
}
