#include <stdio.h>

int main(int argc, char const *argv[])
{
    char cont;
    while (1)
    {
        int grade;
        scanf("%d", &grade);
        if (grade >= 60)
        {
            printf("pass\n", grade);
        }
        else
        {
            printf("fail\n", grade);
        }
        scanf(" %c", &cont);
        if (cont == 'n')
            break;
    }

    return 0;
}
