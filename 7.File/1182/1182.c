#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];
    int n;
    scanf("%s %d", name, &n);

    FILE *file = fopen(name, "w");
    float sum = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        sum += num;

        fprintf(file, "%d ", num);
    }
    fclose(file);

    printf("%.0f\n%.2f\n", sum, sum / n);

    return 0;
}
