#include <iostream>

int main()
{
    // Цены товаров
    int priceDrink = 10;
    int priceFirst = 20;
    int priceSecond = 30;

    // Количество заказов клиента 1
    int c1_drink = 2;
    int c1_first = 1;
    int c1_second = 0;

    // Количество заказов клиента 2
    int c2_drink = 0;
    int c2_first = 3;
    int c2_second = 1;

    // Стоимость клиента 1
    int cost1 =
        c1_drink  * priceDrink +
        c1_first  * priceFirst +
        c1_second * priceSecond;

    // Стоимость клиента 2
    int cost2 =
        c2_drink  * priceDrink +
        c2_first  * priceFirst +
        c2_second * priceSecond;

    std::cout << "Стоимость заказа клиента 1: " << cost1 << std::endl;
    std::cout << "Стоимость заказа клиента 2: " << cost2 << std::endl;

    return 0;
}
