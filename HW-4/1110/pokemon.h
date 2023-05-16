#include <iostream>

using std::string;

class Pokemon
{
  public:
    Pokemon()
    {
        this->name = "No Name";
        this->lv = 1;
        this->hpmax = 1;
        this->hpcur = 1;
    }
    Pokemon(string name, int lv, int hp)
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
        if (hp < 1) { std::cout << "Hp setting error.\n";
            hp = 1;
        }

        this->name = name;
        this->lv = lv;
        this->hpcur = hp;
        this->hpmax = hp;
    }
    ~Pokemon()
    {
        std::cout << name << " has returned to the nature."
                  << "\n";
    }

    void ShowInfo();
    void Attack(Pokemon &target);
    void Defense(int n);
    void Cure();
    void setData(string name, int lv, int hp);

  private:
    string name;
    int lv;
    int hpmax;
    int hpcur;
};
