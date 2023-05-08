#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[20];
    scanf("%s", name);

    FILE *f = fopen(name, "r");
    char curr[100];
    while (fscanf(f, " %s", curr) != EOF) {
        for (int i = 0; i < strlen(curr); i++) {
            curr[i] = toupper(curr[i]);
        } 

        printf("%s\n", curr);
    }
    fclose(f);
    
    return 0;
}
