#include <stdio.h>

int main(int argc, char const *argv[])
{
    int password;
    scanf("%d", &password);
    if (password < 0 || password > 2000000000) {
        printf("Wrong Password Setting!\n");
        return 0;
    }

    int try;
    scanf("%d", &try);
    while (try != password)
    {
        printf("Wrong Password!\n");
        scanf("%d", &try);
    }
    printf("Correct!\n");
    

    return 0;
}
