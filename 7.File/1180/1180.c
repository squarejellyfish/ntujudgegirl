#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];
    scanf("%s", name);

    FILE *file = fopen(name, "r");
    float sum = 0;
    int count = 0;
    int num;
    while (fscanf(file, "%d", &num) != EOF) {
        printf("%d ", num);
        sum += num;
        count++;
    }
    fclose(file);

    printf("\n%.0f\n%.2f\n", sum, sum / count);

    return 0;
}
