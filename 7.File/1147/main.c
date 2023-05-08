#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Book_
{
    char name[100];
    int count;
};

typedef struct Book_ Book;

int main()
{
    char name[30];
    scanf("%s", name);

    FILE *f = fopen(name, "r");
    char curr[100];
    int curr_c, c = 0;
    Book books[100];
    while (fscanf(f, " %[^,],%d", curr, &curr_c) != EOF)
    {
        for (int i = 0; i < strlen(curr); i++) {
            curr[i] = tolower(curr[i]);
        }
        int found = 0;
        for (int i = 0; i < c; i++)
        {
            if (strcmp(books[i].name, curr) == 0)
            {
                books[i].count += curr_c;
                found = 1;
            }
        }

        if (!found)
        {
            strcpy(books[c].name, curr);
            books[c].count = curr_c;
            c++;
        }
    }
    fclose(f);

    for (int i = 0; i < c - 1; i++) {
        int min = i;
        for (int j = i + 1; j < c; j++) {
            if (strcmp(books[j].name, books[min].name) < 0) {
                min = j;
            }
        } 

        Book temp = books[i];
        books[i] = books[min];
        books[min] = temp;
    }

    for (int i = 0; i < c; i++) {
        Book b = books[i];
        printf("%s,%d\n", b.name, b.count);
    }

    return 0;
}
