#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

typedef struct Pokemon_
{
    char name[100];
    int lv;
    int hp;
} Pokemon;

void print_pokes(std::vector<Pokemon> p, int n)
{
    for (int i = 0; i < n; i++)
    {
        Pokemon curr = p[i];
        std::cout << "Name: " << curr.name << "\n";
        std::cout << "Lv: " << curr.lv << "\n";
        std::cout << "HP: " << curr.hp << "\n";
        std::cout << "\n";
    }
}

bool cmp_name(const Pokemon &p1, const Pokemon &p2)
{
    if (strcmp(p1.name, p2.name) < 0)
        return true;
    return false;
}
bool cmp_lv(const Pokemon &p1, const Pokemon &p2) {
    return p1.lv < p2.lv;
}
bool cmp_hp(const Pokemon &p1, const Pokemon &p2) {
    return p1.hp < p2.hp;
}

int main(int argc, char *argv[])
{
    int n, m;
    std::cin >> n;
    // Pokemon* pokes = new Pokemon[n];
    std::vector<Pokemon> pokes(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> pokes[i].name;
        std::cin >> pokes[i].lv;
        std::cin >> pokes[i].hp;
    }
    std::cin >> m;

    if (m == 0)
        print_pokes(pokes, n);
    if (m == 1) {
        std::sort(pokes.begin(), pokes.end(), cmp_name);
        print_pokes(pokes, n);
    }
    if (m == 2) {
        std::sort(pokes.begin(), pokes.end(), cmp_lv);
        print_pokes(pokes, n);
    }
    if (m == 3) {
        std::sort(pokes.begin(), pokes.end(), cmp_hp);
        print_pokes(pokes, n);
    }

    return 0;
}
