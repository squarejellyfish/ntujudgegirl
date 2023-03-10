#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[5];
    scanf("%s", &name);

    printf("姓名\t座號\t分數\n王小明\t20\t40\n%s\t21\t100", name);

    return 0;
}