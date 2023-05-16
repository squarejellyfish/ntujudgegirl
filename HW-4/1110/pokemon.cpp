#include "pokemon.h"
#include <iostream>

void Pokemon::ShowInfo()
{
    std::cout << "Name: " << this->name << "\n";
    std::cout << "Lv: " << this->lv << "\n";
    std::cout << "HP: " << this->hpcur << "/" << this->hpmax << "\n";
    std::cout << "\n";
}

void Pokemon::setData(string name, int lv, int hp) {
    if (name.empty()) {
        std::cout << "Name can't be empty.\n";
        this->name = "No Name";
        return;
    }
    if (lv < 1) {
        std::cout << "Lv setting error.\n";
        this->lv = 1;
        return;
    }
    if (hp < 1) {
        std::cout << "Hp setting error.\n";
        this->hpcur = 1;
        this->hpmax = 1;
        return;
    }
}
