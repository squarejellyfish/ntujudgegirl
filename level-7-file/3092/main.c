#include <stdio.h>
#include <string.h>

int main() {
    char name[20], path[20] = "../app/";
    scanf("%s", name);

    strcat(path, name);
    FILE *f = fopen(path, "r");
    int sal, c = 0;
    double sum = 0;
    while (fscanf(f, " %s %d", name, &sal) != EOF) {
        printf("chef %s %d\n", name, sal);
        sum += sal;
        c++;
    }
    fclose(f);

    printf("Total: %.0lf\n", sum);
    printf("Avg: %.2lf\n", sum / c);

    return 0;
}
