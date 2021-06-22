/*
Тема: Конструктор переноса

Задание
Добавить в уже существующий класс String конструктор
переноса.
 */

#include <iostream>
#include "MyString.h"

int MyString::strCount {0};

int main() {
    setlocale(LC_ALL, "");

    MyString str1 {};
    str1.addStr();
    str1.printStr();

    MyString str2 {125};
    str2.printStr();

    MyString str3 {"Hello world!"};
    str3.printStr();

    MyString str4 {str3};
    str4.printStr();

    MyString::printStrCount();

    return 0;
}