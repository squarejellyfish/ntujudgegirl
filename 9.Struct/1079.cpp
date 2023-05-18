#include <iostream>
#include <istream>
#include <ostream>

class Pokemon {
    public:
        char name[100];
        int lv;
        int hp;
        
    friend std::istream& operator>>(std::istream &is, Pokemon &p) {
        is >> p.name >> p.lv >> p.hp;
        return is;
    }
    friend std::ostream& operator<<(std::ostream &os, Pokemon &p) {
        os << "Name: " << p.name << "\n";
        os << "Lv: " << p.lv << "\n";
        os << "HP: " << p.hp << "\n";
        return os;
    }
};

int main(int argc, char *argv[])
{
    Pokemon mons[3];

    for (int i = 0; i < 3; i++) {
        std::cin >> mons[i];
    }

    int max = 0;
    for (int i = 0; i < 3; i++) {
        if (mons[i].lv > mons[max].lv) max = i;
    }
    std::cout << mons[max];

    return 0;
}

