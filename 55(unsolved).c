#include <stdio.h>

int method_1()
{
    int m, n, x1, y1, origin_e1, origin_n1, f1, x2, y2, origin_e2, origin_n2, f2;
    long long time = 0;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &m, &n, &x1, &y1, &origin_e1, &origin_n1, &f1, &x2, &y2, &origin_e2, &origin_n2, &f2);

    int e1 = origin_e1, n1 = origin_n1, e2 = origin_e2, n2 = origin_n2;
    int r1_north = 1, r2_east = 1;
    while (f1 > 0 || f2 > 0)
    {
        if (r1_north && r2_east)
        {
            int fakex = x2, fakey = y2;
            if (x1 - x2 < 0 || y1 - y2 < 0)
            {
                fakex = x2 - m;
                fakey = y2 + n;
            }
            int dis_x = x1 - fakex;
            int dis_y = fakey - y1;
            if (dis_x == dis_y && dis_x < e2 && dis_y < n1 && f1 - dis_y >= 0 && f2 - dis_x >= 0)
            {
                printf("robots explode at time %lli", time);
            }
        }
        else
        {
            x1++;
            e1--;
            if (e1 == 0)
            {
                r1_north = 1;
                e1 = origin_e1;
            }
        }
        if (r2_east)
        {
            x2++;
            e2--;
            if (e2 == 0)
            {
                r2_east = 0;
                e2 = origin_e2;
            }
        }
        else
        {
            y2++;
            n2--;
            if (n2 == 0)
            {
                r2_east = 1;
                n2 = origin_n2;
            }
        }
        if (x1 >= m)
            x1 = 0;
        if (y1 >= n)
            y1 = 0;
        if (x2 >= m)
            x2 = 0;
        if (y2 >= n)
            y2 = 0;
        f1--;
        f2--;
        time++;
        // printf("%lli\n", time);
        if (x1 == x2 && y1 == y2)
        {
            // printf("(%d, %d) (%d, %d) time: %d\n", x1, y1, x2, y2, time);
            printf("robots explode at time %lli", time);
            return 0;
        }
        // printf("(%d, %d) (%d, %d) time: %d\n", x1, y1, x2, y2, time);
    }
    printf("robots will not explode");

    return 0;
}
int method_2()
{
    int m, n, x1, y1, origin_e1, origin_n1, f1, x2, y2, origin_e2, origin_n2, f2;
    long long time = 0;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &m, &n, &x1, &y1, &origin_e1, &origin_n1, &f1, &x2, &y2, &origin_e2, &origin_n2, &f2);

    while (1)
    {

        if (x1 == x2 && y1 == y2)
        {
            // printf("(%d, %d) (%d, %d) time: %d\n", x1, y1, x2, y2, time);
            printf("robots explode at time %lli", time);
            return 0;
        }
    }
}

int main(int argc, char const *argv[])
{

    return 0;
}
