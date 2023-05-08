#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];
    scanf("%s", name);

    FILE *file = fopen(name, "r");
    name[0] = 'w';
    FILE *wfile = fopen(name, "w");
    float sum = 0;
    int count = 0;
    int num;
    while (fscanf(file, "%d", &num) != EOF) {
        fprintf(wfile, "%d ", num);
        sum += num;
        count++;
    }
    fclose(file);

    fprintf(wfile, "\n%.0f\n%.2f\n", sum, sum / count);
    fclose(wfile);

    return 0;
}

