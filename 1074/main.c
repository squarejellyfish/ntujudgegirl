#include <stdio.h>
#include <stdlib.h>

int main()
{
    char names[50][20];
    char phones[50][20];
    char emails[50][25];
    char mode;

    int count = 0;
    while (1)
    {
        scanf("%c", &mode);
        if (mode == 'q')
            break;

        switch (mode)
        {
        case 'i':
            scanf(" %s %s %s", names[count], phones[count], emails[count]);
            count++;
            break;
        case 'l':
            if (!count) {
                printf("No data.\n");
                break;
            }
            for (int i = 0; i < count; i++)
            {
                printf("#%d\n", i + 1);
                printf("Name: %s\n", names[i]);
                printf("Phone: %s\n", phones[i]);
                printf("Email: %s\n", emails[i]);
            }
            break;
        case 's':
        {
            char name[20];
            scanf(" %s", name);
            FILE *f = fopen(name, "w");
            fprintf(f, "%d\n", count);
            for (int i = 0; i < count; i++) {
                fprintf(f, "%s\t%s\t%s\n", names[i], phones[i], emails[i]);
            }
            fclose(f);
            break;
        }
        case 'o':
        {
            char name[20];
            scanf(" %s", name);

            FILE *f = fopen(name, "r");
            int n;
            fscanf(f, "%d", &n);
            for (int i = 0; i < n; i++) {
                fscanf(f, " %s %s %s", names[count], phones[count], emails[count]);
                count++;
            }
            fclose(f);
            break;
        }
        case 'c':
        {
            count = 0;
            break;
        }
        }
    }

    return 0;
}
