#include "Pokemon.h"
#include <iostream>

Pokemon::Pokemon()
{
    this->Name = "No Name";
    this->Lv = 1;
    this->HpMax = 1;
    this->HpCur = 1;
    this->itemNum = 0;
    this->items = new string[this->Lv];
}
Pokemon::Pokemon(string name, int lv, int hp)
{
    if (name.empty())
    {
        std::cout << "Name can't be empty.\n";
        name = "No Name";
    }
    if (lv < 1)
    {
        std::cout << "Lv setting error.\n";
        lv = 1;
    }
    if (hp < 1)
    {
        std::cout << "Hp setting error.\n";
        hp = 1;
    }

    this->Name = name;
    this->Lv = lv;
    this->HpCur = hp;
    this->HpMax = hp;
    this->itemNum = 0;
    this->items = new string[this->Lv];
}
Pokemon::~Pokemon()
{
    std::cout << Name << " has returned to the nature."
              << "\n";
}

void Pokemon::ShowInfo()
{
    std::cout << "Name: " << this->Name << "\n";
    std::cout << "Lv: " << this->Lv << "\n";
    std::cout << "HP: " << this->HpCur << "/" << this->HpMax << "\n";
    std::cout << "Items: ";
    for (int i = 0; i < this->itemNum; i++)
    {
        std::cout << this->items[i] << " ";
    }
    std::cout << "\n\n";
}

void Pokemon::setData(string name, int lv, int hp)
{
    if (name.empty())
    {
        std::cout << "Name can't be empty.\n";
        this->Name = "No Name";
        return;
    }
    if (lv < 1)
    {
        std::cout << "Lv setting error.\n";
        this->Lv = 1;
        return;
    }
    if (hp < 1)
    {
        std::cout << "Hp setting error.\n";
        this->HpCur = 1;
        this->HpMax = 1;
        return;
    }
}

void Pokemon::addItem(string item)
{
    if (this->itemNum == this->Lv)
    {
        std::cout << this->Name << " is full, cannot carry " << item << ".\n";
        return;
    }
    this->items[this->itemNum] = item;
    this->itemNum++;
}
