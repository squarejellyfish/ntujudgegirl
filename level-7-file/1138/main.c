#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    scanf("%s", name);

    FILE *f = fopen(name, "r");

    char key[30], curr[30];
    fscanf(f, " %s", key);

    while (fscanf(f, " %s", curr) != EOF) {
        for (int i = 0; i < strlen(curr); i++) {
            if ((curr[i] == '1' && key[i] == '1') ||
                (curr[i] == '0' && key[i] == '0')) {
                printf("0");
            } else {
                printf("1");
            }
        }
        puts("");
    }
    fclose(f);

    return 0;
}
