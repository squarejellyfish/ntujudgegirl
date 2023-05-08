#include <stdio.h>

int main() {
    char name[20];
    scanf("%s", name);

    FILE *f = fopen(name, "r");
    int curr, sum = 0, c = 0;
    while (fscanf(f, "%d", &curr) != EOF) {
        sum += curr; 
        c++;
    }
    fclose(f);

    printf("%.2f\n", (float)sum / c);

    return 0;
}
