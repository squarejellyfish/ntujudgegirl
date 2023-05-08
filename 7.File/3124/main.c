#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *eng = fopen("./english_list.csv", "r");
    FILE *math = fopen("./math_list.csv", "r");
    FILE *score = fopen("./Score.csv", "w");
    char dummy[30];
    fscanf(eng, "%s", dummy);
    fscanf(math, "%s", dummy);

    char curr[30];
    while (fscanf(eng, " %s", curr) != EOF) {
        int total = 0;
        char *p = strtok(curr, ",");
        fprintf(score, "%s,", p);
        printf("%s ", p);
        p = strtok(NULL, ",");
        total += atoi(p);

        fscanf(math, " %s", curr);
        p = strtok(curr, ",");
        p = strtok(NULL, ",");
        total += atoi(p);

        fprintf(score, "%d,\n", total);
        printf("%d\n", total);
    }
    fclose(eng);
    fclose(math);
    fclose(score);

    return 0;
}
