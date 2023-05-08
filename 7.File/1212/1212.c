#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    scanf("%s", name);

    FILE *file = fopen(name, "r");
    while (1) {
        char curr;
        fscanf(file, "%c", &curr);
        if (feof(file)) {
            break;
        }
        printf("%c", curr);
    }
    fclose(file);
    
    return 0;
}
