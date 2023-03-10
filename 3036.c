#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[128], gender[128];
    int age;

    scanf("%s", &name);
    scanf("%d", &age);
    scanf("%s", &gender);

    printf("name:%s\n", name);
    printf("age:%d\n", age);
    printf("gender:%s\n", gender);

    return 0;
}
