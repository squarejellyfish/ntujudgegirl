#include <stdio.h>

int main() {
    char name[20];
    scanf("%s", name);

    FILE *f = fopen(name, "r");
    char mac[30];
    int c = 0;
    while (fscanf(f, " %s %s", name, mac) != EOF) {
        printf("%s %s\n", name, mac); 
        c++;
    }
    fclose(f);

    printf("There are %d users\n", c);

    return 0;
}
