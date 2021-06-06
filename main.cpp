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
#include "Fraction.h"

int main()
{
    Fraction fraction = Fraction();
    fraction.addition(1, 2, 3, 4);
    cout << endl;
    fraction.addition(2, 4, 1, 3);
    cout << endl;

    fraction.subtraction(3, 2, 5, 6);
    cout << endl;
    fraction.subtraction(1, 3, 4, 7);
    cout << endl;

    fraction.multiplication(2, 7, 3, 2);
    cout << endl;
    fraction.multiplication(4, 5, 1, 6);
    cout << endl;

    fraction.division(1, 3, 4, 5);
    cout << endl;
    fraction.division(7, 8, 2, 3);
}
