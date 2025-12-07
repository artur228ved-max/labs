#include <iostream>

struct Prices
{
    int drink;
    int first;
    int second;
};

int CostDrink(int count, const Prices& p)
{
    return count * p.drink;
}

int CostFirst(int count, const Prices& p)
{
    return count * p.first;
}

int CostSecond(int count, const Prices& p)
{
    return count * p.second;
}

int TotalCost(int d, int f, int s, const Prices& p)
{
    return CostDrink(d, p) + CostFirst(f, p) + CostSecond(s, p);
}

int main()
{
    Prices prices{ 10, 18, 35 };

    int c1_drink, c1_first, c1_second;
    int c2_drink, c2_first, c2_second;

    std::cout << "Клиент 1\n";
    std::cout << "Сколько напитков? "; std::cin >> c1_drink;
    std::cout << "Сколько первых блюд? "; std::cin >> c1_first;
    std::cout << "Сколько вторых блюд? "; std::cin >> c1_second;

    std::cout << "\nКлиент 2\n";
    std::cout << "Сколько напитков? "; std::cin >> c2_drink;
    std::cout << "Сколько первых блюд? "; std::cin >> c2_first;
    std::cout << "Сколько вторых блюд? "; std::cin >> c2_second;

    int cost1 = TotalCost(c1_drink, c1_first, c1_second, prices);
    int cost2 = TotalCost(c2_drink, c2_first, c2_second, prices);

    std::cout << "\nСтоимость клиента 1: " << cost1 << " руб.\n";
    std::cout << "Стоимость клиента 2: " << cost2 << " руб.\n";

    return 0;
}
