#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int pistol = 0, smg = 0, shotgun = 0, ar = 0, sniper = 0;
    char name[20];
    scanf("%s", name);

    FILE *f = fopen(name, "r");
    char curr[30];
    while (fscanf(f, " %s", curr) != EOF) {
        char *p = strtok(curr, "-");

        if (strcmp(p, "PISTOL") == 0)
            pistol++;
        if (strcmp(p, "SMG") == 0)
            smg++;
        if (strcmp(p, "SHOTGUN") == 0)
            shotgun++;
        if (strcmp(p, "AR") == 0)
            ar++;
        if (strcmp(p, "SNIPER") == 0)
            sniper++;
    }
    fclose(f);

    printf("%d %d %d %d %d\n", pistol, smg, shotgun, ar, sniper);

    return 0;
}
