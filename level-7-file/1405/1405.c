#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[100];
    scanf("%s", name);

    FILE *file = fopen(name, "r");
    char curr[50];
    fscanf(file, "%s", curr);

    int count = 0, fail[100], fail_c = 0;
    double sum = 0;
    double id, a, b, c, d;
    while (fscanf(file, "%lf,%lf,%lf,%lf,%lf", &id, &a, &b, &c, &d) != EOF) {

        double score = a * 0.1 + (b + c) * 0.25 + d * 0.4;
        sum += score;

        if (score < 60) {
            fail[fail_c] = (int)id;
            fail_c++;
        }

        count++;
    }
    fclose(file);

    printf("%.0f\n", sum / count);

    for (int i = 0; i < fail_c - 1; i++) {
        int min = i;

        for (int j = i + 1; j < fail_c; j++) {
            if (fail[j] < fail[min]) {
                min = j;
            }
        }

        int temp = fail[i];
        fail[i] = fail[min];
        fail[min] = temp;
    }

    int pd = 0;
    for (int i = 0; i < fail_c; i++) {
        if (!pd) {
            printf("%d", fail[i]);
            pd = 1;
        } else {
            printf(" %d", fail[i]);
        }
    }
    puts("");

    return 0;
}
