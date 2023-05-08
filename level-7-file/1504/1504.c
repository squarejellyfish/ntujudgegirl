#include <stdio.h>

int main() {
    int n;
    char name[20];
    scanf("%d %s", &n, name);

    FILE *f = fopen(name, "r");
    char curr[100];
    int c = 1;
    while (fscanf(f, " %s", curr) != EOF) {
        if (c % n != 0) {
            printf("%s ", curr);
        }
        c++;
    }
    fclose(f);

    return 0;
}
