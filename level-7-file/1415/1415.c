#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char name[20];
    scanf("%s", name);

    int fail[100], c = 0;
    FILE *f = fopen(name, "r");
    int id;
    double score;
    char dummy[10];
    fscanf(f, "%s", dummy);
    while (fscanf(f, "%d,%lf", &id, &score) != EOF) {
        if (sqrt(score) * 11 < 60) {
            fail[c] = id;
            c++;
        }
    }
    fclose(f);

    for (int i = 0; i < c - 1; i++) {
        int min = i;
        for (int j = i + 1; j < c; j++) {
            if (fail[j] < fail[min]) {
                min = j;
            }
        }
        int temp = fail[i];
        fail[i] = fail[min];
        fail[min] = temp;
    }

    for (int i = 0; i < c; i++) {
        (i == 0) ? printf("%d", fail[i]) : printf(" %d", fail[i]);
    }

    return 0;
}
