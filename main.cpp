/*
Тема:
 Функции-члены, генерируемые автоматически,
ключевые слова default и delete по отношению к классам,
перегрузка [] и (), перегрузка операторов преобразования типа.

Задание:
В ранее созданный класс String добавьте перегрузку [], (),
преобразования типа к int:
•	 [] — возвращает элемент по указанному индексу;
•	 () — ищет символ в строке, если символ есть возвращает индекс, если нет –1.
Преобразование к int возвращает длину строки.
 */

#include <iostream>
#include "MyString.h"

int MyString::strCount {0};

int main() {
    setlocale(LC_ALL, "");

    /*
    MyString str1 {};
    str1.addStr();
    str1.printStr();

    MyString str2 {125};
    str2.printStr();
     */

    MyString str3 {"Hello world!"};
    str3.printStr();

    MyString str4 {str3};
    str4.printStr();

    MyString::printStrCount();

    std::cout << str4[4] << std::endl;

    std::cout << str4('o') << std::endl;
    std::cout << str4('z') << std::endl;

    std::cout << (int)str4 << std::endl;

    return 0;
}