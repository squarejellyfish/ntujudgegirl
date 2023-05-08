#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[20];
    scanf("%s", name);

    FILE *f = fopen(name, "r");
    char curr[100];
    fscanf(f, "%[^\n]", curr);

    int a, b, c, d, hw;
    while (fscanf(f, " %[^,],%d,%d,%d,%d,%d", curr, &a, &b, &c, &d, &hw) != EOF) {
        double avg = ((double)a + b + c + d) / 4;
        double h = ((double)hw / 40) * 100;
        double total = avg * 0.7 + h * 0.3;

        if (total < 60 && h == 100) {
            total = 60;
        }

        printf("%s %.2lf\n", curr, total);
    }

    fclose(f); 

    return 0;
}
