/*
Тема: Перегрузка инкремента и декремента. Перегрузка
логических операторов. Возврат по ссылке. Перегрузка
оператора присваивания

Задание.
Создать класс Flat (квартира).
Реализовать перегруженные операторы:
1. Проверка на равенство площадей квартир (операция
==).
2. Операцию присваивания одного объекта в другой
(операция =).
3. Сравнение двух квартир по цене (операция>).
 */

#include <iostream>
#include "Flat.h"

bool operator>(const Flat& flat1, const Flat flat2) {
    return flat1.price > flat2.price;
}

int main()
{
    Flat flat1 = Flat();
    Flat flat2 = Flat(45, 2000000, 2);
    Flat flat3 = Flat(60, 2500000, 3);

    std::cout << (flat1 == flat2) << std::endl;

    flat1 = flat2;
    std::cout << (flat1 == flat2) << std::endl;

    std::cout << (flat2 > flat3) << std::endl;
    std::cout << (flat3 > flat2) << std::endl;
}
