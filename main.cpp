/*
Тема: Введение в объектно-ориентированное программирование.

Задание.
Реализуйте класс Дробь. Необходимо хранить числитель
и знаменатель в качестве переменных-членов. Реализуйте
функции-члены для ввода данных в переменные-члены,
для выполнения арифметических операций (сложение,
вычитание, умножение, деление, и т.д.).
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
