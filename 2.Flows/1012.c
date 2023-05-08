#include <stdio.h>

int main(int argc, char const *argv[])
{
    int role, score;
    scanf("%d", &role);
    if (role < 1 || role > 2)
    {
        printf("role error");
        return 0;
    }
    scanf("%d", &score);
    if (score < 0 || score > 100)
    {
        printf("score error");
        return 0;
    }

    if (role == 1)
    {
        if (score >= 60)
            printf("pass");
        else
            printf("fail");
        return 0;
    }

    if (score >= 70)
        printf("pass");
    else
        printf("fail");

    return 0;
}
