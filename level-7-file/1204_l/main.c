#include <stdio.h>
#include <string.h>

struct Animal_ {
    char name[20];
    int amount;
};

typedef struct Animal_ Animal;

int main() {
    char name[20];
    scanf("%s", name);

    FILE *f = fopen(name, "r");
    int amount, c = 0;
    Animal animals[100];
    while (fscanf(f, "%s\n%d", name, &amount) != EOF) {
        if (amount > 50) {
            Animal curr;
            strcpy(curr.name, name);
            curr.amount = amount;
            animals[c] = curr;
            c++;
        }
    }
    fclose(f);

    for (int i = 0; i < c; i++) {
        printf("%s %d\n", animals[i].name, animals[i].amount);
    }

    return 0;
}
