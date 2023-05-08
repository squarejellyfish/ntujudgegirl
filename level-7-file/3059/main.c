#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct Ingredient_ {
    char name[20];
    int amount;
};

typedef struct Ingredient_ Ingredient;

int main() {
    char name[20], name2[20];
    scanf("%s %s", name, name2);

    FILE *f = fopen(name, "r");
    int amount, c = 0;
    Ingredient ingredients[50];
    while (fscanf(f, " %s %d", name, &amount) != EOF) {
        for (int i = 0; i < strlen(name); i++) {
            name[i] = tolower(name[i]);
        }
        // check if ingredient already in list
        int found = 0;
        for (int i = 0; i < c; i++) {
            if (strcmp(ingredients[i].name, name) == 0) {
                ingredients[i].amount += amount;
                found = 1;
            }
        }

        if (!found) {
            Ingredient curr;
            strcpy(curr.name, name);
            curr.amount = amount;
            ingredients[c] = curr;
            c++;
        }
    }
    fclose(f);
    f = fopen(name2, "r");
    while (fscanf(f, " %s %d", name, &amount) != EOF) {
        for (int i = 0; i < strlen(name); i++) {
            name[i] = tolower(name[i]);
        }

        for (int i = 0; i < c; i++) {
            Ingredient curr = ingredients[i];
            if (strcmp(curr.name, name) == 0) {
                ingredients[i].amount -= amount;
            }
        }
    }
    fclose(f);

    for (int i = 0; i < c - 1; i++) {
        int min = i;
        for (int j = i + 1; j < c; j++) {
            if (ingredients[j].amount < ingredients[min].amount) {
                min = j;
            } else if (ingredients[j].amount == ingredients[min].amount && strcmp(ingredients[j].name, ingredients[min].name) < 0) {
                min = j;
            }
        }
        Ingredient temp = ingredients[i];
        ingredients[i] = ingredients[min];
        ingredients[min] = temp;
    }

    for (int i = 0; i < c; i++) {
        Ingredient curr = ingredients[i];
        if (curr.amount > 0)
            printf("%s %d\n", curr.name, curr.amount);
    }

    return 0;
}
