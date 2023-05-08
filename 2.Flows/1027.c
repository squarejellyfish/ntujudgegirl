#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char password[100];
    scanf("%s", password);

    char try[100];
    scanf("%s", try);
    while (strcmp(try, password) != 0)
    {
        printf("Wrong Password!\n");
        scanf("%s", try);
    }
    printf("Correct!\n");

    return 0;
}
