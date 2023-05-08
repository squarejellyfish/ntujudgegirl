#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];
    int n1, n2;
    scanf("%s", name);
    scanf("%d", &n2);

    FILE *file = fopen(name, "r");
    fscanf(file, "%d", &n1);
    fclose(file);

    FILE *file2 = fopen("wr01.txt", "w");
    for (int i = 0; i < n1 + n2; i++) {
        fprintf(file, "%d ", i + 1);
    }
    fclose(file);

    return 0;
}
