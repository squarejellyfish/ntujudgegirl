#include <stdio.h>

int main() {
    char name[20];
    scanf("%s", name);

    FILE *f = fopen(name, "r");
    int n, curr, sum = 0;
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; i++) {
        fscanf(f, "%d", &curr);
        if (curr < 30) {
            sum += curr + 5;
        } else if (curr >= 30 && curr < 120) {
            sum += curr + 20;
        }
    }
    fclose(f);

    printf("%d minutes\n", sum);

    return 0;
}
