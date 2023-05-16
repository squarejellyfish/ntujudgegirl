#include <iostream>

class eCash
{
  public:
    eCash() { this->money = 0; }

    void store(int m)
    {
        if (m < 0)
        {
            std::cout << "eCash: Please enter a number > 0."
                      << "\n";
            return;
        }
        this->money += m;
        std::cout << "eCash: You stored " << this->money << ".\n";
    }

    void pay(int m)
    {
        if (m > this->money)
        {
            std::cout << "eCash: Insufficient balance."
                      << "\n";
            return;
        }
        if (m < 0) {
            std::cout << "eCash: Please enter a number > 0."
                      << "\n";
            return;
        }
        this->money -= m;
        std::cout << "eCash: You spend " << m << ".\n";
    }

    void display()
    {
        std::cout << "eCash: You remaining " << this->money << ".\n";
    }

  private:
    int money;
};

int main (int argc, char *argv[]) {
    eCash cash = eCash();
    char curr;
    while (1) {
        std::cin >> curr;
        if (curr == 'q') {
            std::cout << "eCash: Thank you. Bye Bye.\n";
            break;
        } 

        if (curr == 's') {
            int m;
            std::cin >> m;
            cash.store(m);
        }
        if (curr == 'p') {
            int m;
            std::cin >> m;
            cash.pay(m);
        }
        if (curr == 'd') {
            cash.display();
        }
    }

    return 0;
}
