#include <math.h>
#include <stdio.h>

int main() {
    char name[20];
    scanf("%s", name);

    FILE *f = fopen(name, "r");
    fscanf(f, "%s", name);
    int id;
    double score, sum = 0, c = 0;
    while (fscanf(f, "%d,%lf", &id, &score) != EOF) {
        int curr = (int)(sqrt(score) * 11);
        if (curr > 100)
            curr = 100;
        sum += curr;
        c++;
    }
    fclose(f);

    printf("%.1lf\n", sum / c);

    return 0;
}
