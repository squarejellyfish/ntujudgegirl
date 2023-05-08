#include <stdio.h>
#include <string.h>

struct Investor_ {
    char name[20];
    int amount;
};

typedef struct Investor_ Investor;

int main() {
    char name[20], path[20] = "../app/";
    scanf("%s", name);

    strcat(path, name);

    Investor investors[100];
    int c = 0, amount;
    FILE *f = fopen(path, "r");
    while (fscanf(f, "%s\n%d", name, &amount) != EOF) {
        Investor curr;
        strcpy(curr.name, name) ;
        curr.amount = amount;
        investors[c] = curr;
        c++;
    } 
    fclose(f);

    for (int i = 0; i < c - 1; i++) {
        int max = i;
        for (int j = i + 1; j < c; j++) {
            if (investors[j].amount > investors[max].amount) {
                max = j;
            } else if (investors[j].amount == investors[max].amount && strcmp(investors[j].name, investors[max].name) < 0) {
                max = j;
            }
        }
        Investor temp = investors[i];
        investors[i] = investors[max];
        investors[max] = temp;
    }

    for (int i = 0; i < c; i++) {
        printf("%s %d\n", investors[i].name, investors[i].amount);
    }

    return 0;
}

