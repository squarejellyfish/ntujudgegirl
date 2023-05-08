#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];
    int n;
    scanf("%s %d", name, &n);

    FILE *file = fopen(name, "w");
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        fprintf(file, "%d ", num);
    }
    fclose(file);

    return 0;
}
