#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

class Data {
    public:
        std::string type;
        int buy;
        int sell;

        Data(std::string type, int buy, int sell) {
            this->type.assign(type);
            this->buy = buy;
            this->sell = sell;
        }
};

Data datas[] = {
    Data("BMW", 8000, 20000),
    Data("Volkswagen", 7000, 18000),
    Data("Ferrari", 12000, 35000),
    Data("Proton", 4000, 50000),
    Data("Audi", 10000, 30000),
    Data("Lamborghini", 15000, 40000),
};

int find_buy(std::string car) {
    for (int i = 0; i < 6; i++) {
        if (datas[i].type == car) {
            return datas[i].buy;
        }
    }
    return -1;
}

int find_sell(std::string car) {
    for (int i = 0; i < 6; i++) {
        if (datas[i].type == car) {
            return datas[i].sell;
        }
    }
    return -1;
}

class Business
{
  public:
    Business()
    {
        this->car = 0;
        this->sellprice = 0;
        this->totalcost = 0;
        this->earn = 0;
        this->garage.clear();
    }

    void store(std::string car)
    {
        if (this->car == 10)
        {
            std::cout << "Garage FULL!\nCar not stored!\n";
            return;
        }
        this->garage.push_back(car);
        this->totalcost += find_buy(car);
        this->car++;
        std::cout << "Store in a car.\nType: " << car
                  << "\nnumber car in garage: " << this->car << "\n";
    }

    void sell(std::string car)
    {
        if (std::find(this->garage.begin(), this->garage.end(), car) ==
            this->garage.end())
        {
            std::cout << "Car not found!\n";
            return;
        }
        int price = find_sell(car);
        this->earn += price;
        this->garage.erase(std::find(this->garage.begin(), this->garage.end(), car));
        this->car--;
        std::cout << "You sell a car.\nType: " << car
                  << "\nSell price: " << price 
                  << "\nnumber car left in garage: " << this->car << "\n";
    }

    void displayi()
    {
        this->sellprice = 0;
        for (int i = 0; i < this->car; i++)
        {
            std::string type = this->garage[i];
            this->sellprice += find_sell(type);
        }
        std::cout << "Sell price= " << this->sellprice << "\n";
    }

    void displaycost()
    {
        std::cout << "Total cost= " << this->totalcost << "\n";
    }

    void displayp() { std::cout << "Profit= " << this->earn - this->totalcost << "\n"; }

  private:
    std::vector<std::string> garage;
    int car;
    int sellprice;
    int totalcost;
    int earn;
};

int main(int argc, char *argv[])
{
    Business bs = Business();
    char curr;
    while (1)
    {
        std::cin >> curr;
        if (curr == 'q')
        {
            std::cout << "Thank you for visiting XMing_Garage. Bye bye.\n";
            break;
        }

        if (curr == 'a')
        {
            std::string car;
            std::cin >> car;
            bs.store(car);
        }
        if (curr == 's')
        {
            std::string car;
            std::cin >> car;
            bs.sell(car);
        }
        if (curr == 'c')
        {
            bs.displaycost();
        }
        if (curr == 'i')
        {
            bs.displayi();
        }
        if (curr == 'p')
        {
            bs.displayp();
        }
    }

    return 0;
}
